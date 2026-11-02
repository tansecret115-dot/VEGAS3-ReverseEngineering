/* Module: vegas30k.dll
   Function: _SpinnerInst_SetId@8
   Address: 01113780
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0x113780  1331  _SpinnerInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}


