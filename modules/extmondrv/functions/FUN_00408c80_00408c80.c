/* Module: extmondrv.dll
   Function: FUN_00408c80
   Address: 00408c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408c80(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + -0x14) + 0x14))(param_1 + -0x14);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xa8) != 0x10c9)) {
    iVar1 = FUN_0040a130(*(int **)(param_1 + 0xa0),0x10c9);
    return iVar1;
  }
  return 1;
}


