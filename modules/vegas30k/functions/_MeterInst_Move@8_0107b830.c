/* Module: vegas30k.dll
   Function: _MeterInst_Move@8
   Address: 0107b830
   Source: Ghidra pseudocode (Stage 10 batch) */


void _MeterInst_Move_8(int param_1,undefined4 *param_2)

{
                    /* 0x7b830  682  _MeterInst_Move@8 */
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  FUN_0107b610(param_1);
  return;
}


