/* Module: vegas30k.dll
   Function: Mixer_GetHardwareBus
   Address: 0117dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetHardwareBus(struct ISFMixerIn * *,unsigned long,struct ISFMixer *) */

long Mixer_GetHardwareBus(ISFMixerIn **param_1,ulong param_2,ISFMixer *param_3)

{
  ISFMixer **ppIVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  ISFMixer *pIStack_14;
  ISFMixer **ppIStack_10;
  
                    /* 0x17dc10  177  ?Mixer_GetHardwareBus@@YGJPAPAUISFMixerIn@@KPAUISFMixer@@@Z */
  pIStack_14 = param_3;
  if (param_3 == (ISFMixer *)0x0) {
    pIStack_14 = DAT_012b09c8;
  }
  ppIStack_10 = &param_3;
  param_3 = (ISFMixer *)0x0;
  *param_1 = (ISFMixerIn *)0x0;
  iVar2 = (**(code **)(*(int *)pIStack_14 + 0x1fc))();
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar3 = (**(code **)(*param_1 + 0xc))(param_1,1,param_1,0);
  ppIVar1 = ppIStack_10;
  if (iVar3 != 0) {
LAB_0117dcc8:
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return iVar2;
  }
  do {
    pIStack_14 = (ISFMixer *)0x0;
    (**(code **)(*(int *)*param_1 + 0x8c))(*param_1,0xf,&pIStack_14);
    if (pIStack_14 == (ISFMixer *)0x0) {
      ppIStack_10 = (ISFMixer **)0x0;
      (**(code **)(*(int *)*param_1 + 0x8c))(*param_1,0x30,&ppIStack_10);
      if (ppIVar1 == ppIStack_10) {
        iVar2 = 0;
        goto LAB_0117dcc8;
      }
    }
    (**(code **)(*(int *)*param_1 + 8))(*param_1);
    *param_1 = (ISFMixerIn *)0x0;
    iVar2 = (**(code **)(*ppIStack_10 + 0xc))(ppIStack_10,1,param_1,0);
    if (iVar2 != 0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      return 1;
    }
  } while( true );
}


