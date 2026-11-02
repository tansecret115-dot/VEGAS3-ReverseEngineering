/* Module: vidcap30.exe
   Function: _SpinnerInst_SetId@8
   Address: 004af200
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0xaf200  713  _SpinnerInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}


