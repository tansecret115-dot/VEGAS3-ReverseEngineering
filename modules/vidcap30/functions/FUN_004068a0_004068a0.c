/* Module: vidcap30.exe
   Function: FUN_004068a0
   Address: 004068a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004068a0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_3 + 0x14);
  if (*(code **)(param_3 + 0x1c) != (code *)0x0) {
    iVar3 = (**(code **)(param_3 + 0x1c))(param_3,1);
  }
  bVar6 = -1 < iVar3;
  if (bVar6) {
    iVar3 = _SfErrorHandler_GetLastError_0();
  }
  iVar2 = DAT_005bb808;
  if ((*(byte *)(param_3 + 0x18) & 2) != 0) {
    iVar4 = *(int *)(DAT_005bb808 + 0x58) + -1;
    *(int *)(DAT_005bb808 + 0x58) = iVar4;
    if (iVar4 == 0) {
      FUN_00406820(DAT_005ba4c0);
    }
    uVar1 = *(uint *)(iVar2 + 0x58);
    *(uint *)(iVar2 + 0x58) = uVar1 & ((int)uVar1 < 1) - 1;
  }
  if ((iVar3 != 1) && (iVar3 != 0)) {
    FUN_00401ad0();
    if ((*(byte *)(param_3 + 0x18) & 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = _SfGetFileNamePtrA_4(param_3 + 0x2c);
    }
    _SfErrorHandler_MsgBox_24(*param_1,0x30,*(undefined4 *)(param_3 + 0x28),iVar3,uVar5,bVar6);
  }
  if (*(int *)(DAT_005bb808 + 0x60) != 0) {
    FUN_00416880(-1 < iVar3);
  }
  FUN_00416600(param_3);
  return 0;
}


