/* Module: vidcap30.exe
   Function: _SfAudio_GetNormalizeFactor@4
   Address: 0053be10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 _SfAudio_GetNormalizeFactor_4(undefined4 param_1)

{
                    /* 0x13be10  234  _SfAudio_GetNormalizeFactor@4 */
  switch(param_1) {
  case 8:
    return (float10)_DAT_0059a180;
  default:
    return (float10)_DAT_00587ad0;
  case 0x10:
    return (float10)_DAT_0059a178;
  case 0x18:
    return (float10)_DAT_0059a170;
  case 0x20:
    return (float10)_DAT_0059a1c0;
  }
}


