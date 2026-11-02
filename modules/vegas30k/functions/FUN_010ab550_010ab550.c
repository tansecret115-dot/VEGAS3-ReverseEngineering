/* Module: vegas30k.dll
   Function: FUN_010ab550
   Address: 010ab550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ab550(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (*(int *)(param_1 + 0xb0) == 5) {
    *(uint *)(param_1 + 0xc) =
         (uint)((param_4 & 10) != 0) << 0xd | *(uint *)(param_1 + 0xc) & 0xffffdfff;
    FUN_010aace0(param_1,param_2,param_3,5,param_4);
  }
  return;
}


