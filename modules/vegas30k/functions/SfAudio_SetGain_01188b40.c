/* Module: vegas30k.dll
   Function: SfAudio_SetGain
   Address: 01188b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudio_SetGain(void *,struct tWAVEFORMATEX const *,long,double *) */

long SfAudio_SetGain(void *param_1,tWAVEFORMATEX *param_2,long param_3,double *param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
                    /* 0x188b40  281  ?SfAudio_SetGain@@YGJPAXPBUtWAVEFORMATEX@@JPAN@Z */
  iVar1 = _SfAudio_GetSampleType_4(param_2);
  uVar2 = 0;
  iVar3 = (uint)param_2->nChannels * param_3;
  if (iVar1 == 0x20) {
    if (0 < iVar3) {
      do {
        uVar4 = (uint)uVar2;
        uVar2 = uVar2 + 1;
        *(float *)param_1 = (float)param_4[uVar4] * *(float *)param_1;
        if (param_2->nChannels == uVar2) {
          uVar2 = 0;
        }
        param_1 = (void *)((int)param_1 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    if (iVar1 != 0x21) {
      return -0x7fffbffb;
    }
    if (0 < iVar3) {
      do {
        uVar4 = (uint)uVar2;
        uVar2 = uVar2 + 1;
        *(double *)param_1 = param_4[uVar4] * *(double *)param_1;
        if (param_2->nChannels == uVar2) {
          uVar2 = 0;
        }
        param_1 = (void *)((int)param_1 + 8);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    }
  }
  return 0;
}


