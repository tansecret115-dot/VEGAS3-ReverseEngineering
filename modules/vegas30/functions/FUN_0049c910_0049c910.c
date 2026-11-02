/* Module: vegas30.exe
   Function: FUN_0049c910
   Address: 0049c910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049c910(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  HCURSOR hCursor;
  int iVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_8;
  undefined4 local_4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb48);
  *(uint *)(param_1 + 0x18) = uVar3 | 0xc000;
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb4c);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0xb50);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x14;
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xb54);
  if ((uVar3 & 0x20000) == 0) {
    hCursor = (HCURSOR)_SfGetUICursor_4(0xd);
    SetCursor(hCursor);
  }
  lVar12 = ftol();
  iVar4 = *(int *)(param_1 + 0xcec);
  uVar3 = *(uint *)(param_1 + 0x174);
  *(longlong *)(param_1 + 0x98) = lVar12 + *(longlong *)(param_1 + 0xb88);
  bVar7 = false;
  bVar8 = false;
  if (uVar3 < 0xd) {
    if (uVar3 == 0xc) {
switchD_0049ca17_caseD_5:
      bVar7 = true;
    }
    else {
      switch(uVar3) {
      case 4:
      case 8:
        piVar5 = *(int **)(*(int *)(iVar4 + 8) + 0x28);
        if ((piVar5 != (int *)0x0) && (iVar6 = *piVar5, iVar6 != 0)) {
          local_8 = *(uint *)(param_1 + 0x98);
          local_4 = *(undefined4 *)(param_1 + 0x9c);
          iVar9 = _SfList_FindSortedInsertIndexRange_20(piVar5,&local_8,0,0xffffffff,&LAB_005c5a20);
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + -1;
            if (iVar9 < 0) break;
          }
          if ((iVar9 < iVar6 + -1) &&
             ((piVar10 = (int *)(piVar5[1] * iVar9 + piVar5[2]),
              *(int *)(piVar5[1] * iVar9 + 4 + piVar5[2]) != 0 ||
              ((*piVar10 != 0 && (piVar10[9] != 0)))))) goto switchD_0049ca17_caseD_7;
        }
        break;
      case 5:
        goto switchD_0049ca17_caseD_5;
      case 6:
        goto switchD_0049ca17_caseD_6;
      default:
        goto switchD_0049ca17_caseD_7;
      }
    }
LAB_0049cac1:
    if (iVar4 != 0) {
      puVar1 = (uint *)(iVar4 + 0x18);
      lVar12 = *(longlong *)puVar1;
      puVar2 = (uint *)(iVar4 + 0x20);
      if (bVar7) {
        local_8 = *(uint *)(iVar4 + 0x78);
        lVar13 = *(longlong *)(iVar4 + 0x78);
        if (local_8 != 0 || *(int *)(iVar4 + 0x7c) != 0) goto LAB_0049cb61;
      }
      lVar12 = *(longlong *)puVar1;
      lVar13 = *(longlong *)puVar2;
      if (bVar8) {
        uVar3 = *(uint *)(iVar4 + 0x80);
        lVar12 = *(longlong *)puVar1;
        lVar13 = *(longlong *)puVar2;
        if (uVar3 != 0 || *(int *)(iVar4 + 0x84) != 0) {
          uVar11 = *puVar1 + *puVar2;
          lVar12 = CONCAT44(((*(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x24) +
                             (uint)CARRY4(*puVar1,*puVar2)) - *(int *)(iVar4 + 0x84)) -
                            (uint)(uVar11 < uVar3),uVar11 - uVar3);
          lVar13 = *(longlong *)(iVar4 + 0x80);
        }
      }
      goto LAB_0049cb61;
    }
  }
  else {
    switch(uVar3) {
    case 0x301:
    case 0x304:
      goto switchD_0049ca17_caseD_5;
    case 0x303:
    case 0x305:
switchD_0049ca17_caseD_6:
      bVar8 = true;
      goto LAB_0049cac1;
    }
  }
switchD_0049ca17_caseD_7:
  lVar12 = FUN_004a2d10(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0x98),
                        *(undefined4 *)(param_1 + 0x9c),0xffffffff);
  lVar13 = FUN_004a2d10(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0x98),
                        *(undefined4 *)(param_1 + 0x9c),1);
  lVar13 = lVar13 - lVar12;
LAB_0049cb61:
  *(int *)(param_1 + 0x1a8) = (int)lVar12;
  *(int *)(param_1 + 0x1b0) = (int)(lVar13 + lVar12);
  *(int *)(param_1 + 0x1ac) = (int)((ulonglong)lVar12 >> 0x20);
  *(int *)(param_1 + 0x1b4) = (int)((ulonglong)(lVar13 + lVar12) >> 0x20);
  FUN_00453340(param_1,lVar12,lVar13,0x20);
  return;
}


