/* Module: vidcap30.exe
   Function: _SfAudio_ResampleOpenEx@24
   Address: 004bdc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfAudio_ResampleOpenEx_24
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  int iVar2;
  
                    /* 0xbdc50  248  _SfAudio_ResampleOpenEx@24 */
  iVar2 = _SfAudio_ResampleOpen_24(param_1,param_2,1,1,param_3,param_6);
  if (-1 < iVar2) {
    dVar1 = _DAT_00587ad0 / (double)CONCAT44(param_5,param_4);
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(double *)(iVar2 + 0x28) = dVar1;
    _SfAudio_ResampleResetEx_24(iVar2,0,param_4,param_5,0,1);
  }
  return;
}


