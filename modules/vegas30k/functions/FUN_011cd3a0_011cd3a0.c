/* Module: vegas30k.dll
   Function: FUN_011cd3a0
   Address: 011cd3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_011cd3a0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  double dVar2;
  MMRESULT MVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return -0x7ffb1fff;
  }
  _DAT_0120900c = 4;
  if (*(int *)(param_1 + 0x2b8) == 0) {
    if (*(int *)(param_1 + 0x2ac) == 0) goto LAB_011cd476;
    if (*(double *)(param_1 + 0xb0) == _DAT_011db3f0) {
      *(double *)(param_1 + 0xb0) = (double)*(uint *)(*(int *)(param_1 + 0x60) + 4);
    }
    dVar2 = *(double *)(param_1 + 0xb0) / (double)*(uint *)(*(int *)(param_1 + 0x60) + 4);
  }
  else {
    if (*(double *)(param_1 + 0xb8) == _DAT_011db3f0) {
      *(double *)(param_1 + 0xb8) = (double)*(uint *)(*(int *)(param_1 + 0x60) + 4);
    }
    dVar2 = *(double *)(param_1 + 0xb8) / (double)*(uint *)(*(int *)(param_1 + 0x60) + 4);
  }
  *(double *)(param_1 + 0x288) = _DAT_011db3e8 - dVar2;
LAB_011cd476:
  dVar2 = _DAT_011e2af8;
  if ((_DAT_011e2af8 <= *(double *)(param_1 + 0x288)) &&
     (dVar2 = _DAT_011db3e8 - *(double *)(param_1 + 0x298), *(double *)(param_1 + 0x288) <= dVar2))
  {
    dVar2 = *(double *)(param_1 + 0x288);
  }
  *(double *)(param_1 + 0x288) = dVar2;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(param_1 + 0x24);
  if (((uVar1 & 2) == 0) || ((uVar1 & 4) != 0)) {
    *(uint *)(param_1 + 0x24) = uVar1 & 0xfffffffd | 4;
    MVar3 = waveOutPause(*(HWAVEOUT *)(param_1 + 0x2f4));
    iVar4 = FUN_011c1770(MVar3);
    if (iVar4 < 0) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar4;
    }
  }
  else {
    *(uint *)(param_1 + 0x24) = uVar1 & 0xfffffffd | 4;
    MVar3 = waveOutPause(*(HWAVEOUT *)(param_1 + 0x2f4));
    iVar4 = FUN_011c1770(MVar3);
    if (iVar4 < 0) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar4;
    }
    uVar5 = FUN_011cdaf0();
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0xa0) - (uint)uVar5;
    *(uint *)(param_1 + 0x8c) =
         (*(int *)(param_1 + 0xa4) - (int)((ulonglong)uVar5 >> 0x20)) -
         (uint)(*(uint *)(param_1 + 0xa0) < (uint)uVar5);
  }
  if ((*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x8c)) ||
     ((*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x8c) &&
      (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88))))) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x334) = 3;
    SetEvent(*(HANDLE *)(param_1 + 0x328));
    ResetEvent(*(HANDLE *)(param_1 + 0x330));
    LeaveCriticalSection(lpCriticalSection);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x330),0xffffffff);
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffb;
      return -0x7ffb1f5f;
    }
  }
  FUN_011cb930(3,0,0);
  return iVar4;
}


