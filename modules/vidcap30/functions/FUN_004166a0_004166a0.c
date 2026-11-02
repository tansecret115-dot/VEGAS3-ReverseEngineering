/* Module: vidcap30.exe
   Function: FUN_004166a0
   Address: 004166a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004166a0(int param_1)

{
  int lParam;
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  CoInitialize((LPVOID)0x0);
  *(undefined4 *)(param_1 + 0x88) = 1;
LAB_004166bb:
  do {
    lParam = _SfQueueRemove_8(param_1,0);
    if (lParam == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
      iVar1 = _SfQueueRemove_8(param_1,0);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x88) = 1;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
        if (DAT_005ba4bc != (HWND)0x0) {
          PostMessageA(DAT_005ba4bc,0x60b,0,0);
        }
        _SfQueueWait_8(param_1,0xffffffff);
        *(undefined4 *)(param_1 + 0x88) = 2;
        goto LAB_004166bb;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
    }
    if (*(int *)(lParam + 0xc) == -1) {
      CoUninitialize();
      *(undefined4 *)(param_1 + 0x88) = 4;
      return 0;
    }
    if (*(int *)(lParam + 0xc) != 0) {
      *(int *)(param_1 + 0x6c) = lParam;
      iVar1 = -0x7ffb1ff4;
      if (*(int *)(param_1 + 0x5c) == 0) {
        DVar2 = GetTickCount();
        iVar1 = (**(code **)(lParam + 0x1c))(lParam,0);
        DVar3 = GetTickCount();
        *(DWORD *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (DVar3 - DVar2);
        if (*(int *)(param_1 + 0x5c) != 0) {
          if (-1 < iVar1) {
            iVar1 = -0x7ffb1ff4;
          }
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
      }
      *(int *)(lParam + 0x14) = iVar1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        uVar4 = FUN_00416660(param_1,param_1 + 0x24);
        *(undefined4 *)(param_1 + 100) = uVar4;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x4c) + 1;
      }
      if (iVar1 == 0x4e002) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
        SendMessageA(DAT_005ba4bc,0x609,0,lParam);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      else if ((*(byte *)(lParam + 0x18) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0;
        FUN_00416630(lParam,iVar1);
        PostMessageA(DAT_005ba4bc,0x608,0,lParam);
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
        SendMessageA(DAT_005ba4bc,0x60a,0,lParam);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x50);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
    }
  } while( true );
}


