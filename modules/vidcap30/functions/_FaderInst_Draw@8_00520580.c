/* Module: vidcap30.exe
   Function: _FaderInst_Draw@8
   Address: 00520580
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_Draw_8(int param_1,undefined4 param_2)

{
                    /* 0x120580  155  _FaderInst_Draw@8 */
  FUN_0051c310(param_1,param_2,param_1 + 0x60);
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_005205c0(param_1,param_2);
    return;
  }
  FUN_0051b760(param_1,param_2);
  return;
}


