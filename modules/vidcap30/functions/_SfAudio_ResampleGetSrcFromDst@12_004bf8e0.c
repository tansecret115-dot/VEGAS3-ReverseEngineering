/* Module: vidcap30.exe
   Function: _SfAudio_ResampleGetSrcFromDst@12
   Address: 004bf8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfAudio_ResampleGetSrcFromDst_12(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
                    /* 0xbf8e0  245  _SfAudio_ResampleGetSrcFromDst@12 */
  iVar1 = ftol();
  if ((extraout_ST0 != (float10)iVar1) && (extraout_ST0 < (float10)_DAT_00589f10)) {
    ftol();
  }
  iVar1 = ftol();
  if (*(double *)(param_1 + 0x28) < _DAT_00587ad0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


