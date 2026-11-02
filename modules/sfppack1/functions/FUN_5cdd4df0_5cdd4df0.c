/* Module: sfppack1.dll
   Function: FUN_5cdd4df0
   Address: 5cdd4df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd4df0(int param_1)

{
  if (*(int *)(param_1 + 0x20) < -600) {
    *(undefined4 *)(param_1 + 0x20) = 0xfffffda8;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return 1;
}


