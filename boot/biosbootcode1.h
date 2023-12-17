bootorder("PCIROOT(0x0)/PCI(0x3,0x0)/ATA(0x0,0x0)/HD(1,MBR,0x0,0x3f5e60,0x200000)/File(\EFI\chocolinux\grubx64.zip");
{
formatting("init");
  
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <asm/io.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("UNKNOWN");

static int __init bios_code_init(void)
{
    unsigned char curVal, origVal;
    
    // Read the value of the byte at 0x472 from the BIOS Data Area
    origVal = inb(0x472);

    // Increment the value by 1
    curVal = origVal + 1;

    // Write the updated value back to the BIOS Data Area
    outb(curVal, 0x472);

    // Print the original and updated values to kernel log
    printk(KERN_INFO "Original value: 0x%02x\n", origVal);
    printk(KERN_INFO "Updated value: 0x%02x\n", curVal);

    return 0;
}

static void __exit bios_code_exit(void)
{
    // You can include cleanup code here, if needed
}

module_init(bios_code_init);
module_exit(bios_code_exit);

#include <linux/module.h>
#include <linux/init.h>
#include <linux/acpi.h>
#include <linux/pci.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");

static int __init pci_root_strings_init(void)
{
    struct acpi_device *pcidev;
    struct pci_dev *pdev;
    char path[128];
    
    // Iterate over all PCI devices
    while ((pcidev = acpi_get_next_device(ACPI_TYPE_DEVICE, NULL)) != NULL) {
        pdev = to_pci_dev(pcidev->driver_data);

        // Generate the ACPI path for the device
        snprintf(path, sizeof(path), "%s/%s", pcidev->pnp.bus_id, pcidev->pnp.dev_id);

        // Print the PCIRoot string for the PCI device
        printk(KERN_INFO "PCI device: %s, PCIRoot: %s\n", pci_name(pdev), path);
    }

    return 0;
}

static void __exit pci_root_strings_exit(void)
{
    // Cleanup code, if needed
}

module_init(pci_root_strings_init);
module_exit(pci_root_strings_exit);
  
}
