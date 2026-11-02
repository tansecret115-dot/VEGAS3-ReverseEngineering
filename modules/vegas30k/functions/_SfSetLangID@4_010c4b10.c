/* Module: vegas30k.dll
   Function: _SfSetLangID@4
   Address: 010c4b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfSetLangID_4(LPCSTR param_1)

{
                    /* 0xc4b10  1195  _SfSetLangID@4 */
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = "ENU";
  }
  lstrcpynA(&DAT_0120e804,param_1,4);
  DAT_0120e807 = 0;
  _DAT_0120e808 = lstrlenA(&DAT_0120e804);
  return;
}


