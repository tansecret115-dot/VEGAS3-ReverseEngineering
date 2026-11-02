/* Module: mpgmux.dll
   Function: mpegOutMuxDone
   Address: 10006190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutMuxDone(uint *param_1,int param_2)

{
                    /* 0x6190  6  mpegOutMuxDone */
  DAT_1001ab78._0_1_ = 0;
  FUN_10008b00(param_1,param_2);
  if (param_1[0x98b] != 0) {
    if (param_1[0x14] == 0) {
      FUN_10004660((int)param_1);
      if (param_2 != 0) {
        (**(code **)(param_1[0x47e] + 0x14))(param_1[0x47e],0,0xf8000,0,0);
      }
    }
    else {
      FUN_1000b520((int)param_1);
    }
    param_1[0x98b] = 0;
  }
  if ((char)param_1[0x1b] == '\0') {
    if (param_1[0x47f] != 0) {
      FUN_10002150((int *)(param_1 + 0x47f),param_2);
      param_1[0x47f] = 0;
    }
    if (param_1[0x480] != 0) {
      FUN_10002150((int *)(param_1 + 0x480),param_2);
      param_1[0x480] = 0;
    }
    if (param_1[0x481] != 0) {
      FUN_10002150((int *)(param_1 + 0x481),param_2);
      param_1[0x481] = 0;
    }
    if (param_1[0x482] != 0) {
      FUN_10002150((int *)(param_1 + 0x482),param_2);
      param_1[0x482] = 0;
    }
    if (param_1[0x483] != 0) {
      FUN_10002150((int *)(param_1 + 0x483),param_2);
      param_1[0x483] = 0;
    }
    if (param_1[0x484] != 0) {
      FUN_10002150((int *)(param_1 + 0x484),param_2);
      param_1[0x484] = 0;
    }
    if (param_1[0x47e] != 0) {
      FUN_10002150((int *)(param_1 + 0x47e),param_2);
      param_1[0x47e] = 0;
    }
  }
  else {
    if ((undefined *)param_1[0x485] != (undefined *)0x0) {
      FUN_10001000((undefined *)param_1[0x485]);
      param_1[0x485] = 0;
    }
    if ((undefined *)param_1[0x486] != (undefined *)0x0) {
      FUN_10001000((undefined *)param_1[0x486]);
      param_1[0x486] = 0;
      return 0;
    }
  }
  return 0;
}


