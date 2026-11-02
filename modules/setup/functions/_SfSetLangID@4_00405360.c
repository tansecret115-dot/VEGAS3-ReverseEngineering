/* Module: Setup.exe
   Function: _SfSetLangID@4
   Address: 00405360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfSetLangID_4(LPCSTR param_1)

{
                    /* 0x5360  327  _SfSetLangID@4 */
  if ((param_1 == (LPCSTR)0x0) || (*param_1 == '\0')) {
    param_1 = "ENU";
  }
  lstrcpynA(&DAT_0044903c,param_1,4);
  DAT_0044903f = 0;
  _DAT_00449040 = lstrlenA(&DAT_0044903c);
  return;
}


