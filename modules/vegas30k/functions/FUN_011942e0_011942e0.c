/* Module: vegas30k.dll
   Function: FUN_011942e0
   Address: 011942e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011942e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_1[0x18e] == 0) {
    return -0x7fff0001;
  }
  if (param_1[0x18b] == 0) {
    ResetEvent((HANDLE)param_1[0x20a]);
    iVar2 = (**(code **)(*(int *)param_1[0x18e] + 0x30))((int *)param_1[0x18e]);
    WaitForSingleObject((HANDLE)param_1[0x20a],10000);
    if (iVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
      param_1[399] = 0;
      ResetEvent((HANDLE)param_1[0x20a]);
      param_1[0x150] = 0;
      param_1[8] = param_1[8] & 0xffff27ff;
      param_1[0x171] = 0;
      param_1[0x151] = 0;
      param_1[0x172] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
      FUN_011af240();
      FUN_0119ad40(param_1[0x20a]);
      iVar1 = param_1[0x11];
      param_1[0x216] = 0;
      param_1[0x217] = 0;
      param_1[0x10] = iVar1;
      param_1[0x12] = iVar1;
      if (iVar1 == 0) {
        param_1[0x212] = 0;
        param_1[0x214] = 0;
        param_1[0x213] = 0;
        param_1[0x215] = 0;
      }
      else {
        param_1[0x212] = param_1[0x210];
        param_1[0x213] = param_1[0x211];
        param_1[0x214] = param_1[0x212];
        param_1[0x215] = param_1[0x211];
      }
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x16);
      param_1[0x1da] = 0;
      param_1[0x20] = 0;
      if (*(short *)((int)param_1 + 0x4fa) != 0) {
        piVar4 = param_1 + 0x1f9;
        do {
          uVar3 = uVar3 + 1;
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[2] = 0;
          piVar4 = piVar4 + 3;
        } while (uVar3 < *(ushort *)((int)param_1 + 0x4fa));
        return 0;
      }
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    ResetEvent((HANDLE)param_1[0x20a]);
    param_1[0x1da] = 0;
    param_1[8] = param_1[8] & 0xffff27ffU | 0x2000;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19d));
    (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    FUN_0119ad40(param_1[0x20a]);
    uVar3 = 0;
    if (*(short *)((int)param_1 + 0x4fa) != 0) {
      piVar4 = param_1 + 0x1f9;
      do {
        uVar3 = uVar3 + 1;
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4 = piVar4 + 3;
      } while (uVar3 < *(ushort *)((int)param_1 + 0x4fa));
    }
    iVar2 = 0;
  }
  return iVar2;
}


