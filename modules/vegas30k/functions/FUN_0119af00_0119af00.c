/* Module: vegas30k.dll
   Function: FUN_0119af00
   Address: 0119af00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119af00(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x18e] == 0) {
    return -0x7fff0001;
  }
  if (param_1[0x18b] != 0) {
    param_1[0x18b] = param_1[0x18b] + -1;
  }
  if (param_1[0x189] != 0) {
    param_1[0x189] = param_1[0x189] + -1;
  }
  if ((param_1[0x18b] != 0) || (param_1[0x189] != 0)) {
    return 0;
  }
  if ((param_1[8] & 0x1000U) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffff9f);
    param_1[0x150] = 0;
    param_1[8] = param_1[8] & 0xffffff9f;
    param_1[0x151] = 0;
    param_1[0x171] = 0;
    param_1[0x172] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x16);
    param_1[0x20] = 0;
    param_1[0x1b] = 0;
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    return 0;
  }
  if (param_1[9] == 0) {
    ResetEvent((HANDLE)param_1[0x20a]);
    iVar1 = (**(code **)(*(int *)param_1[0x18e] + 0x30))((int *)param_1[0x18e]);
    WaitForSingleObject((HANDLE)param_1[0x20a],10000);
    if (iVar1 != 0) {
      SetEvent((HANDLE)param_1[0x20a]);
      param_1[0x18b] = param_1[0x18b] + 1;
      return iVar1;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    ResetEvent((HANDLE)param_1[0x20a]);
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffff3f9f);
    param_1[0x150] = 0;
    param_1[8] = param_1[8] & 0xffff3f9f;
    param_1[0x151] = 0;
    param_1[0x171] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    FUN_011af240();
    FUN_0119ad40(param_1[0x20a]);
    SetEvent((HANDLE)param_1[0x20b]);
    iVar1 = param_1[0x11];
    param_1[0x216] = 0;
    param_1[0x217] = 0;
    param_1[0x10] = iVar1;
    param_1[0x12] = iVar1;
    if (iVar1 != 0) {
      param_1[0x212] = param_1[0x210];
      param_1[0x213] = param_1[0x211];
      param_1[0x214] = param_1[0x212];
      param_1[0x215] = param_1[0x211];
      goto LAB_0119b11f;
    }
  }
  else {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffff9f);
    iVar1 = param_1[0x11];
    param_1[0x150] = 0;
    param_1[0x216] = 0;
    param_1[8] = param_1[8] & 0xffff3f9f;
    param_1[0x151] = 0;
    param_1[0x171] = 0;
    param_1[0x217] = 0;
    param_1[0x10] = iVar1;
    param_1[0x12] = iVar1;
    if (iVar1 != 0) {
      param_1[0x212] = param_1[0x210];
      param_1[0x213] = param_1[0x211];
      param_1[0x214] = param_1[0x212];
      param_1[0x215] = param_1[0x211];
      goto LAB_0119b11f;
    }
  }
  param_1[0x212] = 0;
  param_1[0x214] = 0;
  param_1[0x213] = 0;
  param_1[0x215] = 0;
LAB_0119b11f:
  param_1[0x22a] = 0;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x16);
  param_1[0x1ae] = -1;
  param_1[0x1af] = -1;
  param_1[0x172] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x22b] = 0;
  param_1[0x1ac] = 0;
  return 0;
}


