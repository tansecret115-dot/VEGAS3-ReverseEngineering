/* Module: sfnetmedia.dll
   Function: FUN_00402fa0
   Address: 00402fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402fa0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x8004e01b;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = FUN_00410c90(*(int **)(param_1 + 0x10));
    *(int *)(param_1 + 0x14) = iVar2;
    *param_2 = iVar2;
    uVar1 = 0;
  }
  return uVar1;
}


