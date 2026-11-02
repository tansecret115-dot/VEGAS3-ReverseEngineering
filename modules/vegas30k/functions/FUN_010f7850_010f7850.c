/* Module: vegas30k.dll
   Function: FUN_010f7850
   Address: 010f7850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f7850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if ((double)CONCAT44(param_3,param_2) < _DAT_011db3f0) {
    if ((*(byte *)(param_1 + 0x300) & 1) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x140) * 0x10 + param_1);
      *puVar1 = param_2;
      puVar1[1] = param_3;
      puVar1[2] = param_4;
      puVar1[3] = param_5;
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    }
    *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) >> 1;
  }
  return;
}


