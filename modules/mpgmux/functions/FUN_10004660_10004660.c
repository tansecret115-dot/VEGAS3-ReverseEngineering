/* Module: mpgmux.dll
   Function: FUN_10004660
   Address: 10004660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10004660(int param_1)

{
  if ((*(int *)(param_1 + 0x11f8) != 0) && (*(int *)(param_1 + 0x2628) != 0)) {
    *(int *)(*(int *)(param_1 + 0x11f8) + 0xc) = *(int *)(param_1 + 0x2628);
    *(undefined4 *)(param_1 + 0x2628) = 0;
  }
  *(undefined4 *)(param_1 + 0x2dc4) = 0;
  if (*(int *)(param_1 + 0x262c) != 0) {
    (**(code **)(param_1 + 0x2624))(*(int *)(param_1 + 0x262c));
    *(undefined4 *)(param_1 + 0x262c) = 0;
  }
  return;
}


