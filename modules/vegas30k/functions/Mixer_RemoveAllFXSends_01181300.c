/* Module: vegas30k.dll
   Function: Mixer_RemoveAllFXSends
   Address: 01181300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_RemoveAllFXSends(struct ISFMixer *) */

long Mixer_RemoveAllFXSends(ISFMixer *param_1)

{
  int iVar1;
  int iVar2;
  ISFMixer *pIVar3;
  int iStack_1c;
  ISFMixer *pIStack_18;
  int *piStack_14;
  undefined1 auStack_4 [4];
  
                    /* 0x181300  216  ?Mixer_RemoveAllFXSends@@YGJPAUISFMixer@@@Z */
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  piStack_14 = (int *)&DAT_00000004;
  iStack_1c = 0x118131d;
  pIStack_18 = param_1;
  iVar1 = (**(code **)(*(int *)param_1 + 0x1f0))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      pIVar3 = param_1;
      iStack_1c = iVar2;
      (**(code **)(*(int *)param_1 + 0x1e0))(param_1,auStack_4,4);
      (**(code **)(*piStack_14 + 0x8c))(piStack_14,0x30,&iStack_1c);
      (**(code **)(*(int *)param_1 + 0xd0))(param_1,pIVar3);
      (**(code **)(*(int *)pIVar3 + 8))(pIVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iStack_1c = 4;
  FUN_011833d0(param_1);
  return 0;
}


