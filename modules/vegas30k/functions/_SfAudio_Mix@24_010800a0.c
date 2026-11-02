/* Module: vegas30k.dll
   Function: _SfAudio_Mix@24
   Address: 010800a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_Mix_24(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6)

{
  code *pcVar1;
  
                    /* 0x800a0  754  _SfAudio_Mix@24 */
  if (param_5 != 0) {
    pcVar1 = (code *)_SfAudio_GetMixFunction_8(param_1,param_3);
    if (pcVar1 == (code *)0x0) {
      return 0x80004001;
    }
    (*pcVar1)(param_2,param_4,(uint)*(ushort *)(param_3 + 2) * param_5,
              (uint)*(ushort *)(param_3 + 2),param_6);
  }
  return 0;
}


