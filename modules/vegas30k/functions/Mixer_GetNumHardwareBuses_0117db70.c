/* Module: vegas30k.dll
   Function: Mixer_GetNumHardwareBuses
   Address: 0117db70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetNumHardwareBuses(struct ISFMixer *) */

long Mixer_GetNumHardwareBuses(ISFMixer *param_1)

{
  int iVar1;
  int *unaff_EDI;
  int iVar2;
  int *piVar3;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  ISFMixer *pIStack_18;
  int *piStack_14;
  int local_8;
  int iStack_4;
  
                    /* 0x17db70  187  ?Mixer_GetNumHardwareBuses@@YGJPAUISFMixer@@@Z */
  iVar2 = 0;
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  piStack_14 = &local_8;
  local_8 = 0;
  uStack_1c = 0x117db98;
  pIStack_18 = param_1;
  iVar1 = (**(code **)(*(int *)param_1 + 0x1fc))();
  if (-1 < iVar1) {
    piStack_20 = &iStack_4;
    uStack_1c = 0;
    iStack_4 = 0;
    uStack_24 = 1;
    iVar1 = (**(code **)(*unaff_EDI + 0xc))();
    while (iVar1 == 0) {
      uStack_1c = 0;
      piVar3 = (int *)0xf;
      (**(code **)(*piStack_14 + 0x8c))(piStack_14,0xf,&uStack_1c);
      if (unaff_EDI == (int *)0x0) {
        iVar2 = iVar2 + 1;
      }
      (**(code **)(*piStack_20 + 8))(piStack_20);
      iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,1,&uStack_24,0);
    }
    (**(code **)(*piStack_20 + 8))(piStack_20);
  }
  return iVar2;
}


