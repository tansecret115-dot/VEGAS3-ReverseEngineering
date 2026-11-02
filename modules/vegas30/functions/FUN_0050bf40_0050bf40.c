/* Module: vegas30.exe
   Function: FUN_0050bf40
   Address: 0050bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050bf40(int param_1)

{
  DAT_006495b4 = (*(int *)(param_1 + 0x1c) << 0x1f) >> 0x1f;
  DAT_006495b8 = (*(int *)(param_1 + 4) << 0x1a) >> 0x1f;
  DAT_006495bc = (*(int *)(param_1 + 4) << 0x18) >> 0x1f;
  DAT_006495c0 = (*(int *)(param_1 + 4) << 0x17) >> 0x1f;
  DAT_006495c4 = (*(int *)(param_1 + 4) << 0xb) >> 0x1c;
  _DAT_006495c8 = (double)*(float *)(param_1 + 8);
  _DAT_006495d0 = (double)*(float *)(param_1 + 0x20);
  return;
}


