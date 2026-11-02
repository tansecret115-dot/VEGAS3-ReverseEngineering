/* Module: vegas30k.dll
   Function: _SfLang_IsLCIDEnglish@4
   Address: 010c4c60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfLang_IsLCIDEnglish_4(ushort param_1)

{
                    /* 0xc4c60  1050  _SfLang_IsLCIDEnglish@4 */
  return (param_1 & 0x3ff) == 9;
}


