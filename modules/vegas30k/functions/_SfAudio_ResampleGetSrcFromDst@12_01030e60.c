/* Module: vegas30k.dll
   Function: _SfAudio_ResampleGetSrcFromDst@12
   Address: 01030e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfAudio_ResampleGetSrcFromDst_12(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
                    /* 0x30e60  764  _SfAudio_ResampleGetSrcFromDst@12 */
  iVar1 = ftol();
  if ((extraout_ST0 != (float10)iVar1) && (extraout_ST0 < (float10)_DAT_011db3f0)) {
    ftol();
  }
  iVar1 = ftol();
  if (*(double *)(param_1 + 0x28) < _DAT_011dad58) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


