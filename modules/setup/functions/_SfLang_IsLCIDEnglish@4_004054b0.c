/* Module: Setup.exe
   Function: _SfLang_IsLCIDEnglish@4
   Address: 004054b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfLang_IsLCIDEnglish_4(ushort param_1)

{
                    /* 0x54b0  214  _SfLang_IsLCIDEnglish@4 */
  return (param_1 & 0x3ff) == 9;
}


