/* Module: vidcap30.exe
   Function: _PanInst_SetId@8
   Address: 0051a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0x11a0e0  196  _PanInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


