/* Module: vegas30.exe
   Function: FUN_00480f10
   Address: 00480f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00480f10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xb54) == 0) {
    iVar1 = param_1 + 0x30;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb54) + 0x20;
  }
  iVar4 = param_1 + 0x134;
  uVar2 = _SfGetFileNamePtrA_4(iVar1);
  uVar3 = _SfGetString_8(DAT_00647204,*(undefined4 *)(param_1 + 0x2c));
  SfPrintF(param_2,uVar3,uVar2,iVar4);
  return;
}


