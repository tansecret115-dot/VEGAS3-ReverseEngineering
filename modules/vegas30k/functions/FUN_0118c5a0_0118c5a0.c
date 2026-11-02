/* Module: vegas30k.dll
   Function: FUN_0118c5a0
   Address: 0118c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118c5a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hEvent;
  
  DVar2 = GetCurrentThreadId();
  if (param_1[0xf] == DVar2) goto LAB_0118c5ea;
  DVar3 = WaitForSingleObject((HANDLE)param_1[0xe],0);
  if (DVar3 == 0) {
    hEvent = (HANDLE)param_1[0xe];
  }
  else {
    if (DVar3 != 0x102) goto LAB_0118c5ea;
    DVar3 = WaitForSingleObject((HANDLE)param_1[0xe],0xffffffff);
    if (DVar3 != 0) goto LAB_0118c5ea;
    hEvent = (HANDLE)param_1[0xe];
  }
  ResetEvent(hEvent);
  param_1[0xf] = DVar2;
LAB_0118c5ea:
  uVar1 = param_1[0x14];
  iVar4 = -0x7fff0001;
  if (((uVar1 & 1) != 0) && (iVar4 = 1, (uVar1 & 4) == 0)) {
    iVar4 = 0x4e001;
    if (((param_1[0x17] & 2U) != 0) && ((uVar1 & 0x32) != 0)) {
      param_1[0x14] = uVar1 | 4;
      param_1[0x17] = param_1[0x17] | 0x10;
      if ((uVar1 & 0x8000) != 0) {
        (**(code **)(*param_1 + 0x40))(param_1,0,1);
        param_1[0x30] = 0;
        param_1[0x14] = param_1[0x14] & 0xffff7fff;
      }
      iVar4 = FUN_0118c6e0(param_2,param_3);
      if (iVar4 == 0) {
        if (param_1[0x30] != 0) {
          iVar4 = (**(code **)(*param_1 + 0x40))(param_1,1,1);
        }
        param_1[0x30] = 0;
      }
    }
  }
  param_1[0x14] = param_1[0x14] & 0xfffffffb;
  param_1[0x17] = param_1[0x17] & 0xffffffef;
  WaitForSingleObject((HANDLE)param_1[0xe],0);
  param_1[0xf] = -1;
  SetEvent((HANDLE)param_1[0xe]);
  return iVar4;
}


