/* Module: mpgmux.dll
   Function: __amsg_exit
   Address: 1000d5d6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1001af8c == 1) || ((DAT_1001af8c == 0 && (DAT_1001af90 == 1)))) {
    FUN_10011aca();
  }
  FUN_10011b03(param_1);
  (*(code *)PTR___exit_10017ad4)(0xff);
  return;
}


