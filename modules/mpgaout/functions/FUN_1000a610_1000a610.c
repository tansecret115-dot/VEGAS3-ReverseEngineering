/* Module: mpgaout.dll
   Function: FUN_1000a610
   Address: 1000a610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000a610(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    if (param_2 == 1) {
      *(undefined **)(param_1 + 0x44da0) = &DAT_100173e0;
      *(undefined4 *)(param_1 + 0x44d9c) = 0x1a;
      return;
    }
    *(undefined **)(param_1 + 0x44da0) = &DAT_10017540;
    *(undefined4 *)(param_1 + 0x44d9c) = 0x1b;
    return;
  }
  if (1 < param_3) {
    if (param_3 != 2) {
      return;
    }
    if (param_2 == 1) {
      *(undefined **)(param_1 + 0x44da0) = &DAT_10017460;
      *(undefined4 *)(param_1 + 0x44d9c) = 0x18;
      return;
    }
    *(undefined **)(param_1 + 0x44da0) = &DAT_100175c0;
    *(undefined4 *)(param_1 + 0x44d9c) = 0x19;
    return;
  }
  if (param_3 != 0) {
    return;
  }
  if (param_2 == 1) {
    *(undefined **)(param_1 + 0x44da0) = &DAT_10017360;
    *(undefined4 *)(param_1 + 0x44d9c) = 0x19;
    return;
  }
  *(undefined **)(param_1 + 0x44da0) = &DAT_100174c0;
  *(undefined4 *)(param_1 + 0x44d9c) = 0x1b;
  return;
}


