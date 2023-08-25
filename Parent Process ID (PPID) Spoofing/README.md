# Definition

*PPID spoofing is a technique that allows attackers to start programs with arbitrary parent process set.*
*This helps attackers make it look as if their programs were spawned by another process (instead of the one that would have spawned it if no spoofing was done) and it may help evade detections,* 
*that are based on parent/child process relationships.*

![image](https://github.com/0x074b/Defense-Evasion/assets/83349783/6b95266a-0d09-4217-8642-01d7305a0995)

*An approach could be to load the DLL inside the "LSASS" process.*

![image](https://github.com/0x074b/Defense-Evasion/assets/83349783/01cdb1c2-f6a9-41f2-abb5-6f018c065bd5)

*A new "LSASS" process will created on the system that will load the arbitrary DLL.*

![image](https://github.com/0x074b/Defense-Evasion/assets/83349783/ca594b48-9d46-40cf-80ca-de38dc184ac1)

*A Meterpreter session will open with the process ID of 1312 which corresponds to "rundll32" process which is the child of "lsass.exe" that executes the DLL.*

![image](https://github.com/0x074b/Defense-Evasion/assets/83349783/e609fa61-25aa-4106-9117-9e84d12722f8)

# Usage

*replace "pid" on line 12 with the ppid to be spoofed*

*A more complete project on this attack has already been published! check out* : 
https://github.com/0x074b/PPIDS
