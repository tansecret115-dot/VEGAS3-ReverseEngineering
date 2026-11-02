/* Module: vegas30.exe
   Function: FUN_005e7df0
   Address: 005e7df0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005e7df0(int *param_1,int *param_2,int *param_3,ulong param_4,ISFMixerIn *param_5)

{
  ulong *puVar1;
  size_t *psVar2;
  LPSTREAM *ppstm;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int *unaff_EBX;
  int *unaff_EBP;
  ULARGE_INTEGER *unaff_EDI;
  int *unaff_retaddr;
  int *local_4;
  
  puVar1 = (ulong *)(param_1 + 2);
  local_4 = (int *)0x0;
  *param_1 = (int)param_2;
  *puVar1 = param_4;
  param_1[1] = (int)param_3;
  if (param_5 == (ISFMixerIn *)0x0) {
    if (param_2 == (int *)0x7) {
      iVar4 = Mixer_GetPreviewPort(&param_5,(char *)(param_1 + 3),0x104);
    }
    else if (param_2 == (int *)&DAT_00000005) {
      iVar4 = Mixer_GetDevice(&param_5,4,(ulong)param_3);
    }
    else {
      iVar4 = Mixer_GetMainBus(&param_5,(ulong)param_3,(ISFMixer *)0x0);
    }
    if (-1 < iVar4) goto LAB_005e7e67;
  }
  else {
    (**(code **)(*(int *)param_5 + 4))(param_5);
LAB_005e7e67:
    if (*param_1 == 5) {
      Mixer_GetFXBusAssignment(param_1[1],puVar1);
    }
    if (*param_1 == 7) {
      Mixer_GetPreviewPort(puVar1);
    }
    if (((*puVar1 & 0x80000000) == 0) && (*param_1 != 7)) {
      (**(code **)(*(int *)param_5 + 0x28))(param_5,param_1 + 3,0x104);
    }
    (**(code **)(*(int *)param_5 + 0xc))(param_5,param_1 + 0x44,0x104);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x85,0x104);
    psVar2 = (size_t *)(param_1 + 200);
    (**(code **)(*unaff_EBX + 0x98))(unaff_EBX,param_1 + 0xc6,0,psVar2);
    if (*psVar2 != 0) {
      pvVar5 = calloc(1,*psVar2);
      param_1[199] = (int)pvVar5;
      if (pvVar5 == (void *)0x0) {
        iVar4 = -0x7ff8fff2;
        goto LAB_005e8008;
      }
      (**(code **)(*(int *)param_5 + 0x98))(param_5,param_1 + 0xc6,pvVar5,psVar2);
    }
    (**(code **)(*(int *)param_5 + 0x5c))(param_5,param_1 + 0xce);
    (**(code **)(*param_3 + 0x78))(param_3,param_1 + 0xca);
    iVar4 = (**(code **)(*unaff_retaddr + 0x88))(unaff_retaddr);
    param_1[0xd2] = (uint)(iVar4 == 0);
    iVar4 = (**(code **)(*local_4 + 0x54))(local_4);
    param_1[0xd3] = (uint)(iVar4 == 0);
    iVar4 = (**(code **)(*unaff_EBX + 0x48))(unaff_EBX);
    ppstm = (LPSTREAM *)(param_1 + 0xd7);
    param_1[0xd5] = 0;
    param_1[0xd4] = (uint)(iVar4 == 0);
    *ppstm = (LPSTREAM)0x0;
    (**(code **)(*unaff_EBP + 0x100))(unaff_EBP,param_1 + 0xd6);
    iVar4 = 0;
    if (param_1[0xd6] == 0) goto LAB_005e8022;
    iVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,ppstm);
    if (-1 < iVar4) {
      local_4 = (int *)0x0;
      iVar4 = (**(code **)(*(int *)param_5 + 0xfc))(param_5,&local_4);
      if (((-1 < iVar4) && (iVar4 = _SfGraph_SaveToStream_8(local_4,*ppstm), -1 < iVar4)) &&
         (iVar4 = (*(*ppstm)->lpVtbl->Seek)(*ppstm,(LARGE_INTEGER)0x0,0,unaff_EDI), -1 < iVar4))
      goto LAB_005e8022;
    }
  }
LAB_005e8008:
  piVar3 = (int *)param_1[0xd7];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0xd7] = 0;
  }
LAB_005e8022:
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  local_4 = (int *)0x0;
  if (param_5 != (ISFMixerIn *)0x0) {
    (**(code **)(*(int *)param_5 + 8))(param_5);
  }
  return iVar4;
}


