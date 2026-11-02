/* Module: sftrans1.dll
   Function: FUN_00452190
   Address: 00452190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452190(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *dwNewLong;
  DWORD DVar2;
  int iVar3;
  HANDLE hProcess;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *lpBaseAddress;
  SIZE_T dwSize;
  
  piVar6 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00577284);
  puVar5 = DAT_005772b8;
  if (DAT_005772b8 != (undefined4 *)0x0) {
    DVar2 = GetCurrentThreadId();
    puVar4 = (undefined4 *)0x0;
    do {
      if (puVar5[1] == DVar2) {
        if (puVar4 == (undefined4 *)0x0) {
          DAT_005772b8 = (undefined4 *)puVar5[2];
        }
        else {
          puVar4[2] = puVar5[2];
        }
        piVar6 = (int *)*puVar5;
        break;
      }
      piVar1 = puVar5 + 2;
      puVar4 = puVar5;
      puVar5 = (undefined4 *)*piVar1;
    } while ((undefined4 *)*piVar1 != (undefined4 *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00577284);
  piVar6[1] = (int)param_1;
  iVar3 = (**(code **)(*piVar6 + 4))();
  dwNewLong = (code *)(piVar6 + 2);
  dwSize = 0xd;
  *(undefined4 *)dwNewLong = 0x42444c7;
  piVar6[3] = (int)piVar6;
  *(undefined1 *)(piVar6 + 4) = 0xe9;
  *(int *)((int)piVar6 + 0x11) = (iVar3 - (int)dwNewLong) + -0xd;
  lpBaseAddress = dwNewLong;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  SetWindowLongA(param_1,4,(LONG)dwNewLong);
  (*dwNewLong)(param_1,param_2,param_3,param_4);
  return;
}


