/* Module: vegas30k.dll
   Function: FUN_0114e8b0
   Address: 0114e8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114e8b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0xffff) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x84);
    return 1;
  }
  if (param_2 < *(uint *)(param_1 + 200)) {
    return 0;
  }
  iVar1 = (param_2 - *(uint *)(param_1 + 200)) * *(int *)(param_1 + 0x16c) +
          *(int *)(param_1 + 0x74);
  *(int *)(param_3 + 4) = iVar1;
  *(int *)(param_3 + 0xc) = *(int *)(param_1 + 0x16c) + -1 + iVar1;
  return 1;
}


