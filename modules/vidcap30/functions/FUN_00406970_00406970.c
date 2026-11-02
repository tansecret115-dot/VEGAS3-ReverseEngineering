/* Module: vidcap30.exe
   Function: FUN_00406970
   Address: 00406970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406970(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x14);
    if ((*(code **)(param_3 + 0x1c) != (code *)0x0) && (param_4 == 0)) {
      iVar3 = (**(code **)(param_3 + 0x1c))(param_3,1);
    }
    bVar7 = -1 < iVar3;
    if (bVar7) {
      iVar3 = _SfErrorHandler_GetLastError_0();
    }
    FUN_00416630(param_3,iVar3);
    iVar2 = DAT_005bb808;
    if ((*(byte *)(param_3 + 0x18) & 2) != 0) {
      iVar4 = *(int *)(DAT_005bb808 + 0x58) + -1;
      *(int *)(DAT_005bb808 + 0x58) = iVar4;
      if (iVar4 == 0) {
        FUN_00406820(DAT_005ba4c0);
      }
      uVar6 = *(uint *)(iVar2 + 0x58);
      *(uint *)(iVar2 + 0x58) = uVar6 & ((int)uVar6 < 1) - 1;
    }
    FUN_00401110();
    UpdateWindow((HWND)*param_1);
    if ((iVar3 != 1) && (iVar3 != 0)) {
      FUN_00401ad0();
      if ((*(byte *)(param_3 + 0x18) & 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = _SfGetFileNamePtrA_4(param_3 + 0x2c);
      }
      _SfErrorHandler_MsgBox_24(*param_1,0x30,*(undefined4 *)(param_3 + 0x28),iVar3,uVar5,bVar7);
    }
    if (*(int *)(DAT_005bb808 + 0x60) != 0) {
      FUN_00416880(-1 < iVar3);
    }
    if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
      puVar1 = (uint *)(DAT_005bb808 + 0x54);
      uVar6 = *(int *)(DAT_005bb808 + 0x54) - 1;
      *puVar1 = uVar6;
      *puVar1 = uVar6 & ((int)uVar6 < 1) - 1;
    }
    FUN_00416600(param_3);
  }
  return 0;
}


