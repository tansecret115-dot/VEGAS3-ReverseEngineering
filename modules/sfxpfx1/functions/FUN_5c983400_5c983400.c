/* Module: sfxpfx1.dll
   Function: FUN_5c983400
   Address: 5c983400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c983400(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5c983600(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5c987910();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


