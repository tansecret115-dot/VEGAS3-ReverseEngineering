/* Module: vegas30k.dll
   Function: FUN_011d18a0
   Address: 011d18a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011d1a4d) */
/* WARNING: Removing unreachable block (ram,0x011d1a67) */

MMRESULT __thiscall
FUN_011d18a0(int param_1,HWAVEOUT param_2,LPMMTIME param_3,UINT param_4,uint *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  short sVar1;
  longlong lVar2;
  MMRESULT MVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  sVar1 = (short)param_3->wType;
  if (*(int *)(param_1 + 0x48) != 0) {
    MVar3 = FUN_011c6e30(param_3,param_4,param_5);
    return MVar3;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x24);
  *param_5 = 0;
  param_5[1] = 0;
  EnterCriticalSection(lpCriticalSection);
  param_3->wType = 4;
  MVar3 = waveOutGetPosition(param_2,param_3,param_4);
  if (MVar3 != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return MVar3;
  }
  uVar8 = (ulonglong)(param_3->u).ms;
  if (param_3->wType == 2) {
    uVar8 = __allmul(*(undefined2 *)(*(int *)(param_1 + 0x19c) + 0xc),0,(param_3->u).ms,0);
  }
  iVar7 = (int)(uVar8 >> 0x20);
  iVar5 = (int)uVar8;
  if ((*(byte *)(param_1 + 0x154) & 0x80) != 0) {
    if ((*(int *)(param_1 + 0x20c) < 1) && (*(int *)(param_1 + 0x20c) < 0)) {
      uVar4 = FUN_011d1b70(1);
      *(int *)(param_1 + 0x208) = iVar5;
      *(undefined4 *)(param_1 + 0x210) = uVar4;
      *(int *)(param_1 + 0x20c) = iVar7;
    }
    if ((*(int *)(param_1 + 0x208) == iVar5) && (*(int *)(param_1 + 0x20c) == iVar7)) {
      iVar5 = FUN_011d1b70(1);
      iVar7 = *(int *)(param_1 + 0x19c);
      uVar9 = __allmul(*(undefined4 *)(iVar7 + 4),0,iVar5 - *(int *)(param_1 + 0x210),0);
      uVar9 = __alldiv(uVar9,1000,0);
      lVar10 = __allmul(uVar9,*(undefined2 *)(iVar7 + 0xc),0);
      uVar8 = lVar10 + uVar8;
    }
    else {
      uVar4 = FUN_011d1b70(1);
      *(int *)(param_1 + 0x208) = iVar5;
      *(undefined4 *)(param_1 + 0x210) = uVar4;
      *(int *)(param_1 + 0x20c) = iVar7;
    }
  }
  lVar10 = uVar8 + (longlong)(*(int *)(param_1 + 0x200) * 0x200);
  if (((int)((ulonglong)lVar10 >> 0x20) < 1) && (lVar10 < 0)) {
    lVar10 = 0;
  }
  if (*(longlong *)(param_1 + 0x220) < lVar10) {
    lVar10 = *(longlong *)(param_1 + 0x220);
  }
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) <= lVar10) {
    *(longlong *)(param_1 + 0x218) = lVar10;
    lVar2 = lVar10;
  }
  uVar9 = __alldiv(lVar2,*(undefined2 *)(*(int *)(param_1 + 0x19c) + 0xc),0);
  uVar6 = (uint)uVar9;
  if (sVar1 == 1) {
    param_3->wType = 1;
    (param_3->u).ms = (uVar6 / *(uint *)(*(int *)(param_1 + 0x19c) + 4)) * 1000;
    uVar9 = __alldiv(uVar9,*(undefined4 *)(*(int *)(param_1 + 0x19c) + 4),0);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    *(undefined8 *)param_5 = uVar9;
    uVar6 = *param_5;
    uVar9 = 1000;
  }
  else {
    if (sVar1 == 2) {
      param_3->wType = 2;
      (param_3->u).ms = uVar6;
      *(undefined8 *)param_5 = uVar9;
      goto LAB_011d1b4f;
    }
    if (sVar1 != 4) goto LAB_011d1b4f;
    param_3->wType = 4;
    (param_3->u).ms = *(ushort *)(*(int *)(param_1 + 0x19c) + 0xc) * uVar6;
    uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x19c) + 0xc);
    uVar4 = 0;
  }
  uVar9 = __allmul(uVar6,uVar4,uVar9);
  *(undefined8 *)param_5 = uVar9;
LAB_011d1b4f:
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


