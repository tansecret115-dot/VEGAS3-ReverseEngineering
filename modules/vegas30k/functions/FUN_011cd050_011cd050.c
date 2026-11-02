/* Module: vegas30k.dll
   Function: FUN_011cd050
   Address: 011cd050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_011cd050(int param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  MMRESULT MVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  double local_20;
  undefined4 local_14 [4];
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return 0x8004e001;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if (((*(byte *)(param_1 + 0x24) & 4) != 0) && (*(int *)(param_1 + 0x334) == 3)) {
    *(undefined4 *)(param_1 + 0x334) = 0x3bd;
    SetEvent(*(HANDLE *)(param_1 + 0x330));
  }
  local_14[0] = 2;
  iVar4 = FUN_011cba10(1);
  uVar5 = FUN_011cba10(0);
  FUN_011cb5b0(*(undefined4 *)(param_1 + 0x2f4),local_14,0xc,&local_28);
  uVar6 = iVar4 - *(int *)(param_1 + 0x224);
  *(uint *)(param_1 + 0x220) = uVar6;
  *(double *)(param_1 + 0xb0) = (double)*(uint *)(*(int *)(param_1 + 0x60) + 4);
  if (uVar6 != 0) {
    *(double *)(param_1 + 0xb0) =
         ((double)CONCAT44(uStack_24,local_28) / (double)uVar6) * _DAT_011ea820;
  }
  if (*(int *)(param_1 + 0x2b8) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
    iVar4 = __alldiv(local_28,uStack_24,*(undefined4 *)(*(int *)(param_1 + 0x60) + 4),0);
    if (*(uint *)(param_1 + 0x208) < uVar5) {
      uVar5 = uVar5 - *(uint *)(param_1 + 0x208);
      if (uVar5 < (uint)(iVar4 * 1000)) {
        uVar6 = iVar4 * 1000 - uVar5;
      }
      else {
        uVar6 = uVar5 + iVar4 * -1000;
      }
      if (uVar6 < 200) {
        *(double *)(param_1 + 0xb8) =
             ((double)CONCAT44(uStack_24,local_28) / (double)uVar5) * _DAT_011ea820;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xffffff79;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = 0x3bd;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  MVar7 = waveOutReset(*(HWAVEOUT *)(param_1 + 0x2f4));
  FUN_011c1770(MVar7);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  iVar4 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x280) + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
  if (*(int *)(param_1 + 0x2b8) == 0) {
    if (*(int *)(param_1 + 0x2ac) != 0) {
      local_20 = (double)(ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 4);
      *(double *)(param_1 + 0x288) =
           _DAT_011db3e8 - *(double *)(param_1 + 0xb0) / (double)(longlong)local_20;
    }
  }
  else {
    local_20 = (double)(ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 4);
    dVar2 = _DAT_011db3e8 - *(double *)(param_1 + 0xb8) / (double)(longlong)local_20;
    bVar1 = _DAT_011e2af8 <= dVar2;
    *(double *)(param_1 + 0x290) = dVar2;
    dVar3 = _DAT_011e2af8;
    if ((bVar1) &&
       (local_20 = _DAT_011db3e8 - *(double *)(param_1 + 0x298), dVar3 = dVar2, local_20 < dVar2)) {
      dVar3 = local_20;
    }
    *(double *)(param_1 + 0x290) = dVar3;
  }
  dVar2 = _DAT_011e2af8;
  if ((_DAT_011e2af8 <= *(double *)(param_1 + 0x288)) &&
     (dVar2 = _DAT_011db3e8 - *(double *)(param_1 + 0x298), *(double *)(param_1 + 0x288) <= dVar2))
  {
    dVar2 = *(double *)(param_1 + 0x288);
  }
  *(double *)(param_1 + 0x288) = dVar2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  uVar8 = 0;
  (**(code **)(param_1 + 0x2c))(param_1,5,*(undefined4 *)(param_1 + 0x30),0,0,0,0);
  FUN_011cb930(4,0,0);
  return uVar8;
}


