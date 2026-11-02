/* Module: vegas30k.dll
   Function: Mixer_GetNumFXPortAssigments
   Address: 01181460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetNumFXPortAssigments(struct ISFMixer *) */

long Mixer_GetNumFXPortAssigments(ISFMixer *param_1)

{
  int iVar1;
  int iVar2;
  ISFMixer **ppIVar3;
  undefined1 *puStack_28;
  ISFMixer *pIStack_24;
  int *piStack_20;
  int *apiStack_c [2];
  int local_4;
  
                    /* 0x181460  186  ?Mixer_GetNumFXPortAssigments@@YGJPAUISFMixer@@@Z */
  iVar2 = 0;
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  piStack_20 = &local_4;
  puStack_28 = (undefined1 *)0x1181483;
  pIStack_24 = param_1;
  (**(code **)(*(int *)param_1 + 0x28))();
  puStack_28 = &stack0xffffffe8;
  iVar1 = (**(code **)(*(int *)param_1 + 0x1fc))(param_1);
  if (-1 < iVar1) {
    apiStack_c[0] = (int *)0x0;
    iVar1 = (**(code **)(*piStack_20 + 0xc))(piStack_20,1,apiStack_c,0);
    while (iVar1 == 0) {
      iVar1 = 0xf;
      (**(code **)(*apiStack_c[0] + 0x8c))(apiStack_c[0],0xf,&stack0xffffffe4);
      ppIVar3 = &pIStack_24;
      pIStack_24 = (ISFMixer *)0x0;
      (**(code **)(iRam00000000 + 0x8c))(0,0x31);
      if (iVar1 == 0x81) {
        iVar2 = iVar2 + 1;
      }
      (**(code **)(*(int *)pIStack_24 + 8))(pIStack_24);
      iVar1 = (**(code **)(*ppIVar3 + 0xc))(ppIVar3,1,&puStack_28,0);
    }
  }
  (**(code **)(*piStack_20 + 8))(piStack_20);
  return iVar2;
}


