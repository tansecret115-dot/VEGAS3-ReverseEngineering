/* Module: vegas30k.dll
   Function: FUN_011c7c30
   Address: 011c7c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011c7db7) */

MMRESULT __thiscall FUN_011c7c30(int param_1,HWAVEIN param_2,LPMMTIME param_3,UINT param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  short sVar1;
  longlong lVar2;
  MMRESULT MVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  sVar1 = (short)param_3->wType;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  param_3->wType = 4;
  MVar3 = waveInGetPosition(param_2,param_3,param_4);
  if (MVar3 != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return MVar3;
  }
  uVar8 = (ulonglong)(param_3->u).ms;
  if (param_3->wType == 2) {
    uVar8 = __allmul(*(undefined2 *)(*(int *)(param_1 + 0x90) + 0xc),0,(param_3->u).ms,0);
  }
  iVar7 = (int)(uVar8 >> 0x20);
  iVar6 = (int)uVar8;
  if (*(int *)(param_1 + 0x24c) != 0) {
    if ((*(int *)(param_1 + 0x254) < 1) && (*(int *)(param_1 + 0x254) < 0)) {
      uVar4 = FUN_011c8000();
      *(undefined4 *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x250) = iVar6;
      *(undefined4 *)(param_1 + 0x25c) = 0;
      *(int *)(param_1 + 0x254) = iVar7;
    }
    if ((*(int *)(param_1 + 0x250) == iVar6) && (*(int *)(param_1 + 0x254) == iVar7)) {
      uVar5 = FUN_011c8000();
      iVar6 = *(int *)(param_1 + 0x90);
      uVar9 = __allmul(*(undefined4 *)(iVar6 + 4),0,uVar5 - *(uint *)(param_1 + 600),
                       -(uint)(uVar5 < *(uint *)(param_1 + 600)) - *(int *)(param_1 + 0x25c));
      uVar9 = __alldiv(uVar9,1000,0);
      lVar10 = __allmul(uVar9,*(undefined2 *)(iVar6 + 0xc),0);
      uVar8 = lVar10 + uVar8;
    }
    else {
      uVar4 = FUN_011c8000();
      *(undefined4 *)(param_1 + 600) = uVar4;
      *(int *)(param_1 + 0x250) = iVar6;
      *(undefined4 *)(param_1 + 0x25c) = 0;
      *(int *)(param_1 + 0x254) = iVar7;
    }
  }
  lVar10 = uVar8 + (longlong)(*(int *)(param_1 + 100) * 0x200);
  if (((int)((ulonglong)lVar10 >> 0x20) < 1) && (lVar10 < 0)) {
    lVar10 = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (*(longlong *)(param_1 + 0x260) <= lVar10) {
    *(longlong *)(param_1 + 0x260) = lVar10;
    lVar2 = lVar10;
  }
  uVar5 = __alldiv(lVar2,*(undefined2 *)(*(int *)(param_1 + 0x90) + 0xc),0);
  if (sVar1 == 1) {
    param_3->wType = 1;
    (param_3->u).ms = (uVar5 / *(uint *)(*(int *)(param_1 + 0x90) + 4)) * 1000;
  }
  else if (sVar1 == 2) {
    param_3->wType = 2;
    (param_3->u).ms = uVar5;
  }
  else if (sVar1 == 4) {
    param_3->wType = 4;
    (param_3->u).ms = *(ushort *)(*(int *)(param_1 + 0x90) + 0xc) * uVar5;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


