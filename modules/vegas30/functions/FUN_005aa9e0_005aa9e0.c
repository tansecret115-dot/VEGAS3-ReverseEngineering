/* Module: vegas30.exe
   Function: FUN_005aa9e0
   Address: 005aa9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005aaacc) */
/* WARNING: Removing unreachable block (ram,0x005aaa61) */
/* WARNING: Removing unreachable block (ram,0x005aaad8) */

undefined4 FUN_005aa9e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar3 = param_1;
  ftol();
  ftol();
  lVar8 = ftol();
  if (lVar8 < 1) {
    lVar8 = 0;
  }
  iVar4 = (int)((ulonglong)lVar8 >> 0x20);
  lVar9 = ftol();
  piVar1 = (int *)(param_1 + 0x240);
  lVar9 = lVar9 + 1;
  iVar6 = (int)((ulonglong)lVar9 >> 0x20);
  param_1 = 0;
  if (0 < *piVar1) {
    plVar5 = (longlong *)(iVar3 + 0x40);
    do {
      if ((*plVar5 < lVar8) || (lVar9 < *plVar5)) {
        *(undefined4 *)plVar5 = 0xffffffff;
        *(undefined4 *)((int)plVar5 + 4) = 0x7fffffff;
      }
      param_1 = param_1 + 1;
      plVar5 = plVar5 + 1;
    } while (param_1 < *(int *)(iVar3 + 0x240));
  }
  *param_5 = 0;
  if (iVar4 <= iVar6) {
    if (iVar4 < iVar6) goto LAB_005aab17;
    while ((uint)lVar8 <= (uint)lVar9) {
LAB_005aab17:
      do {
        iVar7 = (int)((ulonglong)lVar8 >> 0x20);
        iVar4 = FUN_005aa970(iVar3,lVar8);
        if (iVar4 == -1) {
          iVar4 = *param_5;
          *(uint *)(param_4 + iVar4 * 8) = (uint)lVar8;
          *(int *)(param_4 + 4 + iVar4 * 8) = iVar7;
          iVar4 = *param_5;
          *param_5 = iVar4 + 1;
          if (0xf < iVar4 + 1) {
            return 0;
          }
        }
        iVar7 = iVar7 + (uint)(0xfffffffe < (uint)lVar8);
        lVar2 = lVar8 + 1;
        lVar8 = lVar8 + 1;
      } while (iVar7 < iVar6);
      lVar8 = lVar2;
      if (iVar6 < iVar7) {
        return 0;
      }
    }
  }
  return 0;
}


