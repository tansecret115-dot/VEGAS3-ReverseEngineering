/* Module: vegas30k.dll
   Function: _SfAudio_ResampleOpenEx@24
   Address: 0102f1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfAudio_ResampleOpenEx_24
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  int iVar2;
  
                    /* 0x2f1d0  767  _SfAudio_ResampleOpenEx@24 */
  iVar2 = _SfAudio_ResampleOpen_24(param_1,param_2,1,1,param_3,param_6);
  if (-1 < iVar2) {
    dVar1 = _DAT_011dad58 / (double)CONCAT44(param_5,param_4);
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(double *)(iVar2 + 0x28) = dVar1;
    _SfAudio_ResampleResetEx_24(iVar2,0,param_4,param_5,0,1);
  }
  return;
}


