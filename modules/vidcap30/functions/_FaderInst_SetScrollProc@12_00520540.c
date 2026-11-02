/* Module: vidcap30.exe
   Function: _FaderInst_SetScrollProc@12
   Address: 00520540
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_SetScrollProc_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x120540  164  _FaderInst_SetScrollProc@12 */
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_2;
  return;
}


