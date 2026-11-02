/* Module: vegas30k.dll
   Function: _FaderInst_SetId@8
   Address: 010adab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_SetId_8(int param_1,undefined4 param_2)

{
                    /* 0xadab0  659  _FaderInst_SetId@8 */
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}


