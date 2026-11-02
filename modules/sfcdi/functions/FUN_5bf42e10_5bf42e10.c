/* Module: sfcdi.dll
   Function: FUN_5bf42e10
   Address: 5bf42e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf42e10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_5bf40a00(param_1,param_2);
  free(*(void **)(param_2 + 0x34c));
  *(undefined4 *)(param_2 + 0x34c) = 0;
  *(uint *)(param_2 + 0x218) = *(uint *)(param_2 + 0x218) & 0x7fffffff;
  return uVar1;
}


