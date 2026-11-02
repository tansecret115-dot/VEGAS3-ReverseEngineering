/* Module: vegas30.exe
   Function: FUN_00499a50
   Address: 00499a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00499cab) */
/* WARNING: Removing unreachable block (ram,0x00499ba9) */
/* WARNING: Removing unreachable block (ram,0x00499b85) */
/* WARNING: Removing unreachable block (ram,0x00499cb9) */
/* WARNING: Removing unreachable block (ram,0x00499bb7) */

void FUN_00499a50(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_10;
  int local_c;
  
  bVar2 = false;
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x218);
    local_10 = 0;
    local_c = 0;
    switch(param_2) {
    default:
      goto switchD_00499a8e_caseD_8;
    case 0x15:
      bVar2 = true;
    case 6:
    case 0x19:
    case 0x1b:
    case 0x1c:
      local_10 = *(uint *)(param_1 + 0x18) - *(uint *)(iVar3 + 0x80);
      local_c = (*(int *)(param_1 + 0x1c) - *(int *)(iVar3 + 0x84)) -
                (uint)(*(uint *)(param_1 + 0x18) < *(uint *)(iVar3 + 0x80));
      if (param_2 == 0x1b) {
        iVar5 = 0;
        iVar3 = 0;
      }
      else {
        iVar5 = -local_10;
        iVar3 = -(local_c + (uint)(local_10 != 0));
      }
      break;
    case 0x16:
      bVar2 = true;
    case 7:
    case 0x1a:
      iVar5 = *(uint *)(param_1 + 0x20) - *(uint *)(iVar3 + 0x90);
      iVar3 = (*(int *)(param_1 + 0x24) - *(int *)(iVar3 + 0x94)) -
              (uint)(*(uint *)(param_1 + 0x20) < *(uint *)(iVar3 + 0x90));
    }
    if (bVar2) {
      iVar3 = *piVar1;
      param_2 = 0;
      if (0 < iVar3) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 8) + param_2 * 4);
          if (iVar5 != *(int *)(param_1 + 0x50)) {
            if (*(int *)(iVar5 + 0x18) != 0) {
              FUN_005f13f0(*(undefined4 *)(param_1 + 4));
            }
            lVar9 = ftol();
            lVar10 = ftol();
            if ((lVar10 < 0x100000000) && (lVar10 < 0)) {
              lVar10 = 0;
            }
            else {
              lVar11 = CONCAT44((int)((ulonglong)lVar9 >> 0x20) - (uint)((int)lVar9 == 0),
                                (int)lVar9 + -1);
              if (lVar11 < lVar10) {
                lVar10 = lVar11;
              }
            }
            local_10 = (uint)lVar10;
            lVar11 = ftol();
            if (lVar9 - lVar10 <= lVar11) {
              lVar11 = lVar9 - lVar10;
            }
            if (lVar11 < 1) {
              lVar11 = 0;
            }
            *(uint *)(iVar5 + 8) = local_10;
            *(int *)(iVar5 + 0x10) = (int)lVar11;
            *(int *)(iVar5 + 0xc) = (int)((ulonglong)lVar10 >> 0x20);
            *(int *)(iVar5 + 0x14) = (int)((ulonglong)lVar11 >> 0x20);
          }
          param_2 = param_2 + 1;
        } while (param_2 < iVar3);
        return;
      }
    }
    else if ((local_10 != 0 || local_c != 0) || (iVar5 != 0 || iVar3 != 0)) {
      iVar3 = *piVar1;
      param_2 = 0;
      if (0 < iVar3) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 8) + param_2 * 4);
          if (iVar5 != *(int *)(param_1 + 0x50)) {
            if (*(int *)(iVar5 + 0x18) != 0) {
              FUN_005f13f0(*(undefined4 *)(param_1 + 4));
            }
            lVar10 = ftol();
            uVar7 = *(uint *)(iVar5 + 8) + local_10;
            iVar8 = *(int *)(iVar5 + 0xc) + local_c + (uint)CARRY4(*(uint *)(iVar5 + 8),local_10);
            if ((iVar8 < 1) && (iVar8 < 0)) {
              uVar7 = 0;
              iVar8 = 0;
            }
            else {
              uVar6 = (int)lVar10 - 1;
              iVar4 = (int)((ulonglong)lVar10 >> 0x20) - (uint)((int)lVar10 == 0);
              if ((iVar4 <= iVar8) && ((iVar4 < iVar8 || (uVar6 < uVar7)))) {
                uVar7 = uVar6;
                iVar8 = iVar4;
              }
            }
            lVar9 = __allmul(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),2,0);
            lVar10 = lVar10 - CONCAT44(iVar8,uVar7);
            if (lVar10 <= lVar9) {
              lVar9 = lVar10;
            }
            if (lVar9 < 1) {
              lVar9 = 0;
            }
            *(uint *)(iVar5 + 8) = uVar7;
            *(int *)(iVar5 + 0xc) = iVar8;
            *(longlong *)(iVar5 + 0x10) = lVar9;
          }
          param_2 = param_2 + 1;
        } while (param_2 < iVar3);
      }
    }
  }
switchD_00499a8e_caseD_8:
  return;
}


