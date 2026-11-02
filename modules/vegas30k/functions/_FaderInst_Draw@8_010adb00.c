/* Module: vegas30k.dll
   Function: _FaderInst_Draw@8
   Address: 010adb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Draw_8(int param_1,undefined4 param_2)

{
                    /* 0xadb00  652  _FaderInst_Draw@8 */
  FUN_010a9890(param_1,param_2,param_1 + 0x60);
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_010adb40(param_1,param_2);
    return;
  }
  FUN_010a8ce0(param_1,param_2);
  return;
}


