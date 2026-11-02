/* Module: vegas30k.dll
   Function: Mixer_EnumDriverModels
   Address: 0117ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_EnumDriverModels(struct IEnumDriverModel * *) */

long Mixer_EnumDriverModels(IEnumDriverModel **param_1)

{
  long lVar1;
  
                    /* 0x17ccf0  158  ?Mixer_EnumDriverModels@@YGJPAPAUIEnumDriverModel@@@Z */
  lVar1 = (**(code **)(*DAT_012b09c4 + 0x50))(DAT_012b09c4,param_1);
  return lVar1;
}


