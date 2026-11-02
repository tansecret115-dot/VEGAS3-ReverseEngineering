/* Module: mpegin.dll
   Function: FUN_10011194
   Address: 10011194
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10011194(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10011239();
  if (DAT_1001c448 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1001c444 = 1;
  DAT_1001c440 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1001da70 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1001da6c - 4), DAT_1001da70 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1001da70 <= puVar1);
    }
    FUN_1001124b((undefined4 *)&DAT_10018018,(undefined4 *)&DAT_10018020);
  }
  FUN_1001124b((undefined4 *)&DAT_10018024,(undefined4 *)&DAT_10018028);
  if (param_3 == 0) {
    DAT_1001c448 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10011242();
  return;
}


