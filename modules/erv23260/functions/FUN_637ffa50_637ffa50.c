/* Module: erv23260.dll
   Function: FUN_637ffa50
   Address: 637ffa50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637ffa50(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0x50333632) {
    return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18)) + 0x1c;
  }
  return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18)) + 0x18;
}


