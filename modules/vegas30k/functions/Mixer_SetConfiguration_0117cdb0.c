/* Module: vegas30k.dll
   Function: Mixer_SetConfiguration
   Address: 0117cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetConfiguration(struct _tmixerprops *) */

long Mixer_SetConfiguration(_tmixerprops *param_1)

{
  long lVar1;
  
                    /* 0x17cdb0  224  ?Mixer_SetConfiguration@@YGJPAU_tmixerprops@@@Z */
  lVar1 = Mixer_SetActive(param_1,1,1,1,0,0);
  return lVar1;
}


