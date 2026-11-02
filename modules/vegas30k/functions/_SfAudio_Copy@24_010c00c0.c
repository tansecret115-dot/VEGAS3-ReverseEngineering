/* Module: vegas30k.dll
   Function: _SfAudio_Copy@24
   Address: 010c00c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_Copy_24(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
                    /* 0xc00c0  729  _SfAudio_Copy@24 */
  if (param_5 != 0) {
    uVar1 = _SfAudio_GetSampleType_4(param_1);
    uVar2 = _SfAudio_GetSampleType_4(param_3);
    pcVar3 = (code *)_SfAudio_GetCopyFunction2_8(uVar1,uVar2);
    if (pcVar3 == (code *)0x0) {
      return 0x80004001;
    }
    (*pcVar3)(param_2,param_4,(uint)*(ushort *)(param_3 + 2) * param_5,param_6);
  }
  return 0;
}


