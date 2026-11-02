/* Module: vegas30k.dll
   Function: FUN_01165c20
   Address: 01165c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01165c20(int param_1)

{
  FUN_01165c90();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_012077d0;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_012077e8;
  *(undefined **)(param_1 + 0xb2e) = &DAT_01207800;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_01165ca0(param_1);
  return;
}


