/* Module: vidcap30.exe
   Function: FUN_00441a80
   Address: 00441a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441a80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = *(int *)(*(int *)(DAT_005ba4c0 + 0x6c) + 0x1c68);
  if (iVar1 != 0) {
    uVar2 = _SfList_FindSpecificItemRange_16(iVar1,0,0xffffffff,param_1);
  }
  return uVar2;
}


