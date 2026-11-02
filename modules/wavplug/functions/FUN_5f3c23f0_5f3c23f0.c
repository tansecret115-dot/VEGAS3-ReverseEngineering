/* Module: wavplug.dll
   Function: FUN_5f3c23f0
   Address: 5f3c23f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f3c23f0(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5f3c25f0(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5f3c68e0();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


