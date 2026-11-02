/* Module: mpgaout.dll
   Function: FUN_1000a6cc
   Address: 1000a6cc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000a6cc(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  if (param_4 == 1) {
    if (param_3 == 1) {
      *param_2 = &DAT_100183c0;
      *(undefined4 *)(param_1 + 0x44da4) = 0x68;
    }
    else {
      *param_2 = &DAT_1001ae40;
      *(undefined4 *)(param_1 + 0x44da4) = 0x80;
    }
  }
  else if (param_4 < 2) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        *param_2 = &DAT_10017640;
        *(undefined4 *)(param_1 + 0x44da4) = 0x6c;
      }
      else {
        *param_2 = &DAT_10019dc0;
        *(undefined4 *)(param_1 + 0x44da4) = 0x84;
      }
    }
  }
  else if (param_4 == 2) {
    if (param_3 == 1) {
      *param_2 = &DAT_100190c0;
      *(undefined4 *)(param_1 + 0x44da4) = 0x68;
    }
    else {
      *param_2 = &DAT_1001be40;
      *(undefined4 *)(param_1 + 0x44da4) = 0x86;
    }
  }
  return;
}


