/* Module: vegas30k.dll
   Function: SfAudio_CreateWaveFileStreamReader
   Address: 01063940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudio_CreateWaveFileStreamReader(class CSfAudioPeakStreamReader * *,char const
   *) */

long SfAudio_CreateWaveFileStreamReader(CSfAudioPeakStreamReader **param_1,char *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  CSfAudioPeakStreamReader *pCVar2;
  short *psVar3;
  long lVar4;
  
                    /* 0x63940  277
                       ?SfAudio_CreateWaveFileStreamReader@@YGJPAPAVCSfAudioPeakStreamReader@@PBD@Z
                        */
  lVar4 = 0;
  hMem = GlobalAlloc(0x40,0x140);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    pCVar2 = (CSfAudioPeakStreamReader *)0x0;
  }
  else {
    pCVar2 = (CSfAudioPeakStreamReader *)FUN_0105aa50(param_2);
  }
  *param_1 = pCVar2;
  if (pCVar2 == (CSfAudioPeakStreamReader *)0x0) {
    return -0x7ff8fff2;
  }
  psVar3 = (short *)(**(code **)(*(int *)pCVar2 + 0x14))();
  if (*psVar3 == 0) {
    lVar4 = -0x7ffb1ff9;
  }
  return lVar4;
}


