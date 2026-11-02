/* Module: vegas30.exe
   Function: FUN_00558050
   Address: 00558050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00558050(HWND param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  HWND hWnd;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  CHAR *lpString;
  int iVar13;
  int local_434;
  int local_428;
  int local_424;
  CHAR local_408 [1028];
  
  uVar5 = DAT_0064b138;
  local_434 = 0;
  bVar4 = false;
  FUN_005b83b0(DAT_0064b138,1);
  if (*(int **)(*param_2 + 0x130) == (int *)0x0) {
    local_428 = 0;
  }
  else {
    local_428 = **(int **)(*param_2 + 0x130);
  }
  local_424 = 0;
  if (0 < local_428) {
    do {
      iVar13 = *(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) + local_424 * 4);
      iVar7 = *(int *)(*(int *)(param_2[2] + 8) + local_424 * 4);
      if ((((*(uint *)(*(int *)(iVar13 + 8) + 0x134) >> 5 & 1) == 0) &&
          ((*(uint *)(iVar13 + 0x8c) & 1) == 0)) && (*(int *)(iVar13 + 4) == 3)) {
        iVar6 = *(int *)(iVar7 + 0x10);
        bVar10 = *(int *)(iVar13 + 0x44) != iVar6;
        if (bVar10) {
          *(int *)(iVar13 + 0x44) = iVar6;
        }
        iVar6 = *(int *)(iVar7 + 0x14);
        bVar11 = *(int *)(iVar13 + 0x60) != iVar6;
        if (bVar11) {
          *(int *)(iVar13 + 0x60) = iVar6;
        }
        iVar6 = 4;
        bVar12 = true;
        piVar8 = (int *)(iVar13 + 0x68);
        piVar9 = (int *)(iVar7 + 0x18);
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar12 = *piVar8 == *piVar9;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (bVar12);
        if (!bVar12) {
          *(undefined4 *)(iVar13 + 0x68) = *(undefined4 *)(iVar7 + 0x18);
          *(undefined4 *)(iVar13 + 0x6c) = *(undefined4 *)(iVar7 + 0x1c);
          *(undefined4 *)(iVar13 + 0x70) = *(undefined4 *)(iVar7 + 0x20);
          *(undefined4 *)(iVar13 + 0x74) = *(undefined4 *)(iVar7 + 0x24);
        }
        bVar2 = *(double *)(iVar13 + 0x50) != *(double *)(iVar7 + 0x30);
        if (bVar2) {
          *(undefined4 *)(iVar13 + 0x50) = *(undefined4 *)(iVar7 + 0x30);
          *(undefined4 *)(iVar13 + 0x54) = *(undefined4 *)(iVar7 + 0x34);
        }
        bVar3 = *(double *)(iVar13 + 0x48) != *(double *)(iVar7 + 0x58);
        if (bVar3) {
          bVar4 = true;
          FUN_005f7b90(iVar13,*(undefined4 *)(iVar7 + 0x58),*(undefined4 *)(iVar7 + 0x5c));
        }
        bVar3 = bVar3 || (bVar2 || (!bVar12 || (bVar11 || bVar10)));
        if ((*(int *)(*(int *)(iVar13 + 0x30) + 4) != *(int *)(iVar7 + 100)) ||
           (*(int *)(*(int *)(iVar13 + 0x30) + 8) != *(int *)(iVar7 + 0x68))) {
          bVar3 = true;
          FUN_005f56b0(uVar5,iVar13,(int *)(iVar7 + 100));
        }
        if ((*(int *)(iVar13 + 0x20) == *(int *)(iVar7 + 0x80)) &&
           (*(int *)(iVar13 + 0x24) == *(int *)(iVar7 + 0x84))) {
          if (!bVar3) goto LAB_00558240;
        }
        else {
          FUN_005f5810(uVar5,iVar13,*(int *)(iVar7 + 0x80),*(int *)(iVar7 + 0x84));
        }
        local_434 = 1;
        *(uint *)(iVar13 + 0x8c) = *(uint *)(iVar13 + 0x8c) & 0xffffff7f;
        *(uint *)(*param_2 + 0x134) = *(uint *)(*param_2 + 0x134) | 0x80;
      }
LAB_00558240:
      local_424 = local_424 + 1;
    } while (local_424 < local_428);
  }
  iVar13 = *param_2;
  uVar1 = *(uint *)(iVar13 + 0x134);
  if (param_2[5] == 0) {
    if ((uVar1 & 0x200) == 0) {
      *(uint *)(iVar13 + 0x134) = uVar1 | 0x200;
      iVar13 = *param_2;
      *(int *)(iVar13 + 0x110) = param_2[6];
      *(int *)(iVar13 + 0x114) = param_2[7];
      iVar13 = *param_2;
      iVar7 = param_2[9];
    }
    else {
      iVar7 = param_2[7];
      if ((param_2[6] != *(int *)(iVar13 + 0x110)) || (iVar7 != *(int *)(iVar13 + 0x114))) {
        *(int *)(iVar13 + 0x110) = param_2[6];
        *(int *)(iVar13 + 0x114) = iVar7;
        local_434 = 1;
      }
      iVar13 = *param_2;
      iVar7 = param_2[9];
      if (iVar7 == *(int *)(iVar13 + 0x108)) goto LAB_005582fe;
    }
    *(int *)(iVar13 + 0x108) = iVar7;
LAB_005582fa:
    local_434 = 1;
  }
  else if ((uVar1 & 0x200) != 0) {
    *(undefined4 *)(iVar13 + 0x110) = *(undefined4 *)(iVar13 + 0x118);
    *(undefined4 *)(iVar13 + 0x114) = *(undefined4 *)(iVar13 + 0x11c);
    *(uint *)(*param_2 + 0x134) = *(uint *)(*param_2 + 0x134) & 0xfffffdff;
    goto LAB_005582fa;
  }
LAB_005582fe:
  lpString = local_408;
  iVar13 = 0x400;
  local_408[0] = '\0';
  hWnd = GetDlgItem(param_1,0x50d);
  GetWindowTextA(hWnd,lpString,iVar13);
  if (*(LPCSTR *)(*param_2 + 0x154) == (LPCSTR)0x0) {
    if (local_408[0] == '\0') goto LAB_00558366;
  }
  else {
    iVar13 = lstrcmpA(*(LPCSTR *)(*param_2 + 0x154),local_408);
    if (iVar13 == 0) goto LAB_00558366;
  }
  local_434 = 1;
  FUN_005f1510(local_408);
LAB_00558366:
  if (bVar4) {
    FUN_005f0120(0);
    FUN_005effc0(0);
  }
  if (local_434 != 0) {
    *(uint *)(*param_2 + 0x134) = *(uint *)(*param_2 + 0x134) | 0x10;
    DAT_0064767c = DAT_0064767c | 0xb00;
  }
  FUN_005b84d0(uVar5,1);
  return local_434;
}


