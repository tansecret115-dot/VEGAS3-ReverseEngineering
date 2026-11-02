/* Module: vidcap30.exe
   Function: _FaderInst_SetId@8
   Address: 00520530
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0x120530  162  _FaderInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}


