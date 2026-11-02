/* Module: vegas30.exe
   Function: FUN_004e48b0
   Address: 004e48b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e4bbc) */
/* WARNING: Removing unreachable block (ram,0x004e4afa) */
/* WARNING: Removing unreachable block (ram,0x004e4a32) */
/* WARNING: Removing unreachable block (ram,0x004e4b32) */
/* WARNING: Removing unreachable block (ram,0x004e4bea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e48b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int iStack_c;
  
  iVar1 = DAT_00647630;
  if (((param_2 != 0) && (DAT_00647630 != 0)) && (DAT_0064762c != 0)) {
    iVar3 = *(int *)(DAT_0064762c + 0x70);
    if (iVar3 == 0) {
      FUN_004e46f0(DAT_00647624,0);
      iVar3 = *(int *)(DAT_0064762c + 0x70);
      if (iVar3 == 0) {
        return;
      }
    }
    if ((param_1 != 0) || (param_1 = *(int *)(param_2 + 0x50), param_1 != 0)) {
      FUN_004e3c20(iVar3);
      FUN_004de320(iVar3,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x1c),0,0);
      if ((((*(int *)(param_2 + 4) == 3) &&
           ((*(int *)(param_2 + 0x50) != 0 && (*(int *)(*(int *)(param_2 + 0x50) + 0x18) != 0)))) &&
          (iVar2 = FUN_005f13f0(3), iVar2 != 0)) && (_DAT_00610fd8 == *(double *)(iVar2 + 0x48))) {
        lVar6 = *(longlong *)(param_1 + 0x10);
      }
      else {
        lVar6 = FUN_004dc020(iVar3 + 0x80);
      }
      lVar7 = ftol();
      lVar8 = ftol();
      if (lVar6 <= lVar8) {
        lVar8 = lVar6;
      }
      FUN_00458260(iVar1,local_30,local_28);
      FUN_004a45b0(iVar1,&local_20,&local_18);
      uVar4 = *(uint *)(param_1 + 8) - *(uint *)(param_2 + 0x18);
      iStack_c = (*(int *)(param_1 + 0xc) - *(int *)(param_2 + 0x1c)) -
                 (uint)(*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0x18));
      lVar9 = ftol();
      lVar10 = ftol();
      if ((lVar9 < 0x100000000) && (lVar9 < 0)) {
        lVar9 = 0;
      }
      else if (lVar6 < lVar9) {
        lVar9 = lVar6;
      }
      if ((lVar10 < 0x100000000) && (lVar10 < 0)) {
        lVar10 = 0;
      }
      else if (lVar6 < lVar10) {
        lVar10 = lVar6;
      }
      uVar5 = uVar4 + local_20;
      iVar1 = iStack_c + local_1c;
      lVar11 = ftol();
      local_10 = uVar5 + local_18;
      iStack_c = iVar1 + (uint)CARRY4(uVar4,local_20) + local_14 + (uint)CARRY4(uVar5,local_18);
      lVar12 = ftol();
      if ((lVar11 < 0x100000000) && (lVar11 < 0)) {
        lVar11 = 0;
      }
      else if (lVar6 < lVar11) {
        lVar11 = lVar6;
      }
      if ((lVar12 < 0x100000000) && (lVar12 < 0)) {
        lVar12 = 0;
      }
      else if (lVar6 < lVar12) {
        lVar12 = lVar6;
      }
      iVar1 = iVar3 + 0x80;
      FUN_004543c0(iVar1,lVar7,lVar8 - lVar7,1);
      FUN_00458370(iVar1,lVar9,lVar10 - lVar9);
      FUN_00453280(iVar1,lVar11,lVar12 - lVar11,1);
      if (((byte)*(undefined4 *)(iVar3 + 0xc) & 3) == 3) {
        FUN_00416020(*(undefined4 *)(DAT_0064762c + 0x34),*(undefined4 *)(iVar3 + 0x14));
      }
      SetFocus(*(HWND *)(iVar3 + 8));
    }
  }
  return;
}


