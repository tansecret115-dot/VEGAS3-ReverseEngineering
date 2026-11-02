/* Module: mpegin.dll
   Function: __amsg_exit
   Address: 1000e6c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1001c390 == 1) || ((DAT_1001c390 == 0 && (DAT_1001c394 == 1)))) {
    FUN_10011a3f();
  }
  FUN_10011a78(param_1);
  (*(code *)PTR___exit_100191d4)(0xff);
  return;
}


