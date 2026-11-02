/* Module: vegas30.exe
   Function: FUN_005f8170
   Address: 005f8170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005f8170(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = _SfGetFileNamePtrA_4(*(int *)(*(int *)(param_1 + 0x30) + 8) + 0x170);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 < 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x5615);
    SfPrintF(param_2,uVar2,iVar3,uVar1);
    return;
  }
  uVar1 = _SfGetString_8(DAT_00647204,0x5616);
  SfPrintF(param_2,uVar1);
  return;
}


