/* Module: vegas30.exe
   Function: FUN_004e6d80
   Address: 004e6d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e6d80(int param_1)

{
  int lParam;
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int local_30;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00613db8;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  CoInitialize((LPVOID)0x0);
  *(undefined4 *)(param_1 + 0x8c) = 1;
LAB_004e6dc2:
  do {
    lParam = _SfQueueRemove_8(param_1,0);
    if (lParam == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
      iVar1 = _SfQueueRemove_8(param_1,0);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 1;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
        if (DAT_00647624 != (HWND)0x0) {
          PostMessageA(DAT_00647624,0x60b,0,0);
        }
        _SfQueueWait_8(param_1,0xffffffff);
        *(undefined4 *)(param_1 + 0x8c) = 2;
        goto LAB_004e6dc2;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
    }
    if (*(int *)(lParam + 0xc) == -1) {
      CoUninitialize();
      *(undefined4 *)(param_1 + 0x8c) = 4;
      ExceptionList = local_14;
      return 0;
    }
    if (*(int *)(lParam + 0xc) != 0) {
      *(int *)(param_1 + 0x74) = lParam;
      local_30 = -0x7ffb1ff4;
      if (*(int *)(param_1 + 0x5c) == 0) {
        DVar2 = GetTickCount();
        *(DWORD *)(param_1 + 0x6c) = DVar2;
        local_30 = (**(code **)(lParam + 0x20))(lParam,0);
        DVar2 = GetTickCount();
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (DVar2 - *(int *)(param_1 + 0x6c));
        *(DWORD *)(param_1 + 0x6c) = DVar2;
        if (*(int *)(param_1 + 0x5c) != 0) {
          if (-1 < local_30) {
            local_30 = -0x7ffb1ff4;
          }
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
      }
      *(int *)(lParam + 0x14) = local_30;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
      if (local_30 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        uVar3 = FUN_004e6d40(param_1,param_1 + 0x24);
        *(undefined4 *)(param_1 + 100) = uVar3;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x4c) + 1;
      }
      if (local_30 == 0x4e002) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
        SendMessageA(DAT_00647624,0x609,0,lParam);
LAB_004e6f30:
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else {
        if ((*(byte *)(lParam + 0x1c) & 0x10) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
          SendMessageA(DAT_00647624,0x60a,0,lParam);
          goto LAB_004e6f30;
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
        FUN_004e6d10(lParam,local_30);
        PostMessageA(DAT_00647624,0x608,0,lParam);
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x50);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
    }
  } while( true );
}


