/* Module: vegas30k.dll
   Function: _SfAudio_GetNormalizeFactor@4
   Address: 010b73d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 _SfAudio_GetNormalizeFactor_4(undefined4 param_1)

{
                    /* 0xb73d0  750  _SfAudio_GetNormalizeFactor@4 */
  switch(param_1) {
  case 8:
    return (float10)_DAT_011db280;
  default:
    return (float10)_DAT_011dad58;
  case 0x10:
    return (float10)_DAT_011db288;
  case 0x18:
    return (float10)_DAT_011db290;
  case 0x20:
    return (float10)_DAT_011db2a8;
  }
}


