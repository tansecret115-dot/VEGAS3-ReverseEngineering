/* Module: vegas30k.dll
   Function: Mixer_UpdateConfiguration
   Address: 0117cdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_UpdateConfiguration(struct _tmixerprops *,int,int) */

long Mixer_UpdateConfiguration(_tmixerprops *param_1,int param_2,int param_3)

{
  long lVar1;
  
                    /* 0x17cdd0  252  ?Mixer_UpdateConfiguration@@YGJPAU_tmixerprops@@HH@Z */
  lVar1 = Mixer_SetActive(param_1,0,param_2,param_3,1,0);
  return lVar1;
}


