/* Module: vegas30k.dll
   Function: Mixer_GetDriverModel
   Address: 0117cd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDriverModel(enum AUDIODRVMODEL,char const *,struct IMixerDriverModel * *)
    */

long Mixer_GetDriverModel(AUDIODRVMODEL param_1,char *param_2,IMixerDriverModel **param_3)

{
  long lVar1;
  
                    /* 0x17cd60  173
                       ?Mixer_GetDriverModel@@YGJW4AUDIODRVMODEL@@PBDPAPAUIMixerDriverModel@@@Z */
  lVar1 = (**(code **)(*DAT_012b09c4 + 0x4c))(DAT_012b09c4,param_1,param_2,param_3);
  return lVar1;
}


