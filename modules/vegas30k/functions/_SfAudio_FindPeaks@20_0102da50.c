/* Module: vegas30k.dll
   Function: _SfAudio_FindPeaks@20
   Address: 0102da50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_FindPeaks_20
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  
                    /* 0x2da50  739  _SfAudio_FindPeaks@20 */
  if (param_4 != 0) {
    pcVar1 = (code *)_SfAudio_GetFindPeaksFunction_4(param_1);
    if (pcVar1 == (code *)0x0) {
      return 0x80004001;
    }
    (*pcVar1)(*(undefined2 *)(param_1 + 2),param_2,param_3,param_4,param_5);
  }
  return 0;
}


