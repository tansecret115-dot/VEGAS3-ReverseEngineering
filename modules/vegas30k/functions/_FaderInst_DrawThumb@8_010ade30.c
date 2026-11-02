/* Module: vegas30k.dll
   Function: _FaderInst_DrawThumb@8
   Address: 010ade30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_DrawThumb_8(int param_1,undefined4 param_2)

{
                    /* 0xade30  653  _FaderInst_DrawThumb@8 */
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_010adb40(param_1,param_2);
    return;
  }
  FUN_010a8ce0(param_1,param_2);
  return;
}


