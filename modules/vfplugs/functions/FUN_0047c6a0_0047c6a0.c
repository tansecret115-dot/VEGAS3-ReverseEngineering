/* Module: vfplugs.dll
   Function: FUN_0047c6a0
   Address: 0047c6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047c6a0(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_0047c8a0(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_00480bc0();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


