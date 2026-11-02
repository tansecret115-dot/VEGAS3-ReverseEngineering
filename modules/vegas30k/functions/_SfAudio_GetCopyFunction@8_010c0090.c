/* Module: vegas30k.dll
   Function: _SfAudio_GetCopyFunction@8
   Address: 010c0090
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAudio_GetCopyFunction_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0xc0090  745  _SfAudio_GetCopyFunction@8 */
  uVar1 = _SfAudio_GetSampleType_4(param_1);
  uVar2 = _SfAudio_GetSampleType_4(param_2);
  _SfAudio_GetCopyFunction2_8(uVar1,uVar2);
  return;
}


