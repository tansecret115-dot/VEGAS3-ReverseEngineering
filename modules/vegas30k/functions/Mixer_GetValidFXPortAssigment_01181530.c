/* Module: vegas30k.dll
   Function: Mixer_GetValidFXPortAssigment
   Address: 01181530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* long __stdcall Mixer_GetValidFXPortAssigment(struct ISFMixerIn * *,unsigned long,struct ISFMixer
   *) */

long Mixer_GetValidFXPortAssigment(ISFMixerIn **param_1,ulong param_2,ISFMixer *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 *puStack_c;
  int iStack_8;
  int *local_4;
  
                    /* 0x181530  196
                       ?Mixer_GetValidFXPortAssigment@@YGJPAPAUISFMixerIn@@KPAUISFMixer@@@Z */
  if (param_3 == (ISFMixer *)0x0) {
    param_3 = DAT_012b09c8;
  }
  *param_1 = (ISFMixerIn *)0x0;
  (**(code **)(*(int *)param_3 + 0x28))();
  iVar2 = (**(code **)(*(int *)param_3 + 0x1fc))(param_3,&stack0xffffffec);
  if (-1 < iVar2) {
    local_4 = (int *)0x0;
    iVar3 = (*_DAT_0000000c)(&local_4,1,&local_4,0);
    iVar1 = iStack_8;
    while (iVar3 == 0) {
      iStack_8 = 0;
      (**(code **)(*local_4 + 0x8c))(local_4,0xf,&iStack_8);
      if ((iStack_8 == 0x81) &&
         ((**(code **)(*local_4 + 0x8c))(local_4,0x32,&stack0xffffffe8), iVar1 == unaff_EDI)) {
        iVar2 = 0;
        *puStack_c = local_4;
        break;
      }
      (**(code **)(*local_4 + 8))(local_4);
      iVar2 = 1;
      iVar3 = (**(code **)(*(int *)param_3 + 0xc))(param_3,1,&iStack_8,0);
    }
  }
  (*(code *)local_4[2])(&local_4);
  return iVar2;
}


