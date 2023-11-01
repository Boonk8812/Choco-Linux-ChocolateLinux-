import time

def probe_pci_hardware():
    for _ in range(382):
        # Code to probe PCI hardware goes here
        time.sleep(0.065)  # Simulating the probing process
        print("Probing PCI hardware...")

def probe_ram():
    for _ in range(180002):
        # Code to probe RAM goes here
        time.sleep(0.00035)  # Simulating the probing process
        print("Probing RAM...")

try:
    start_time = time.time()

    # Probing PCI hardware
    probe_pci_hardware()

    # Probing RAM
    probe_ram()

    end_time = time.time()
    elapsed_time = end_time - start_time
    print(f"Probing completed in {elapsed_time:.2f} seconds.")

except Exception as e:
    print(f"An error occurred: {str(e)}")
