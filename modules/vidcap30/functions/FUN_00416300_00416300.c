/* Module: vidcap30.exe
   Function: FUN_00416300
   Address: 00416300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416300(undefined4 param_1,uint param_2,int param_3)

{
  if (param_2 < 4) {
    if (param_2 == 3) {
      *(undefined4 *)(param_3 + 0x20) = 1;
      return;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
LAB_00416346:
      if (*(int *)(param_3 + 0x18) != 0) {
        FUN_00415f40(param_1);
        return;
      }
      *(undefined4 *)(param_3 + 0x24) = 1;
      return;
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      FUN_00415f40(param_1);
      return;
    }
  }
  else if (param_2 == 4) {
    *(undefined4 *)(param_3 + 0x1c) = 1;
  }
  else if (param_2 == 0x51b) goto LAB_00416346;
  return;
}


