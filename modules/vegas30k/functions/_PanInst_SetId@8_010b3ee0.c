/* Module: vegas30k.dll
   Function: _PanInst_SetId@8
   Address: 010b3ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0xb3ee0  693  _PanInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


