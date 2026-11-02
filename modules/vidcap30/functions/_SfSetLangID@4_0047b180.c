/* Module: vidcap30.exe
   Function: _SfSetLangID@4
   Address: 0047b180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfSetLangID_4(LPCSTR param_1)

{
                    /* 0x7b180  613  _SfSetLangID@4 */
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = "ENU";
  }
  lstrcpynA(&DAT_005c1914,param_1,4);
  DAT_005c1917 = 0;
  _DAT_005c1918 = lstrlenA(&DAT_005c1914);
  return;
}


