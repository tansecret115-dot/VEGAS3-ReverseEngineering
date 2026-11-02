/* Module: mpgmux.dll
   Function: FUN_100106ec
   Address: 100106ec
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100106ec(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10010791();
  if (DAT_1001b044 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1001b040 = 1;
  DAT_1001b03c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1001b534 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1001b530 - 4), DAT_1001b534 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1001b534 <= puVar1);
    }
    FUN_100107a3((undefined4 *)&DAT_10016018,(undefined4 *)&DAT_10016020);
  }
  FUN_100107a3((undefined4 *)&DAT_10016024,(undefined4 *)&DAT_10016028);
  if (param_3 == 0) {
    DAT_1001b044 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1001079a();
  return;
}


