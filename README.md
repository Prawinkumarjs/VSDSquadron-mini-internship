#  VSDSquadron Reseacrh Internship 2024

The program is based on the RISC-V architecture and uses open-source tools to teach people about VLSI chip design and RISC-V. The instructor for this internship is Kunal Ghosh Sir.

##  Basic Details

**Name:** Prawin Kumar J S   
**College:** RajaLakshmi Institute of Technology, Chennai

**Email ID:** prawink554@gmail.com  
**GitHub Profile:** [prawinkumarjs](https://github.com/Prawinkumarjs)  
**LinkedIN Profile:** [prawin-kumar-j-s](www.linkedin.com/in/prawin-kumar-j-s)

----------------------------------------------------------------------------------------------------------------

<details>

<summary><h3>Task 1: </h3> 
<h2>Installation of RISC-V toolchain using VDI. Uploading the snapshot of compiled C code and RISC-V Objdmp on the GitHub repo</h2>
</summary>

The task 1 of the internship includes the following
- Installation of RISC-V toolchain using VDI.
- C Program for sum from one to n.
- Checking the result of C code
- RISC-V Simulator for compiling and running the code
- Assembly language

Overall, it is about writing the C code for sum from one to n followed by compiling and running by RISC-V Simulator.

 The steps to be followed are:
 
#### Step 1: Installation of Oracle VirtualBox.

The VirtualBox is an open source software and an operating system which runs as a physical computer inside the pc/laptop. 

![Screenshot (567)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/48ae5d97-0ce1-40bd-9403-e60d255d4758)

#### Step 2: Open the terminal inside the VirtualBox

![Terminal inside the VM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/5e831292-ae27-4409-b6d4-dc98b50fb88a)

#### Step 3: To open the editor named leafpad for writing C code.

![Screenshot (568)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/baf5e27b-ee8b-42a9-b2c7-e40bb88c33d8)
 Note for the above command explanation:
 - command line cd is to check for home directory.
 - leafpad to open editor.
 - sum_one_to_one is the file name for C code to be written in editor.


#### Step 4: Write the C program for sum of one to n in the terminal 

The leafpad editor opened, write the simple c code for sum of 1 to n,

![Screenshot (570)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/6e565127-674e-47c4-8c48-f142e319ebce)

Save the file in the editor


![C Code for sum from one to n](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/37e5d37e-7b55-49ce-8aef-70d3d9f57d0e)


#### Step 5: To check the result of C code

- Type the below command line to ensure the file is saved.
  
![WhatsApp Image 2024-06-23 at 11 39 36 PM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/c70488ff-78d7-4c14-910c-28feea698aca)

- This ./a.out command will generate the output 

![WhatsApp Image 2024-06-23 at 11 39 36 PM (1)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/093bd684-20dc-4a5d-bdbf-57e5aa9de063)



- The sum for 1 to 5 is 15 which is also verified using calculator


![with cc](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/42492408-96b8-4275-95ae-c7966b65854a)

#### Step 6: Compile and run the C code using RISC-V Simulator 

- Compile the code with RISC-V compiler by using the command line
  
![Screenshot (572)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/db9d65fc-a0bd-4104-9d12-d77d19614d07)

- Run the C code by RISC-V Simulator using below

![Screenshot (573)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/cd4c2428-a270-4d1e-a75c-0b09c212ecd2)



![compile riscv with gcc![Uploading Screenshot (572).png…]()
 ](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/dbf0af7d-fe05-4547-a280-7b710e39f924)


#### Step 7: Assembly code 
- Command line for generating the assembly code is:

![WhatsApp Image 2024-06-24 at 12 08 16 AM](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/0850193a-d680-4772-a4b8-52e08c05c943)

- The Assembly codes:

![assembly code of C code](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/0ce26ef8-3b1e-41dd-8830-217cddd2d7fc)


- After that type out this line;

![WhatsApp Image 2024-06-24 at 12 08 16 AM (1)](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/2cc69a0e-c167-4320-bf89-a7910f76ac37)

#### Step 8: Search the main() 

![main section of assembly code](https://github.com/EkthaReddy/vsdsquadron-mini-internship/assets/152515939/053a0a17-79c8-48af-8227-f59f7dd6786e)

</details>

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

<details>
<summary>
 <h3>Task2:</h3>
</b> <h2>Performing SPIKE Simulation and Debugging a simple C code with Interactive Debugging Mode using Spike</h2></summary> 
  
### What is SPIKE in RISCV?
> * A RISC-V ISA is a simulator, enabling the testing and analysis of RISC-V programs without the need for actual hardware.  
> * Spike is a free, open-source C++ simulator for the RISC-V ISA that models a RISC-V core and cache system. It can be used to run programs and a Linux kernel, and can be a starting point for running software on a RISC-V target.  
  
### What is pk (Proxy Kernel)?  
> * The RISC-V Proxy Kernel, pk , is a lightweight application execution environment that can host statically-linked RISC-V ELF binaries.  
> * A Proxy Kernel in the RISC-V ecosystem simplifies the interaction between complex hardware and the software running on it, making it easier to manage, test, and develop software and hardware projects.  
 

### Testing the SPIKE Simulator  
The target is to run the ```sum1ton.c``` code using both ```gcc compiler``` and ```riscv compiler```, and both of the compiler must display the same output on the terminal. So to compile the code using **gcc compiler**, use the following command:  
```
gcc sum1ton.c  
./a.out
```
And to compile the code using **riscv compiler**, use the following command:  
```
spike pk sum1ton.o
```  
![Spike Simulation](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/1.png)

#### Following are the snapshots of RISCV Objdump with **-O1** and **-Ofast** options  
RISCV Objdump with -O1 option  

![Objdump in -O1](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/Objdump%20in%20-O1.png)

RISCV Objdump with -Ofast option  

![Objdump in -Ofast](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/3.png)

### Debugging the Assembly Language Program of  ```sum1ton.c```  
* Open the **Objdump** of code by using the following command  
```
$ riscv64-unknown-elf-objdump -d sum1ton.o | less  
```
* Open the debugger in another terminal by using the following command  
```
$ spike -d pk sum1ton.o
```
* The debugger will be opened in the terminal. Now, debugging operations can be performed as shown in the following snapshot.

![Debugging](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/2.png) 


================================================================================


<details>
 <summary> 
  <h2>
   Digital Design Application - RISC-V Simple Counter Program
 </h2> 
 </summary>

This repository contains a simple RISC-V counter program written in C. Follow the instructions below to set up, build, and run the program using the RISC-V toolchain, Spike simulator, and proxy kernel (pk).

## Prerequisites

- **RISC-V Toolchain**: For compiling RISC-V code.
- **Spike Simulator**: To run RISC-V binaries.
- **Proxy Kernel (pk)**: Provides a runtime environment for running RISC-V binaries.

## Step-by-Step Instructions

### 1. Clone the Repository

Clone this repository to your local machine:

```sh
git clone https://github.com/Prawinkumarjs/VSDSquadron-mini-internship.git
cd VSDSquadron-mini-internship
```

### 2. Install the RISC-V Toolchain

Follow the [installation instructions](https://github.com/riscv/riscv-gnu-toolchain) for your platform. For example, on Ubuntu:

```sh
sudo apt-get update
sudo apt-get install gcc-riscv64-linux-gnu
```

### 3. Install Spike and pk

Follow the installation instructions for Spike and pk. Example installation for Spike:

```sh
# Clone Spike repository
git clone https://github.com/riscv/riscv-isa-sim.git
cd riscv-isa-sim
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

For pk:

```sh
# Clone pk repository
git clone https://github.com/riscv/riscv-pk.git
cd riscv-pk
mkdir build
cd build
../configure --prefix=/opt/riscv
make
make install
```

Ensure `/opt/riscv/bin` is in your `PATH`.

### 4. Create the Source File

Create the `simplecounter.c` source file using Leafpad:

```sh
leafpad simplecounter.c
```

In Leafpad, enter the following code:

```c
#include <stdio.h>
#include <unistd.h>  // For usleep() in POSIX systems

int main() {
    int counter = 0;
    int end_value = 10;  // Set the end value

    printf("Simple Digital Counter\n");

    while (counter <= end_value) {  // Loop until counter reaches end value
        printf("Counter: %d\n", counter);
        counter++;  // Increment the counter
        usleep(1000000);  // Wait for 1 second (1,000,000 microseconds)
    }

    printf("Counter reached the end value of %d. Stopping.\n", end_value);

    return 0;
}
```
![1](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/1.png)

Save and close Leafpad.

### 5. Compile the Program

Compile and link the source code into an executable:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o simplecounter simplecounter.c
```
![3](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/3.png)

### 6. View the Object File (Optional)

If you need to view the object file, first compile to object file:

```sh
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -c simplecounter.c -o simplecounter.o
```
![3](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/3.png)
To view the object file, use:

 ```sh
    riscv64-unknown-elf-objdump -d simplecounter.o
```
![4](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/4.png)
### 7. Run the Program

To execute the compiled program with Spike and pk, use:

 ```sh
    spike pk simplecounter
```
![5](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/5.png)

### 8. Debug the Program (Optional)

For detailed debugging output, run:

```sh
    spike -d pk simplecounter
```
![6](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/6.png)

### 9. View the File Content (Optional)

To view the content of the source file or object file, use `cat`:

 ```sh
    cat simplecounter.c
 ```

```sh
    cat simplecounter.o
```
![2](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/2.png)

### Example Output
When running the program, you should see:

```
Simple Digital Counter
Counter: 0
Counter: 1
Counter: 2
Counter: 3
Counter: 4
Counter: 5
Counter: 6
Counter: 7
Counter: 8
Counter: 9
Counter: 10
Counter reached the end value of 10. Stopping.
```
![Example](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%202/Digital%20Design%20Application%20-%20Simple%20Counter%20using%20C%20programming/1.png)

 ### Troubleshooting

- **Compilation Issues**: Ensure the RISC-V toolchain is properly installed and configured.
- **Execution Issues**: Verify that `spike` and `pk` are correctly                                                    installed and accessible in your `PATH`.                                                
- **Path Problems**: Ensure that all necessary binaries (e.g., `spike`, `pk`) are in your system’s `PATH`, or provide full paths to these executables.
</details>

</details>

----------------------------------------

<details><summary>
 <h2>
  Task 3: 
 </h2><br>
 
<h2> RISC-V Instruction Types & 32-Bit Instruction Code </h2>
</summary>

The RISC-V instruction set architecture (ISA) defines several types of instructions, each with a specific format. Below is a summary of the main instruction types:


![RISC-V](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%203/RISC-V%20Instruction.png)

## R-Type (Register-Register)

- **Purpose**: Used for operations that involve two source registers and one destination register.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `func7`: Function modifier (additional)

- **Example**: `add x1, x2, x3`

## I-Type (Immediate)

- **Purpose**: Used for operations with one source register and an immediate value, including loads.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register
  - `imm[11:0]`: Immediate value

- **Example**: `addi x1, x2, 10`

## S-Type (Store)

- **Purpose**: Used for store instructions, which write a register's value to memory.
- **Fields**:
  - `opcode`: Operation code
  - `imm[11:5]`: Immediate value (upper 7 bits)
  - `func3`: Function modifier
  - `rs1`: Source register (base address)
  - `rs2`: Source register (data to store)
  - `imm[4:0]`: Immediate value (lower 5 bits)

- **Example**: `sw x2, 0(x1)`

## B-Type (Branch)

- **Purpose**: Used for conditional branch instructions.
- **Fields**:
  - `opcode`: Operation code
  - `imm[12]`: Immediate value (bit 12)
  - `imm[10:5]`: Immediate value (bits 10 to 5)
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `imm[4:1]`: Immediate value (bits 4 to 1)
  - `imm[11]`: Immediate value (bit 11)

- **Example**: `beq x1, x2, label`

## U-Type (Upper Immediate)

- **Purpose**: Used for instructions that operate with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[31:12]`: Immediate value

- **Example**: `lui x1, 0x10000`

## J-Type (Jump)

- **Purpose**: Used for jump instructions with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[20]`: Immediate value (bit 20)
  - `imm[10:1]`: Immediate value (bits 10 to 1)
  - `imm[11]`: Immediate value (bit 11)
  - `imm[19:12]`: Immediate value (bits 19 to 12)

- **Example**: `jal x1, label`

# 32-bit Instruction Codes in RISC-V Instruction Type Format

1. **`addi x1, x2, 10`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000010 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00210093`

2. **`li x5, 0x0`**  
   - **Instruction Format**: I-type (using `addi x5, x0, 0x0`)  
   - **Binary Encoding**: `000000000000 00000 000 00101 0010011`  
   - **32-bit Instruction Code**: `0x00000293`

3. **`lui x10, 0x20000`**  
   - **Instruction Format**: U-type  
   - **Binary Encoding**: `00100000000000000000 01010 0110111`  
   - **32-bit Instruction Code**: `0x20000537`

4. **`mv x1, x2`**  
   - **Instruction Format**: I-type (using `addi x1, x2, 0`)  
   - **Binary Encoding**: `000000000000 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00010093`

5. **`sw x5, 0(x10)`**  
   - **Instruction Format**: S-type  
   - **Binary Encoding**: `0000000 00101 01010 010 00000 0100011`  
   - **32-bit Instruction Code**: `0x0050a023`

6. **`lw x5, 0(x10)`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000000 01010 010 00101 0000011`  
   - **32-bit Instruction Code**: `0x0000a283`

7. **`jal x0, 0x100`**  
   - **Instruction Format**: J-type  
   - **Binary Encoding**: `00000000000100000000 00000 1101111`  
   - **32-bit Instruction Code**: `0x0000086f`

8. **`beq x1, x2, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00010 00001 000 00010 1100011`  
   - **32-bit Instruction Code**: `0x00210063`

9. **`bne x1, x3, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00011 00001 001 00010 1100011`  
   - **32-bit Instruction Code**: `0x00310063`

10. **`slli x5, x1, 1`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00001 00101 001 00001 0010011`  
    - **32-bit Instruction Code**: `0x00109093`

11. **`srli x6, x2, 2`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00010 00110 101 00010 0010011`  
    - **32-bit Instruction Code**: `0x0022b093`

12. **`and x3, x4, x5`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00101 00100 111 00011 0110011`  
    - **32-bit Instruction Code**: `0x005201b3`

13. **`or x2, x3, x4`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00100 00011 110 00010 0110011`  
    - **32-bit Instruction Code**: `0x004181b3`

14. **`sub x3, x5, x2`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0100000 00010 00101 000 00011 0110011`  
    - **32-bit Instruction Code**: `0x402282b3`

15. **`xor x1, x2, x3`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00011 00010 100 00001 0110011`  
    - **32-bit Instruction Code**: `0x003100b3`



</details>

-------------------------------------------------------------------------


<details>
<summary><h2>Task 4:</h2> 
 <br>
 <h2>
 By making use of RISCV Core: Verilog Netlist and Testbench, perform an experiment of Functional Simulation and observe the waveforms  
 </h2>
  <br>
  </summary>

>***NOTE:** Since the designing of RISCV Architecture and writing it's testbench is not the part of this Research Internship, so we will use the Verilog Code and Testbench of RISCV that has already been designed. The reference GitHub repository is : [iiitb_rv32i](https://github.com/vinayrayapati/rv32i/)*    
  
### Steps to perform functional simulation of RISCV  

## GTKWAVE Generation Process

Follow the steps below to generate the waveform using Verilog code and GTKWAVE.

### Step 1: Clone the Repository

Clone the RISC-V Verilog repository using the `git clone` command.

```bash
git clone https://github.com/vinayrayapati/rv321
```

### Step 2: Navigate to the Cloned Directory
Change the directory to the cloned repository.

```bash
cd rv321
```

### Step 3: Compile the Verilog Code and Testbench
Run the following `iverilog` command to compile the Verilog code and testbench.

```bash
iverilog -o iiitb_rv32i iiitb_rv32i.v iiitb_rv32i_tb.v
```
### Step 4: Simulate the Verilog Code
After compiling, simulate the Verilog code by running the compiled file:
```bash
./iiitb_rv321
```

![Main](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/Main.png)

### Step 5: Open the Waveform in GTKWAVE
Once the simulation generates the .vcd (Value Change Dump) file, you can visualize the waveform in GTKWAVE.
```bash
gtkwave iiitb_rv321.vcd
```

It will open the new window of GTKWAVE 

![1](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%201.png)

Tap the `iiitb_rv32i_tb` in the `SST` section

![2](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%202.png)

Now, drag the command in the same way presented under `time` section.

![4](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/gtkwave%204.png)

Select the instructions from EX_MEM_IR[31:0] to present the instructions used in Task 3 and Analysing the Output Waveform of various instructions that we have covered in TASK-3.

 ***Instruction ADD r1, r2, r3 :***
 
![Instruction ADD r1, r2, r3 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/ADD%20r1%2Cr2%2Cr3.png)

**Instruction SUB r3, r1, r2 :**

![Instruction SUB r3, r1, r2 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SUB%20r3%2C%20r1%2C%20r2.png)

**Instruction AND r2, r1, r3 :**

![Instruction AND r2, r1, r3 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/AND%20r2%2C%20r1%2C%20r3.png)

**Instruction OR r8, r2, r5 :**

![Instruction OR r8, r2, r5 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/OR%20r8%2C%20r2%2C%20r5.png)

**Instruction XOR r8, r1, r4 :**

![Instruction XOR r8, r1, r4 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/XOR%20r8%2C%20r1%2C%20r4.png)

**Instruction SLL r15, r11, r2 :**

![Instruction SLL r15, r11, r2 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SLL%20r15%2C%20r11%2C%20r2.png)

**Instruction SLT r10, r2, r4 :**
![Instruction SLT r10, r2, r4 :](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%204/SLT%20r10%2C%20r2%2C%20r4.png)


To conclude : The output waveform for the list of instructions are obtained in GTKWAVE.

</details>


-----------------------------------------------------------------------------------------------------

<details>

 <summary><h2>Task 5 : </h2>
 <br>
  <h2>
  Gas Detection System Using VSDSquadron Mini RISC-V Development Board
 </h2> </summary>



## Project Overview:
This project implements a **gas detection system** using the **VSDSquadron Mini board**, a RISC-V based SoC development kit. The gas detection system will monitor the air for dangerous gases using a gas sensor. When gas levels exceed a set threshold, a **LED indicator** or **buzzer** is activated to alert the user. This project demonstrates reading analog data from a sensor and controlling GPIO pins using digital logic, which is simulated and built using Arduino IDE.

### Components Required:
1. **VSDSquadron Mini RISC-V board**
2. **MQ-series gas sensor** (e.g., MQ-2 or MQ-135)
3. **1 LED** (or buzzer)
4. **Resistors** (as needed based on the sensor)
5. **Breadboard and jumper wires**
6. **Arduino IDE** for development

### Hardware Connections:
- **Gas Sensor:**
- **VCC** to **5V** pin of VSDSquadron Mini
- **GND** to **GND** pin of VSDSquadron Mini
- **AO** (Analog Output) to **PC4** (analog input pin)
        
- **LED:**
   - **Positive (Anode)** to **PD6**
   - **Negative (Cathode)** to **GND**

### Circuit Diagram:
   ```
   MQ Gas Sensor       VSDSquadron Mini
      VCC  -------->  5V
      GND  -------->  GND
      AO   -------->  PC4 (Analog Input)

   LED               VSDSquadron Mini
      +    -------->  PD6 (GPIO Pin for alert)
      -    -------->  GND
   ```

### Truth Table:

For simplicity, this system uses the gas sensor output and a threshold value to determine when to trigger the LED:

   | Gas Sensor Value | LED Status (Alert) |
   |------------------|--------------------|
   | Below Threshold   | Off                |
   | Above Threshold   | On                 |


### Pin Diagram for Gas Detection System Using VSDSquadron Mini RISC-V Development Board:
![Gas Detection System Using VSDSquadron Mini RISC-V Development Board](https://github.com/Prawinkumarjs/VSDSquadron-mini-internship/blob/main/Task%205/Gas%20Detection%20System%20Using%20VSDSquadron%20Mini%20RISC-V%20Development%20Board.png)
   

### Program:

```cpp
#include <Arduino.h> // Using Arduino-style syntax

// Define the pin for the gas sensor and buzzer/LED
#define GAS_SENSOR_PIN PC4   // Analog input pin (adjusted to PC4)
#define ALERT_PIN PD6        // Pin for buzzer or LED

// Threshold for gas detection (adjust based on calibration)
#define GAS_THRESHOLD 300

void setup() {
  // Initialize the serial monitor for debugging
   Serial.begin(9600);

   // Set the ALERT_PIN as output
   pinMode(ALERT_PIN, OUTPUT);

   // Initialize the gas sensor pin (optional since it is analog)
   pinMode(GAS_SENSOR_PIN, INPUT);

   Serial.println("Gas detection system initialized...");
}

void loop() {
   // Read the analog value from the gas sensor
   int gasSensorValue = analogRead(GAS_SENSOR_PIN);

   // Debugging: Print the gas sensor value
   Serial.print("Gas Sensor Value: ");
   Serial.println(gasSensorValue);

   // Check if the gas level exceeds the threshold
   if (gasSensorValue > GAS_THRESHOLD) {
      // If gas is detected, activate the alert (buzzer or LED)
      digitalWrite(ALERT_PIN, HIGH);
      Serial.println("Gas Detected! Activating alert...");
      } 
   else {
         // Otherwise, turn off the alert
         digitalWrite(ALERT_PIN, LOW);
   }

   // Small delay to prevent overwhelming the serial output
   delay(500);
   }

```
### Conclusion:
This project demonstrates the integration of an **MQ gas sensor** with the **VSDSquadron Mini board** to detect gases and alert the user through an LED indicator. This setup showcases how the RISC-V architecture and embedded systems handle real-world sensor data and control outputs in a practical application.

 
 </details>

 
------------------------------------------------------------------------------------------------------------------------------------------------------------
