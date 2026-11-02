/* Module: encn3260.dll
   Function: FUN_6649d6f0
   Address: 6649d6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649d6f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  return;
}


