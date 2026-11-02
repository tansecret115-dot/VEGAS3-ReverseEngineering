/* Module: vegas30k.dll
   Function: FUN_01074e50
   Address: 01074e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01074e50(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01072a40(param_1,param_2);
  free(*(void **)(param_2 + 0x34c));
  *(undefined4 *)(param_2 + 0x34c) = 0;
  *(uint *)(param_2 + 0x218) = *(uint *)(param_2 + 0x218) & 0x7fffffff;
  return uVar1;
}


