/* Module: vegas30k.dll
   Function: _SfLoadCursor@8
   Address: 010c4660
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadCursor_8(undefined4 *param_1,LPCSTR param_2)

{
                    /* 0xc4660  1090  _SfLoadCursor@8 */
  if (param_1 != (undefined4 *)0x0) {
    LoadCursorA((HINSTANCE)*param_1,param_2);
    return;
  }
  if (((uint)param_2 >> 0x10 == 0) && (0x7eff < (ushort)param_2)) {
    LoadCursorA((HINSTANCE)0x0,param_2);
    return;
  }
  LoadCursorA(DAT_0120e5c0,param_2);
  return;
}


