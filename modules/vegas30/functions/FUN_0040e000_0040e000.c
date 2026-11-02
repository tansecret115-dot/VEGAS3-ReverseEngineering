/* Module: vegas30.exe
   Function: FUN_0040e000
   Address: 0040e000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e000(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  BOOL BVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if ((*(code **)(param_3 + 0x20) != (code *)0x0) && (param_4 == 0)) {
    iVar2 = (**(code **)(param_3 + 0x20))(param_3,1);
  }
  hWnd = GetFocus();
  bVar8 = -1 < iVar2;
  if (bVar8) {
    iVar2 = _SfErrorHandler_GetLastError_0();
  }
  FUN_004e6d10(param_3,iVar2);
  iVar1 = DAT_0064b108;
  if ((*(byte *)(param_3 + 0x1c) & 2) != 0) {
    *(int *)(DAT_0064b108 + 0x58) = *(int *)(DAT_0064b108 + 0x58) + -1;
    if (*(code **)(param_3 + 0x24) != (code *)0x0) {
      (**(code **)(param_3 + 0x24))(iVar1,param_3,2);
    }
    if (*(int *)(iVar1 + 0x58) == 0) {
      FUN_0040dea0(DAT_0064762c);
    }
    else if (0 < *(int *)(iVar1 + 0x58)) {
      iVar3 = _SfQueueRemove_8(iVar1,0);
      if (iVar3 != 0) {
        if (*(code **)(iVar3 + 0x24) != (code *)0x0) {
          (**(code **)(iVar3 + 0x24))(iVar1,iVar3,1);
        }
        _SfQueueInsertHead_8(iVar1,iVar3);
      }
    }
    *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & ((int)*(uint *)(iVar1 + 0x58) < 1) - 1;
  }
  FUN_004011a0();
  UpdateWindow((HWND)*param_1);
  if ((iVar2 != 1) && (iVar2 != 0)) {
    FUN_00401f40();
    if ((*(byte *)(param_3 + 0x1c) & 0x20) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _SfGetFileNamePtrA_4(param_3 + 0x30);
    }
    _SfErrorHandler_MsgBox_24(*param_1,0x30,*(undefined4 *)(param_3 + 0x18),iVar2,uVar4,bVar8);
  }
  if (*(int *)(DAT_0064b108 + 0x60) != 0) {
    FUN_004e7020(-1 < iVar2);
  }
  if ((*(byte *)(param_3 + 0x1c) & 0x10) != 0) {
    puVar5 = (uint *)(DAT_0064b108 + 0x54);
    uVar7 = *puVar5 - 1;
    *puVar5 = uVar7;
    *puVar5 = uVar7 & ((int)uVar7 < 1) - 1;
  }
  FUN_004e6ce0(param_3);
  BVar6 = IsWindow(hWnd);
  if (BVar6 != 0) {
    SetFocus(hWnd);
  }
  return 0;
}


