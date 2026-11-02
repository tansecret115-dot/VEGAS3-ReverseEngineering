/* Module: vidcap30.exe
   Function: _SfLoadCursor@8
   Address: 0047acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadCursor_8(undefined4 *param_1,LPCSTR param_2)

{
                    /* 0x7acd0  524  _SfLoadCursor@8 */
  if (param_1 != (undefined4 *)0x0) {
    LoadCursorA((HINSTANCE)*param_1,param_2);
    return;
  }
  if (((uint)param_2 >> 0x10 == 0) && (0x7eff < (ushort)param_2)) {
    LoadCursorA((HINSTANCE)0x0,param_2);
    return;
  }
  LoadCursorA(DAT_005c16d0,param_2);
  return;
}


