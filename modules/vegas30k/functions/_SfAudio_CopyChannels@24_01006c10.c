/* Module: vegas30k.dll
   Function: _SfAudio_CopyChannels@24
   Address: 01006c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfAudio_CopyChannels_24
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int *param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
                    /* 0x6c10  731  _SfAudio_CopyChannels@24 */
  if ((param_6 == (int *)0x0) || (*(short *)(param_1 + 2) == *(short *)(param_3 + 2))) {
    uVar4 = _SfAudio_Copy_24(param_1,param_2,param_3,param_4,param_5,0x3f800000);
    return uVar4;
  }
  if (param_5 == 0) {
    return 0;
  }
  pcVar2 = (code *)_SfAudio_GetCopyChannelsFunction_8(param_1,param_3);
  if (pcVar2 != (code *)0x0) {
    uVar3 = (uint)*(ushort *)(param_3 + 2);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        iVar1 = *param_6;
        if ((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)(param_1 + 2))) {
          (*pcVar2)(param_2,(uint)*(ushort *)(param_1 + 2),iVar1,param_4,uVar3,uVar5,param_5);
        }
        uVar5 = uVar5 + 1;
        uVar3 = (uint)*(ushort *)(param_3 + 2);
        param_6 = param_6 + 1;
      } while (uVar5 < uVar3);
    }
    return 0;
  }
  return 0x80004001;
}


