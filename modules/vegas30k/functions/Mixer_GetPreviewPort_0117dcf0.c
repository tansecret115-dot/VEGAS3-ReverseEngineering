/* Module: vegas30k.dll
   Function: Mixer_GetPreviewPort
   Address: 0117dcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetPreviewPort(struct ISFMixerIn * *,char *,unsigned long) */

long Mixer_GetPreviewPort(ISFMixerIn **param_1,char *param_2,ulong param_3)

{
  ISFMixerIn **ppIVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  ISFMixerIn **ppIStack_1c;
  int *piStack_18;
  int *piStack_14;
  ISFMixerIn ***pppIStack_10;
  
                    /* 0x17dcf0  195  ?Mixer_GetPreviewPort@@YGJPAPAUISFMixerIn@@PADK@Z */
  ppIVar1 = param_1;
  pppIStack_10 = &param_1;
  param_1 = (ISFMixerIn **)0x0;
  *ppIVar1 = (ISFMixerIn *)0x0;
  piStack_14 = DAT_012b09c8;
  piStack_18 = (int *)0x117dd18;
  iVar2 = (**(code **)(*DAT_012b09c8 + 0x1fc))();
  if (-1 < iVar2) {
    piStack_18 = (int *)0x0;
    ppIStack_1c = ppIVar1;
    iVar3 = (**(code **)(*in_ECX + 0xc))(in_ECX,1);
    if (iVar3 == 0) {
      while( true ) {
        ppIStack_1c = (ISFMixerIn **)0x0;
        (**(code **)(*(int *)*ppIVar1 + 0x8c))(*ppIVar1,0xf,&ppIStack_1c);
        if (((uint)ppIStack_1c & 0x10) != 0) break;
        (**(code **)(*(int *)*ppIVar1 + 8))(*ppIVar1);
        *ppIVar1 = (ISFMixerIn *)0x0;
        iVar3 = (**(code **)(*piStack_18 + 0xc))(piStack_18,1,ppIVar1,0);
        if (iVar3 != 0) {
          (**(code **)(*piStack_14 + 8))(piStack_14);
          return iVar2;
        }
      }
      if (pppIStack_10 != (ISFMixerIn ***)0x0) {
        (**(code **)(*(int *)*ppIVar1 + 0xc))(*ppIVar1,pppIStack_10,unaff_ESI);
      }
      iVar2 = 0;
    }
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  return iVar2;
}


