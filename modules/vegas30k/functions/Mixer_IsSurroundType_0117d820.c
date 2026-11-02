/* Module: vegas30k.dll
   Function: Mixer_IsSurroundType
   Address: 0117d820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Mixer_IsSurroundType(struct ISFMixer *) */

int Mixer_IsSurroundType(ISFMixer *param_1)

{
  EMIXERTYPE EVar1;
  
                    /* 0x17d820  204  ?Mixer_IsSurroundType@@YGHPAUISFMixer@@@Z */
  EVar1 = Mixer_GetMixerType(param_1);
  if ((((EVar1 != 2) && (EVar1 != 3)) && (EVar1 != 4)) && (EVar1 != 5)) {
    return 0;
  }
  return 1;
}


