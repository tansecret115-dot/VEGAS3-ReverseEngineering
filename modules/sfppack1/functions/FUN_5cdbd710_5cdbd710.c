/* Module: sfppack1.dll
   Function: FUN_5cdbd710
   Address: 5cdbd710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdbd710(void *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 local_30 [12];
  
  *(undefined4 *)((int)param_1 + 0x54) = 1;
  *(undefined4 *)((int)param_1 + 0x180) = 0;
  sVar3 = (*(short **)((int)param_1 + 0x70))[7];
  if ((sVar3 == 0x40) || ((**(short **)((int)param_1 + 0x70) == 1 && (sVar3 == 0x20)))) {
    if (*(LPCVOID *)((int)param_1 + 0x188) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x188));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x188));
      GlobalFree(pvVar4);
    }
    *(undefined4 *)((int)param_1 + 0x18c) = 0x800;
    pcVar9 = GlobalAlloc_exref;
    pvVar4 = GlobalAlloc(0x42,(uint)*(ushort *)(*(int *)((int)param_1 + 0x70) + 2) << 0xe);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)((int)param_1 + 0x188) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  else {
    if (*(LPCVOID *)((int)param_1 + 0x184) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x184));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x184));
      GlobalFree(pvVar4);
    }
    pcVar9 = GlobalAlloc_exref;
    *(undefined4 *)((int)param_1 + 0x18c) = 0x800;
    pvVar4 = GlobalAlloc(0x42,(uint)*(ushort *)(*(int *)((int)param_1 + 0x70) + 2) << 0xd);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)((int)param_1 + 0x184) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  FUN_5cdb9800(param_1,local_30);
  FUN_5cdbd040(param_1,(int)local_30);
  *(undefined4 *)((int)param_1 + 0xd8) = 0;
  *(undefined4 *)((int)param_1 + 0xd0) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 1;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0xe0) = 0;
  *(undefined4 *)((int)param_1 + 0x194) = 0;
  *(undefined4 *)((int)param_1 + 0x198) = 0;
  *(undefined4 *)((int)param_1 + 0xe4) = 0;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  DVar6 = timeGetTime();
  srand(DVar6 >> 3);
  DVar6 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x344) = (DVar6 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x70) + 4);
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x34c) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x34c));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x34c));
    GlobalFree(pvVar4);
  }
  *(undefined4 *)((int)param_1 + 0x350) = 0;
  *(undefined4 *)((int)param_1 + 0x354) = 0;
  *(undefined4 *)((int)param_1 + 0x358) = 0;
  if (DAT_5ce237e8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x70) + 4) / 100;
    *(uint *)((int)param_1 + 0x348) = uVar8;
    pvVar4 = (HGLOBAL)(*pcVar9)(0x42,uVar8 << 2);
    pvVar5 = GlobalLock(pvVar4);
    uVar8 = *(uint *)((int)param_1 + 0x348);
    *(LPVOID *)((int)param_1 + 0x34c) = pvVar5;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0x34c) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0x34c) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0x34c) + uVar7 * 4) - _DAT_5ce13230;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0x34c) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0x34c) + iVar1) * _DAT_5ce1322c;
        uVar8 = *(uint *)((int)param_1 + 0x348);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  return 0;
}


