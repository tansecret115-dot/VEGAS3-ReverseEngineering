/* Module: dsetup.dll
   Function: FUN_0040337c
   Address: 0040337c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040337c(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_00403421();
  if (DAT_0040aae8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_0040aae4 = 1;
  DAT_0040aae0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_0040b170 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_0040b16c - 4), DAT_0040b170 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_0040b170 <= puVar1);
    }
    FUN_00403433((undefined4 *)&DAT_00408014,(undefined4 *)&DAT_00408018);
  }
  FUN_00403433((undefined4 *)&DAT_0040801c,(undefined4 *)&DAT_00408020);
  if (param_3 == 0) {
    DAT_0040aae8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_0040342a();
  return;
}


