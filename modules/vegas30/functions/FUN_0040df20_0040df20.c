/* Module: vegas30.exe
   Function: FUN_0040df20
   Address: 0040df20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040df20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    iVar2 = (**(code **)(param_3 + 0x20))(param_3,1);
  }
  bVar4 = -1 < iVar2;
  if (bVar4) {
    iVar2 = _SfErrorHandler_GetLastError_0();
  }
  iVar1 = DAT_0064b108;
  if ((*(byte *)(param_3 + 0x1c) & 2) != 0) {
    *(int *)(DAT_0064b108 + 0x58) = *(int *)(DAT_0064b108 + 0x58) + -1;
    if (*(code **)(param_3 + 0x24) != (code *)0x0) {
      (**(code **)(param_3 + 0x24))(iVar1,param_3,2);
    }
    if (*(int *)(iVar1 + 0x58) == 0) {
      FUN_0040dea0(DAT_0064762c);
    }
    *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & ((int)*(uint *)(iVar1 + 0x58) < 1) - 1;
  }
  if ((iVar2 != 1) && (iVar2 != 0)) {
    FUN_00401f40();
    if ((*(byte *)(param_3 + 0x1c) & 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _SfGetFileNamePtrA_4(param_3 + 0x30);
    }
    _SfErrorHandler_MsgBox_24(*param_1,0x30,*(undefined4 *)(param_3 + 0x18),iVar2,uVar3,bVar4);
  }
  if (*(int *)(DAT_0064b108 + 0x60) != 0) {
    FUN_004e7020(-1 < iVar2);
  }
  FUN_004e6ce0(param_3);
  return 0;
}


