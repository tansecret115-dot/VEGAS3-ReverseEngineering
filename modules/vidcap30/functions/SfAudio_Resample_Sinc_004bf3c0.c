/* Module: vidcap30.exe
   Function: SfAudio_Resample_Sinc
   Address: 004bf3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfAudio_Resample_Sinc(enum SFSAMPLETYPE,int,void *,long,void const *,long,struct
   tSFRESAMPLEINSTANCE *) */

long SfAudio_Resample_Sinc
               (SFSAMPLETYPE param_1,int param_2,void *param_3,long param_4,void *param_5,
               long param_6,tSFRESAMPLEINSTANCE *param_7)

{
  long lVar1;
  int iVar2;
  
                    /* 0xbf3c0  66
                       ?SfAudio_Resample_Sinc@@YGJW4SFSAMPLETYPE@@HPAXJPBXJPAUtSFRESAMPLEINSTANCE@@@Z
                        */
  if ((param_1 != 0x20) && (param_1 != 0x21)) {
    return 0;
  }
  lVar1 = 0;
  iVar2 = 0;
  if (param_7 != (tSFRESAMPLEINSTANCE *)0x0) {
    iVar2 = *(int *)(param_7 + 0x1d5c);
  }
  if (param_1 == 0x20) {
    if (iVar2 != 0) {
      lVar1 = FUN_004c33b0(param_2,param_3,param_4,param_5,param_6,param_7,1);
      return lVar1;
    }
    lVar1 = FUN_004c33b0(param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  else if (param_1 == 0x21) {
    if (iVar2 != 0) {
      lVar1 = FUN_004c3820(param_2,param_3,param_4,param_5,param_6,param_7,1);
      return lVar1;
    }
    lVar1 = FUN_004c3820(param_2,param_3,param_4,param_5,param_6,param_7,0);
    return lVar1;
  }
  return lVar1;
}


