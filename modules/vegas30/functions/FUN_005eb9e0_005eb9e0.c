/* Module: vegas30.exe
   Function: FUN_005eb9e0
   Address: 005eb9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005eb9e0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 **)(param_1 + 0x20) = DAT_0065e0fc;
  DAT_0065e0fc = param_1;
  return;
}


