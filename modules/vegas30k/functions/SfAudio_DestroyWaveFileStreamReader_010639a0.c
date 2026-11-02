/* Module: vegas30k.dll
   Function: SfAudio_DestroyWaveFileStreamReader
   Address: 010639a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudio_DestroyWaveFileStreamReader(class CSfAudioPeakStreamReader *) */

long SfAudio_DestroyWaveFileStreamReader(CSfAudioPeakStreamReader *param_1)

{
                    /* 0x639a0  278
                       ?SfAudio_DestroyWaveFileStreamReader@@YGJPAVCSfAudioPeakStreamReader@@@Z */
  if (param_1 != (CSfAudioPeakStreamReader *)0x0) {
    (*(code *)**(undefined4 **)param_1)(1);
  }
  return 0;
}


