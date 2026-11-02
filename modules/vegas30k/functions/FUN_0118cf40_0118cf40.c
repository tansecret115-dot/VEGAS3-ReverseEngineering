/* Module: vegas30k.dll
   Function: FUN_0118cf40
   Address: 0118cf40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118cf40(int *param_1,uint param_2,int param_3,int param_4)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  HANDLE hEvent;
  
  if ((param_1[0x14] & 1U) == 0) {
    return -0x7fff0001;
  }
  DVar1 = GetCurrentThreadId();
  if (param_1[0xf] != DVar1) {
    DVar2 = WaitForSingleObject((HANDLE)param_1[0xe],0);
    if (DVar2 == 0) {
      hEvent = (HANDLE)param_1[0xe];
LAB_0118cf99:
      ResetEvent(hEvent);
      param_1[0xf] = DVar1;
    }
    else if (DVar2 == 0x102) {
      DVar2 = WaitForSingleObject((HANDLE)param_1[0xe],0xffffffff);
      if (DVar2 == 0) {
        hEvent = (HANDLE)param_1[0xe];
        goto LAB_0118cf99;
      }
    }
  }
  if ((param_1[0x14] & 2U) != 0) {
    if ((param_2 & 0x100000) == 0) {
      iVar3 = 0;
      goto LAB_0118d0cb;
    }
    iVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_1[0x59] | param_1[0x58]);
    if (iVar3 < 0) {
      param_1[0x14] = param_1[0x14] & 0xfffffffd;
      goto LAB_0118d0cb;
    }
  }
  param_1[100] = param_3;
  param_1[0x62] = param_3;
  param_1[0x58] = param_2 & 0xffff;
  param_1[0x59] = param_2 & 0xffff0000;
  param_1[0x65] = param_4;
  param_1[0x68] = 0;
  param_1[99] = param_4;
  uVar4 = ftol();
  param_1[0x28] = (int)uVar4;
  param_1[0x24] = -1;
  param_1[0x29] = (int)((ulonglong)uVar4 >> 0x20);
  param_1[0x25] = -1;
  iVar3 = __alldiv(param_3,param_4,10000,0);
  param_1[0x69] = iVar3;
  param_1[0x19] = param_2 >> 0x15 & 1;
  iVar3 = FUN_0118c940(param_3,param_4,param_2);
  if (iVar3 == 0) {
    FUN_0118b190(param_2);
    if (param_1[0x32] != 0) {
      FUN_01192360();
    }
    iVar3 = FUN_0118cba0(param_3,param_4,param_1[0x58] | param_1[0x59]);
  }
LAB_0118d0cb:
  WaitForSingleObject((HANDLE)param_1[0xe],0);
  param_1[0xf] = -1;
  SetEvent((HANDLE)param_1[0xe]);
  return iVar3;
}


