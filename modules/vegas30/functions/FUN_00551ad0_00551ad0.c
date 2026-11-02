/* Module: vegas30.exe
   Function: FUN_00551ad0
   Address: 00551ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00551ad0(int param_1)

{
  uint uVar1;
  
  _SfSetMetric_12(DAT_00647200,0xe7f,0x30);
  _SfSetMetric_12(DAT_00647200,0xe7a,*(undefined4 *)(param_1 + 0x84));
  _SfSetMetric_12(DAT_00647200,0xe75,DAT_00644e20);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x550) != 0) {
    do {
      FUN_0054c3c0(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x550));
  }
  _SfSetMetricBinary_16(DAT_00647200,0xe74,&DAT_00644c80,0x1a0);
  _SfSetMetricBinary_16(DAT_00647200,0xe7b,&DAT_00657628,0x1a0);
  _SfSetMetric_12(DAT_00647200,0xe76,*(undefined4 *)(param_1 + 0x56c));
  _SfSetMetric_12(DAT_00647200,0xe77,*(undefined4 *)(param_1 + 0x570));
  _SfSetMetric_12(DAT_00647200,0xe78,*(undefined4 *)(param_1 + 0x574));
  _SfSetMetric_12(DAT_00647200,0xe79,*(undefined4 *)(param_1 + 0x578));
  _SfSetMetric_12(DAT_00647200,0xe7c,*(undefined4 *)(param_1 + 0x580));
  _SfSetMetric_12(DAT_00647200,0xe7d,*(undefined4 *)(param_1 + 0x88));
  return;
}


