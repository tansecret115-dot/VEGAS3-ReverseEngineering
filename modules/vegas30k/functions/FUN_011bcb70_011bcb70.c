/* Module: vegas30k.dll
   Function: FUN_011bcb70
   Address: 011bcb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bcb70(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x218) + 0x2c))(*(int **)(param_1 + 0x218));
  if (-1 < iVar1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7 | 0x20;
  }
  return;
}


