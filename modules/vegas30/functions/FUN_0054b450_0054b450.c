/* Module: vegas30.exe
   Function: FUN_0054b450
   Address: 0054b450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0054b5c9) */

uint __thiscall FUN_0054b450(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  LPCSTR lpString2;
  LPCSTR lpString1;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  double local_8;
  
  switch(param_3) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x19:
    lpString2 = (LPCSTR)FUN_0054b2c0(param_3);
    lpString1 = (LPCSTR)FUN_0054b2c0(param_3);
    uVar7 = lstrcmpA(lpString1,lpString2);
    return uVar7;
  case 1:
    FUN_005bad20(DAT_0064b138);
    iVar11 = FUN_005ed430(*param_1);
    iVar10 = FUN_005ed430(*param_2);
    if (iVar11 < iVar10) {
      return 0xffffffff;
    }
    return (uint)(iVar11 != iVar10);
  case 2:
    uVar7 = param_1[2];
    iVar11 = param_1[3];
    uVar9 = param_2[2];
    iVar10 = param_2[3];
    break;
  case 3:
    iVar11 = param_1[0xe] - param_2[0xe];
    iVar10 = (param_1[0xf] - param_2[0xf]) - (uint)((uint)param_1[0xe] < (uint)param_2[0xe]);
    goto joined_r0x0054b5bd;
  case 4:
    if (*(ushort *)(param_1 + 0x1f) < *(ushort *)(param_2 + 0x1f)) {
      return 0xffffffff;
    }
    if (*(ushort *)(param_2 + 0x1f) < *(ushort *)(param_1 + 0x1f)) {
      return 1;
    }
    if (*(ushort *)((int)param_1 + 0x7e) < *(ushort *)((int)param_2 + 0x7e)) {
      return 0xffffffff;
    }
    if (*(ushort *)((int)param_2 + 0x7e) < *(ushort *)((int)param_1 + 0x7e)) {
      return 1;
    }
    if (*(ushort *)((int)param_1 + 0x82) < *(ushort *)((int)param_2 + 0x82)) {
      return 0xffffffff;
    }
    if (*(ushort *)((int)param_2 + 0x82) < *(ushort *)((int)param_1 + 0x82)) {
      return 1;
    }
    if (*(ushort *)(param_1 + 0x21) < *(ushort *)(param_2 + 0x21)) {
      return 0xffffffff;
    }
    if (*(ushort *)(param_1 + 0x21) <= *(ushort *)(param_2 + 0x21)) {
      if (*(ushort *)((int)param_1 + 0x86) < *(ushort *)((int)param_2 + 0x86)) {
        return 0xffffffff;
      }
      if (*(ushort *)((int)param_2 + 0x86) < *(ushort *)((int)param_1 + 0x86)) {
        return 1;
      }
      if (*(ushort *)(param_1 + 0x22) < *(ushort *)(param_2 + 0x22)) {
        return 0xffffffff;
      }
      if (*(ushort *)(param_1 + 0x22) <= *(ushort *)(param_2 + 0x22)) {
        if (*(ushort *)((int)param_1 + 0x8a) < *(ushort *)((int)param_2 + 0x8a)) {
          return 0xffffffff;
        }
        return (uint)(*(ushort *)((int)param_2 + 0x8a) < *(ushort *)((int)param_1 + 0x8a));
      }
      return 1;
    }
    return 1;
  case 9:
    uVar7 = *(uint *)(*param_1 + 0x110);
    uVar9 = *(uint *)(*param_2 + 0x110);
    uVar4 = (uint)(uVar7 < uVar9);
    uVar5 = *(int *)(*param_1 + 0x114) - *(int *)(*param_2 + 0x114);
    iVar11 = uVar5 - uVar4;
    if ((iVar11 < 1) && (iVar11 < 0)) {
      return 0xffffffff;
    }
    bVar12 = uVar7 == uVar9 && uVar5 == uVar4;
    goto LAB_0054b5fd;
  case 10:
    iVar11 = param_1[0xb0] - param_2[0xb0];
    iVar10 = (param_1[0xb1] - param_2[0xb1]) - (uint)((uint)param_1[0xb0] < (uint)param_2[0xb0]);
joined_r0x0054b5bd:
    if ((iVar10 < 1) && (iVar10 < 0)) {
      return 0xffffffff;
    }
    bVar12 = iVar11 == 0 && iVar10 == 0;
    goto LAB_0054b5fd;
  case 0xb:
    piVar8 = *(int **)(*param_1 + 0x138);
    if (piVar8 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar8;
    }
    piVar3 = *(int **)(*param_2 + 0x138);
    if (piVar3 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar3;
    }
    if (iVar11 < iVar10) {
      return 0xffffffff;
    }
    if (piVar8 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar8;
    }
    if (piVar3 == (int *)0x0) {
      return (uint)(iVar11 != 0);
    }
    return (uint)(iVar11 != *piVar3);
  case 0xc:
    uVar7 = param_1[0xf4];
    iVar11 = param_1[0xf5];
    uVar9 = param_2[0xf4];
    iVar10 = param_2[0xf5];
    break;
  case 0xd:
  case 0xe:
  case 0xf:
    if (((*(byte *)(*param_1 + 0x134) & 0x20) != 0) || (param_1[0x100] == -1)) {
      if ((*(byte *)(*param_2 + 0x134) & 0x20) != 0) {
        return 0;
      }
      if (param_2[0x100] == -1) {
        return 0;
      }
      return 0xffffffff;
    }
    if ((*(byte *)(*param_2 + 0x134) & 0x20) != 0) {
      return 1;
    }
    if (param_2[0x100] != -1) {
      iVar11 = *(int *)(*(int *)(*(int *)(*param_1 + 0x130) + 8) + param_1[0x100] * 4);
      iVar10 = *(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) + param_2[0x100] * 4);
      if (param_3 == 0xd) {
        param_2 = *(int **)(*(int *)(iVar11 + 0x2c) + 4);
        piVar8 = *(int **)(*(int *)(iVar10 + 0x2c) + 4);
      }
      else if (param_3 == 0xe) {
        param_2 = (int *)(uint)*(ushort *)(iVar11 + 0x68);
        piVar8 = (int *)(uint)*(ushort *)(iVar10 + 0x68);
      }
      else {
        piVar8 = param_2;
        if (param_3 == 0xf) {
          param_2 = (int *)(uint)*(ushort *)(*(int *)(iVar11 + 0x2c) + 2);
          piVar8 = (int *)(uint)*(ushort *)(*(int *)(iVar10 + 0x2c) + 2);
        }
      }
      if (param_2 < piVar8) {
        return 0xffffffff;
      }
      return (uint)(param_2 != piVar8);
    }
    return 1;
  case 0x10:
    uVar7 = param_1[0x10c];
    iVar11 = param_1[0x10d];
    uVar9 = param_2[0x10c];
    iVar10 = param_2[0x10d];
    break;
  case 0x12:
  case 0x15:
    if (((*(byte *)(*param_1 + 0x134) & 0x20) == 0) && (param_1[0x125] != -1)) {
      if ((*(byte *)(*param_2 + 0x134) & 0x20) != 0) {
        return 1;
      }
      if (param_2[0x125] != -1) {
        iVar11 = *(int *)(*(int *)(*(int *)(*param_1 + 0x130) + 8) + param_1[0x125] * 4);
        iVar10 = *(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) + param_2[0x125] * 4);
        if (param_3 == 0x12) {
          local_8 = *(double *)(iVar11 + 0x48);
          dVar6 = *(double *)(iVar10 + 0x48);
        }
        else {
          dVar6 = local_8;
          if (param_3 == 0x15) {
            local_8 = *(double *)(iVar11 + 0x50);
            dVar6 = *(double *)(iVar10 + 0x50);
          }
        }
        if (dVar6 <= local_8) {
          if (local_8 == dVar6) {
            return 0;
          }
          return 1;
        }
        return 0xffffffff;
      }
      return 1;
    }
    goto LAB_0054b8af;
  case 0x16:
    if (((*(byte *)(*param_1 + 0x134) & 0x20) == 0) && (param_1[0x125] != -1)) {
      if (((*(byte *)(*param_2 + 0x134) & 0x20) != 0) || (param_2[0x125] == -1)) {
        return 1;
      }
      iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(*param_1 + 0x130) + 8) + param_1[0x125] * 4) +
                       0x30);
      iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) + param_2[0x125] * 4) +
                       0x30);
      iVar1 = *(int *)(iVar11 + 4);
      iVar2 = *(int *)(iVar10 + 4);
      if (iVar1 < iVar2) {
        return 0xffffffff;
      }
      if (iVar2 < iVar1) {
        return 1;
      }
      uVar7 = *(uint *)(iVar11 + 8);
      uVar9 = *(uint *)(iVar10 + 8);
LAB_0054b948:
      if ((int)uVar7 < (int)uVar9) {
        return 0xffffffff;
      }
      return (uint)(uVar7 != uVar9);
    }
    goto LAB_0054b8af;
  case 0x17:
    if (((*(byte *)(*param_1 + 0x134) & 0x20) == 0) && (param_1[0x125] != -1)) {
      if ((*(byte *)(*param_2 + 0x134) & 0x20) != 0) {
        return 1;
      }
      if (param_2[0x125] == -1) {
        return 1;
      }
      uVar7 = (uint)*(ushort *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*param_1 + 0x130) + 8) +
                                       param_1[0x125] * 4) + 0x30) + 0xe);
      uVar9 = (uint)*(ushort *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) +
                                       param_2[0x125] * 4) + 0x30) + 0xe);
      goto LAB_0054b948;
    }
LAB_0054b8af:
    if ((*(byte *)(*param_2 + 0x134) & 0x20) != 0) {
      return 0;
    }
    if (param_2[0x125] == -1) {
      return 0;
    }
    return 0xffffffff;
  case 0x18:
    uVar7 = param_1[0x148];
    iVar11 = param_1[0x149];
    uVar9 = param_2[0x148];
    iVar10 = param_2[0x149];
    break;
  default:
    goto switchD_0054b465_default;
  }
  if (iVar11 <= iVar10) {
    if (iVar11 < iVar10) {
      return 0xffffffff;
    }
    if (uVar7 < uVar9) {
      return 0xffffffff;
    }
  }
  if (uVar7 == uVar9) {
    bVar12 = iVar11 == iVar10;
LAB_0054b5fd:
    if (bVar12) {
switchD_0054b465_default:
      return 0;
    }
  }
  return 1;
}


