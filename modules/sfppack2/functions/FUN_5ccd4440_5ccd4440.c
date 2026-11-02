/* Module: sfppack2.dll
   Function: FUN_5ccd4440
   Address: 5ccd4440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4440(int param_1)

{
  if (*(int *)(param_1 + 0x274) < -600) {
    *(undefined4 *)(param_1 + 0x274) = 0xfffffda8;
    return 0;
  }
  if (200 < *(int *)(param_1 + 0x274)) {
    *(undefined4 *)(param_1 + 0x274) = 200;
    return 0;
  }
  return 1;
}


