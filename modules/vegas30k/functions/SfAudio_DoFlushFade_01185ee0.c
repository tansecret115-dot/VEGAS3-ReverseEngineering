/* Module: vegas30k.dll
   Function: SfAudio_DoFlushFade
   Address: 01185ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudio_DoFlushFade(void *,void *,struct tWAVEFORMATEX const *,long) */

long SfAudio_DoFlushFade(void *param_1,void *param_2,tWAVEFORMATEX *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  
                    /* 0x185ee0  279  ?SfAudio_DoFlushFade@@YGJPAX0PBUtWAVEFORMATEX@@J@Z */
  lVar4 = param_4;
  iVar5 = _SfAudio_GetSampleType_4(param_3);
  if (iVar5 == 0x20) {
    param_3 = (tWAVEFORMATEX *)0x0;
    if (0 < param_4) {
      fVar2 = (float)param_4;
      do {
        fVar3 = (float)(int)param_3 / fVar2;
        param_3 = (tWAVEFORMATEX *)((int)&param_3->wFormatTag + 1);
        fVar1 = (float)param_4 / fVar2;
        *(float *)param_1 = fVar3 * *(float *)param_1 + fVar1 * *(float *)param_2;
        *(float *)((int)param_1 + 4) =
             fVar3 * *(float *)((int)param_1 + 4) + fVar1 * *(float *)((int)param_2 + 4);
        param_1 = (float *)((int)param_1 + 8);
        param_2 = (float *)((int)param_2 + 8);
        param_4 = param_4 + -1;
      } while ((int)param_3 < lVar4);
    }
  }
  else if (iVar5 != 0x21) {
    return -0x7fffbffb;
  }
  return 0;
}


