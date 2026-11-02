/* Module: vegas30.exe
   Function: FUN_00455090
   Address: 00455090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455090(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
    uVar7 = *(uint *)(param_1 + 0xb70);
    iVar8 = *(int *)(param_1 + 0xb74);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xb30);
    iVar8 = *(int *)(param_1 + 0xb34);
  }
  uVar1 = *(uint *)(param_1 + 0xb90);
  iVar2 = *(int *)(param_1 + 0xb94);
  lVar3 = *(longlong *)(param_1 + 0xb90);
  if (uVar1 != 0 || iVar2 != 0) {
    if (param_2 == 0xf) {
      iVar8 = *(int *)(param_1 + 0xb74);
      iVar9 = *(int *)(param_1 + 0xb8c);
      uVar7 = *(uint *)(param_1 + 0xb70);
      lVar11 = *(longlong *)(param_1 + 0xb70);
      if ((iVar9 <= iVar8) && ((iVar9 < iVar8 || (*(uint *)(param_1 + 0xb88) <= uVar7)))) {
        iVar6 = uVar1 + *(uint *)(param_1 + 0xb88);
        iVar4 = (iVar2 + iVar9 + (uint)CARRY4(uVar1,*(uint *)(param_1 + 0xb88))) -
                (uint)(iVar6 == 0);
        if (iVar8 < iVar4) {
          return;
        }
        if ((iVar8 <= iVar4) && (uVar7 <= iVar6 - 1U)) {
          return;
        }
      }
      lVar10 = __alldiv(uVar1,iVar2,10,0);
      if ((iVar8 <= iVar9) && ((iVar8 < iVar9 || (uVar7 < *(uint *)(param_1 + 0xb88))))) {
        iVar8 = (iVar8 - (int)((ulonglong)lVar10 >> 0x20)) - (uint)(uVar7 < (uint)lVar10);
        if ((iVar8 < 1) && (iVar8 < 0)) {
          FUN_004543c0(param_1,0,0,uVar1,iVar2,2);
          return;
        }
        FUN_004543c0(param_1,uVar7 - (uint)lVar10,iVar8,uVar1,iVar2,2);
        return;
      }
      FUN_004543c0(param_1,(lVar10 - lVar3) + lVar11,uVar1,iVar2,2);
      return;
    }
    if ((param_2 & 4) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = __alldiv(uVar1,iVar2,10,0);
    }
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) == 0) {
        lVar11 = __alldiv(uVar1,iVar2,0xfffffffe,0xffffffff);
      }
      else {
        lVar11 = lVar11 - lVar3;
      }
      uVar5 = (uint)lVar11;
      iVar8 = iVar8 + (int)((ulonglong)lVar11 >> 0x20) + (uint)CARRY4(uVar7,uVar5);
    }
    else {
      uVar5 = -(uint)lVar11;
      iVar8 = (iVar8 - (int)((ulonglong)lVar11 >> 0x20)) - (uint)(uVar7 < (uint)lVar11);
    }
    iVar9 = uVar7 + uVar5;
    if ((iVar8 < 1) && (iVar8 < 0)) {
      iVar9 = 0;
      iVar8 = 0;
    }
    FUN_004543c0(param_1,iVar9,iVar8,uVar1,iVar2,3);
  }
  return;
}


