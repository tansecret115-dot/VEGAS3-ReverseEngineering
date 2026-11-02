/* Module: vidcap30.exe
   Function: _SpinnerInst_SetScrollProc@12
   Address: 004af210
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerInst_SetScrollProc_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0xaf210  715  _SpinnerInst_SetScrollProc@12 */
  *(undefined4 *)(param_1 + 0xbc) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}


