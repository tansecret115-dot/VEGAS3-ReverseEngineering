/* Module: vegas30k.dll
   Function: FUN_0118bb20
   Address: 0118bb20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118bb20(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return -0x7fff0001;
  }
  DVar2 = GetCurrentThreadId();
  if (param_1[0xf] != DVar2) {
    DVar3 = WaitForSingleObject((HANDLE)param_1[0xe],0);
    if (DVar3 == 0) {
      ResetEvent((HANDLE)param_1[0xe]);
      param_1[0xf] = DVar2;
    }
    else if ((DVar3 == 0x102) &&
            (DVar3 = WaitForSingleObject((HANDLE)param_1[0xe],0xffffffff), DVar3 == 0)) {
      ResetEvent((HANDLE)param_1[0xe]);
      param_1[0xf] = DVar2;
    }
  }
  if ((param_1[0x14] & 0x400U) != 0) {
    if ((param_2 & 0x100000) == 0) {
      WaitForSingleObject((HANDLE)param_1[0xe],0);
      param_1[0xf] = -1;
      SetEvent((HANDLE)param_1[0xe]);
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x98))(param_1,param_1[0x59] | param_1[0x58]);
    if (iVar4 < 0) {
      WaitForSingleObject((HANDLE)param_1[0xe],0);
      param_1[0xf] = -1;
      SetEvent((HANDLE)param_1[0xe]);
      param_1[0x14] = param_1[0x14] & 0xfffffbff;
      return iVar4;
    }
  }
  param_1[0x58] = param_2 & 0xffff;
  param_1[0x6e] = param_3;
  param_1[0x6c] = param_3;
  param_1[0x59] = param_2 & 0xffff0000;
  param_1[0x6f] = param_4;
  param_1[0x72] = 0;
  param_1[0x6d] = param_4;
  iVar4 = FUN_0118b990(param_3,param_4,param_2);
  if (-1 < iVar4) {
    iVar4 = FUN_0118bd10(param_3,param_4,param_1[0x58] | param_1[0x59]);
    if (iVar4 < 0) {
      piVar1 = (int *)param_1[0x7e];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[0x7e] = 0;
    }
    WaitForSingleObject((HANDLE)param_1[0xe],0);
    param_1[0xf] = -1;
    SetEvent((HANDLE)param_1[0xe]);
    return iVar4;
  }
  piVar1 = (int *)param_1[0x7e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x7e] = 0;
  WaitForSingleObject((HANDLE)param_1[0xe],0);
  param_1[0xf] = -1;
  SetEvent((HANDLE)param_1[0xe]);
  return iVar4;
}


