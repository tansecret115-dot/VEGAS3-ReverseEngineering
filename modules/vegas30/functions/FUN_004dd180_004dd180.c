/* Module: vegas30.exe
   Function: FUN_004dd180
   Address: 004dd180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd180(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd94) == 2)) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (2 < param_2) {
      param_2 = 2;
    }
    DAT_0064a578 = param_2;
    *(uint *)(*(int *)(param_1 + 0xd88) + 0x10) =
         *(uint *)(*(int *)(param_1 + 0xd88) + 0x10) & 0xfffffffb;
    *(uint *)(*(int *)(param_1 + 0xd8c) + 0x10) =
         *(uint *)(*(int *)(param_1 + 0xd8c) + 0x10) & 0xfffffffb;
    if (param_2 == 0) {
      *(uint *)(*(int *)(param_1 + 0xd8c) + 0x10) = *(uint *)(*(int *)(param_1 + 0xd8c) + 0x10) | 4;
      return;
    }
    if (param_2 == 2) {
      *(uint *)(*(int *)(param_1 + 0xd88) + 0x10) = *(uint *)(*(int *)(param_1 + 0xd88) + 0x10) | 4;
    }
  }
  return;
}


