/* Module: pncrt.dll
   Function: FUN_78008c30
   Address: 78008c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78008c30(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_78008cf0();
  if (DAT_78041e18 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_78041e14 = 1;
  DAT_78041e10 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_78042730 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_7804272c + -4), puVar1 = DAT_78042730, DAT_78042730 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_78042730;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    initterm((undefined4 *)&DAT_7803d024,(undefined4 *)&DAT_7803d034);
  }
  initterm((undefined4 *)&DAT_7803d038,(undefined4 *)&DAT_7803d040);
  if (param_3 != 0) {
    FUN_78008d00();
    return;
  }
  DAT_78041e18 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


