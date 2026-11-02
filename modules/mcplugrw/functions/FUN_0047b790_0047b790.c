/* Module: mcplugrw.dll
   Function: FUN_0047b790
   Address: 0047b790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047b790(int param_1)

{
  FUN_0047b800();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_004a80c0;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_004a80d8;
  *(undefined **)(param_1 + 0xb2e) = &DAT_004a80f0;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_0047b810(param_1);
  return;
}


