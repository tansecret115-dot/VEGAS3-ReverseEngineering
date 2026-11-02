/* Module: vegas30.exe
   Function: FUN_004c0a70
   Address: 004c0a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c0d58) */
/* WARNING: Removing unreachable block (ram,0x004c0d10) */
/* WARNING: Removing unreachable block (ram,0x004c0c09) */
/* WARNING: Removing unreachable block (ram,0x004c0b59) */
/* WARNING: Removing unreachable block (ram,0x004c0b73) */
/* WARNING: Removing unreachable block (ram,0x004c0c94) */
/* WARNING: Removing unreachable block (ram,0x004c0d24) */
/* WARNING: Removing unreachable block (ram,0x004c0d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c0a70(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *in_stack_00000014;
  
  iVar4 = (int)param_1;
  piVar5 = (int *)FUN_005b89a0();
  if (piVar5 != (int *)0x0) {
    lVar10 = ftol();
    lVar10 = lVar10 + *(longlong *)((int)param_1 + 0xb88);
    floor((double)((extraout_ST1 * (float10)_DAT_006129c8) / extraout_ST0 + (float10)_DAT_00610560))
    ;
    lVar11 = ftol();
    iVar7 = (int)((ulonglong)lVar11 >> 0x20);
    uVar6 = (uint)lVar11;
    floor(((double)*(longlong *)((int)param_1 + 0xb90) * _DAT_006128d8) /
          (double)*(int *)((int)param_1 + 0xb98) + _DAT_00610560);
    iVar8 = *piVar5 + -1;
    if (-1 < iVar8) {
      param_1 = (int *)(piVar5[2] + iVar8 * 4);
      do {
        iVar1 = *param_1;
        if (((*(int *)(iVar1 + 0x30) != 0) &&
            (CONCAT44((*(int *)(iVar1 + 0x14) - iVar7) - (uint)(*(uint *)(iVar1 + 0x10) < uVar6),
                      *(uint *)(iVar1 + 0x10) - uVar6) <= lVar10)) &&
           (lVar10 < lVar11 + *(longlong *)(iVar1 + 0x18))) {
          iVar8 = *(int *)(iVar4 + 0xb90);
          iVar2 = *(int *)(iVar4 + 0xb94);
          lVar13 = *(longlong *)(iVar4 + 0xb90);
          if (iVar8 == 0 && iVar2 == 0) {
            param_1 = (int *)0xffffffff;
          }
          else {
            lVar12 = ftol();
            uVar3 = lVar12 + *(int *)(iVar4 + 0xac0);
            param_1 = (int *)uVar3;
            if ((uVar3 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_1)))) {
              if (0x3fff < (longlong)uVar3) {
                param_1 = (int *)0x3fff;
              }
            }
            else {
              param_1 = (int *)0xffffc000;
            }
          }
          if (iVar8 == 0 && iVar2 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            lVar12 = ftol();
            uVar3 = lVar12 + *(int *)(iVar4 + 0xac0);
            uVar9 = (uint)uVar3;
            if ((uVar3 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar9)))) {
              if (0x3fff < (longlong)uVar3) {
                uVar9 = 0x3fff;
              }
            }
            else {
              uVar9 = 0xffffc000;
            }
          }
          if ((int)(uVar9 - (int)param_1) < 9) {
            floor(((double)lVar13 * (double)((int)(uVar9 - (int)param_1) / 2)) /
                  (double)*(int *)(iVar4 + 0xb98) + _DAT_00610560);
            lVar13 = ftol();
          }
          else {
            lVar13 = __alldiv(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),4,0);
          }
          uVar9 = *(uint *)(iVar1 + 0x10);
          if ((CONCAT44((*(int *)(iVar1 + 0x14) - iVar7) - (uint)(uVar9 < uVar6),uVar9 - uVar6) <=
               lVar10) && (lVar10 < lVar13 + *(longlong *)(iVar1 + 0x10))) {
            *in_stack_00000014 = 0x41;
            return iVar1;
          }
          uVar6 = *(uint *)(iVar1 + 0x18);
          if ((CONCAT44((*(int *)(iVar1 + 0x1c) - (int)((ulonglong)lVar13 >> 0x20)) -
                        (uint)(uVar6 < (uint)lVar13),uVar6 - (uint)lVar13) <= lVar10) &&
             (lVar10 < lVar11 + *(longlong *)(iVar1 + 0x18))) {
            *in_stack_00000014 = 0x42;
            return iVar1;
          }
          *in_stack_00000014 = 0x40;
          return iVar1;
        }
        iVar8 = iVar8 + -1;
        param_1 = param_1 + -1;
      } while (-1 < iVar8);
    }
  }
  return 0;
}


