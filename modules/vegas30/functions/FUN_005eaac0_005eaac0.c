/* Module: vegas30.exe
   Function: FUN_005eaac0
   Address: 005eaac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eaac0(int *param_1,int *param_2,ulong param_3,ulong param_4,int *param_5,int param_6,
                int *param_7)

{
  LPSTREAM pstm;
  int *piVar1;
  int iVar2;
  HRESULT HVar3;
  LPVOID pvVar4;
  ISFGraphBuilder *local_8;
  int iStack_4;
  
  piVar1 = param_7;
  *param_7 = 0;
  iVar2 = FUN_005b8630(param_2);
  if (*(int *)(iVar2 + 0x3f4) != 0) {
    pstm = *(LPSTREAM *)(iVar2 + 0x3f0);
    param_2 = (HGLOBAL)0x0;
    param_7 = (int *)0x0;
    iVar2 = FUN_005bad70(pstm,&param_7);
    if (iVar2 < 0) {
      return iVar2;
    }
    HVar3 = GetHGlobalFromStream(pstm,&param_2);
    if (HVar3 < 0) {
      return HVar3;
    }
    pvVar4 = GlobalLock(param_2);
    if (pvVar4 == (LPVOID)0x0) {
      return -0x7ff8fffa;
    }
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,pvVar4,param_7,0);
    iStack_4 = (int)param_7;
    GlobalUnlock(param_2);
    goto LAB_005eac12;
  }
  local_8 = (ISFGraphBuilder *)0x0;
  param_7 = (int *)0x0;
  param_2 = (int *)0x0;
  iVar2 = Mixer_GetDeviceGraph(&local_8,param_3,param_4);
  if ((iVar2 < 0) || (iVar2 = (**(code **)(*(int *)local_8 + 0xb8))(local_8,&param_7), iVar2 < 0)) {
LAB_005eabf6:
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  else {
    (**(code **)(*param_7 + 0x10))(param_7,param_5);
    (**(code **)(*param_5 + 0xc))(param_5,1,&stack0x00000000,0);
    (**(code **)(*param_1 + 8))(param_1);
    if (param_2 != (int *)0x0) {
      iVar2 = FUN_005badc0(0,7,param_2,param_1,param_6 == 0,&iStack_4);
      goto LAB_005eabf6;
    }
    iVar2 = -0x7fff0001;
  }
  if (local_8 != (ISFGraphBuilder *)0x0) {
    (**(code **)(*(int *)local_8 + 8))(local_8);
  }
LAB_005eac12:
  if (-1 < iVar2) {
    *piVar1 = *piVar1 + iStack_4;
  }
  return iVar2;
}


