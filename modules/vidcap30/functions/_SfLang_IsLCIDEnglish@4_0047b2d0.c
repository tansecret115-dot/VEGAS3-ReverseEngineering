/* Module: vidcap30.exe
   Function: _SfLang_IsLCIDEnglish@4
   Address: 0047b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfLang_IsLCIDEnglish_4(ushort param_1)

{
                    /* 0x7b2d0  484  _SfLang_IsLCIDEnglish@4 */
  return (param_1 & 0x3ff) == 9;
}


