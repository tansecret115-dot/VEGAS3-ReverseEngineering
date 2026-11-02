/* Module: vidcap30.exe
   Function: FUN_0046e260
   Address: 0046e260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046e260(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 **)(param_1 + 0x20) = DAT_005bc418;
  DAT_005bc418 = param_1;
  return;
}


