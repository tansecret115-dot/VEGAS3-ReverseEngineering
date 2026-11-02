/* Module: vegas30k.dll
   Function: FUN_011c6e30
   Address: 011c6e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011c6f85) */
/* WARNING: Removing unreachable block (ram,0x011c6f99) */

MMRESULT __thiscall FUN_011c6e30(int param_1,LPMMTIME param_2,UINT param_3,uint *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  short sVar1;
  longlong lVar2;
  MMRESULT MVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  sVar1 = (short)param_2->wType;
  *param_4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  param_4[1] = 0;
  EnterCriticalSection(lpCriticalSection);
  param_2->wType = 4;
  MVar3 = waveOutGetPosition(*(HWAVEOUT *)(param_1 + 0x6c),param_2,param_3);
  if (MVar3 != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return MVar3;
  }
  uVar8 = (ulonglong)(param_2->u).ms;
  if (param_2->wType == 2) {
    uVar8 = __allmul(*(undefined2 *)(*(int *)(param_1 + 0x1ac) + 0xc),0,(param_2->u).ms,0);
  }
  iVar7 = (int)(uVar8 >> 0x20);
  iVar6 = (int)uVar8;
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    if ((*(int *)(param_1 + 0x54) < 1) && (*(int *)(param_1 + 0x54) < 0)) {
      DVar4 = timeGetTime();
      *(int *)(param_1 + 0x50) = iVar6;
      *(DWORD *)(param_1 + 0x58) = DVar4;
      *(int *)(param_1 + 0x54) = iVar7;
    }
    if ((*(int *)(param_1 + 0x50) == iVar6) && (*(int *)(param_1 + 0x54) == iVar7)) {
      DVar4 = timeGetTime();
      iVar6 = *(int *)(param_1 + 0x1ac);
      uVar9 = __allmul(*(undefined4 *)(iVar6 + 4),0,DVar4 - *(int *)(param_1 + 0x58),0);
      uVar9 = __alldiv(uVar9,1000,0);
      lVar10 = __allmul(uVar9,*(undefined2 *)(iVar6 + 0xc),0);
      uVar8 = lVar10 + uVar8;
    }
    else {
      DVar4 = timeGetTime();
      *(int *)(param_1 + 0x50) = iVar6;
      *(DWORD *)(param_1 + 0x58) = DVar4;
      *(int *)(param_1 + 0x54) = iVar7;
    }
  }
  lVar10 = uVar8 + (longlong)(*(int *)(param_1 + 0x40) * 0x200);
  if (((int)((ulonglong)lVar10 >> 0x20) < 1) && (lVar10 < 0)) {
    lVar10 = 0;
  }
  if (*(longlong *)(param_1 + 0x48) < lVar10) {
    lVar10 = *(longlong *)(param_1 + 0x48);
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) <= lVar10) {
    *(longlong *)(param_1 + 0x60) = lVar10;
    lVar2 = lVar10;
  }
  uVar9 = __alldiv(lVar2,*(undefined2 *)(*(int *)(param_1 + 0x1ac) + 0xc),0);
  uVar5 = (uint)uVar9;
  if (sVar1 == 1) {
    param_2->wType = 1;
    (param_2->u).ms = (uVar5 / *(uint *)(*(int *)(param_1 + 0x1ac) + 4)) * 1000;
    uVar9 = __alldiv(uVar9,*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 4),0);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    *(undefined8 *)param_4 = uVar9;
    uVar5 = *param_4;
    uVar9 = 1000;
  }
  else {
    if (sVar1 == 2) {
      param_2->wType = 2;
      (param_2->u).ms = uVar5;
      *(undefined8 *)param_4 = uVar9;
      goto LAB_011c707b;
    }
    if (sVar1 != 4) goto LAB_011c707b;
    param_2->wType = 4;
    (param_2->u).ms = *(ushort *)(*(int *)(param_1 + 0x1ac) + 0xc) * uVar5;
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x1ac) + 0xc);
    uVar11 = 0;
  }
  uVar9 = __allmul(uVar5,uVar11,uVar9);
  *(undefined8 *)param_4 = uVar9;
LAB_011c707b:
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


