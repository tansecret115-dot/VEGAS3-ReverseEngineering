/* Module: vidcap30.exe
   Function: FUN_0044e7b0
   Address: 0044e7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e7b0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_74;
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  local_74 = 1;
  iVar5 = FUN_0044c6c0(param_1);
  iVar6 = FUN_0044c6c0(param_2);
  iVar7 = FUN_0044c6e0(param_1);
  iVar8 = FUN_0044c6e0(param_2);
  if (param_3 < 0) {
    local_74 = -1;
    param_3 = -param_3;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_4 + 8) + -4 + param_3 * 4);
  iVar9 = FUN_0045ad60(param_1,param_2,0,1);
  if (iVar7 == 0) {
    if (iVar8 == 0) goto LAB_0044e852;
    goto LAB_0044ee29;
  }
  if (iVar8 == 0) {
    return local_74;
  }
LAB_0044e852:
  switch(*puVar2) {
  case 1:
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar5 = FUN_0045ad60(*(undefined4 *)(*(int *)(iVar7 + 4) + 0xc),
                           *(undefined4 *)(*(int *)(iVar8 + 4) + 0xc),iVar9,1);
      return iVar5 * local_74;
    }
    break;
  case 2:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x20);
    uVar11 = *(uint *)(iVar8 + 0x20);
    iVar5 = *(int *)(iVar7 + 0x24);
    iVar6 = *(int *)(iVar8 + 0x24);
    if (uVar10 == uVar11) {
LAB_0044e8c0:
      if (iVar5 == iVar6) break;
    }
    goto LAB_0044e8c8;
  case 3:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x28);
    uVar11 = *(uint *)(iVar8 + 0x28);
    iVar5 = *(int *)(iVar7 + 0x2c);
    iVar6 = *(int *)(iVar8 + 0x2c);
    if (uVar10 == uVar11) goto LAB_0044e8c0;
    goto LAB_0044e8c8;
  case 4:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    lVar14 = FUN_004443a0(iVar8);
    lVar15 = FUN_004443a0(iVar7);
    if (lVar14 == lVar15) break;
    uVar16 = FUN_004443a0(iVar8);
    uVar17 = FUN_004443a0(iVar7);
    goto LAB_0044e9a4;
  case 5:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    lVar14 = FUN_0045b190(*(undefined4 *)(iVar8 + 0x14));
    lVar15 = FUN_0045b190(*(undefined4 *)(iVar7 + 0x14));
    if (lVar14 == lVar15) break;
    uVar16 = FUN_0045b190(*(undefined4 *)(iVar8 + 0x14));
    uVar17 = FUN_0045b190(*(undefined4 *)(iVar7 + 0x14));
LAB_0044e9a4:
    iVar5 = (int)((ulonglong)uVar17 >> 0x20);
    iVar6 = (int)((ulonglong)uVar16 >> 0x20);
    if (iVar5 < iVar6) goto LAB_0044ee29;
    if (iVar6 < iVar5) {
      return local_74;
    }
    bVar12 = (uint)uVar17 < (uint)uVar16;
    bVar13 = (uint)uVar17 == (uint)uVar16;
    goto LAB_0044e8d8;
  case 6:
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar5 = FUN_0045ad60(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar8 + 0x14),iVar9,1);
      return iVar5 * local_74;
    }
    break;
  case 7:
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar5 = FUN_0045ad60(*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar8 + 0x18),iVar9,1);
      return iVar5 * local_74;
    }
    break;
  case 8:
    if ((iVar5 != 0) && (iVar6 != 0)) {
      iVar5 = FUN_0045ad60(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar6 + 0x14),iVar9,1);
      return iVar5 * local_74;
    }
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar5 = FUN_0045ad60(*(undefined4 *)(iVar7 + 0x3c),*(undefined4 *)(iVar8 + 0x3c),iVar9,1);
      return iVar5 * local_74;
    }
    break;
  case 9:
    if ((iVar7 != 0) && (iVar8 != 0)) {
      FUN_0044e350(iVar7,local_34,0x32);
      FUN_0044e350(iVar8,local_68,0x32);
      iVar5 = FUN_0045ad60(local_34,local_68,iVar9,1);
      return iVar5 * local_74;
    }
    break;
  case 10:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x38) & 1;
    if ((uVar10 != 0) && ((*(byte *)(iVar8 + 0x38) & 1) == 0)) {
      return local_74;
    }
    if (uVar10 == 0) {
      bVar1 = *(byte *)(iVar8 + 0x38);
      goto joined_r0x0044ebe4;
    }
    if ((*(byte *)(iVar8 + 0x38) & 1) == 0) break;
    uVar10 = *(uint *)(iVar7 + 0x60);
    uVar11 = *(uint *)(iVar8 + 0x60);
    iVar5 = *(int *)(iVar7 + 100);
    iVar6 = *(int *)(iVar8 + 100);
    if (uVar10 == uVar11) goto LAB_0044e8c0;
    goto LAB_0044e8c8;
  case 0xb:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x38) & 1;
    if ((uVar10 != 0) && ((*(byte *)(iVar8 + 0x38) & 1) == 0)) {
      return local_74;
    }
    if (uVar10 == 0) {
      bVar1 = *(byte *)(iVar8 + 0x38);
      goto joined_r0x0044ebe4;
    }
    if ((*(byte *)(iVar8 + 0x38) & 1) == 0) break;
    uVar10 = *(uint *)(iVar7 + 0x68);
    uVar11 = *(uint *)(iVar8 + 0x68);
    iVar5 = *(int *)(iVar7 + 0x6c);
    iVar6 = *(int *)(iVar8 + 0x6c);
    if (uVar10 == uVar11) goto LAB_0044e8c0;
LAB_0044e8c8:
    if (iVar6 <= iVar5) {
      if (iVar6 < iVar5) {
        return local_74;
      }
LAB_0044e8d6:
      bVar12 = uVar10 < uVar11;
      bVar13 = uVar10 == uVar11;
LAB_0044e8d8:
      if (!bVar12 && !bVar13) {
        return local_74;
      }
    }
    goto LAB_0044ee29;
  case 0xc:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x38) & 1;
    if ((uVar10 != 0) && ((*(byte *)(iVar8 + 0x38) & 1) == 0)) {
      return local_74;
    }
    if (uVar10 != 0) {
      if ((*(byte *)(iVar8 + 0x38) & 1) != 0) {
        FUN_0044e4b0(iVar7,local_34,0x32);
        FUN_0044e4b0(iVar7,local_68,0x32);
        iVar5 = FUN_0045ad60(local_34,local_68,iVar9,1);
        return iVar5 * local_74;
      }
      break;
    }
    bVar1 = *(byte *)(iVar8 + 0x38);
joined_r0x0044ebe4:
    if ((bVar1 & 1) == 0) break;
    goto LAB_0044ee29;
  case 0xd:
    iVar5 = FUN_0045ad60(param_1 + 0x10a,param_2 + 0x10a,iVar9,1);
    return iVar5 * local_74;
  case 0xe:
    iVar5 = FUN_0045ad60(param_1 + 0x20e,param_2 + 0x20e,iVar9,1);
    return iVar5 * local_74;
  case 0xf:
    iVar7 = FUN_00443780(iVar6);
    iVar8 = FUN_00443780(iVar5);
    if (iVar8 != iVar7) {
      iVar6 = FUN_00443780(iVar6);
      iVar5 = FUN_00443780(iVar5);
      return (((iVar5 <= iVar6) - 1 & 2) - 1) * local_74;
    }
    break;
  case 0x10:
    iVar7 = FUN_004437a0(iVar6);
    iVar8 = FUN_004437a0(iVar5);
    if (iVar8 != iVar7) {
      iVar6 = FUN_004437a0(iVar6);
      iVar5 = FUN_004437a0(iVar5);
      return (((iVar5 <= iVar6) - 1 & 2) - 1) * local_74;
    }
    break;
  case 0x11:
    uVar10 = *(uint *)(param_1 + 0x314);
    uVar3 = *(uint *)(param_1 + 0x318);
    uVar11 = *(uint *)(param_2 + 0x314);
    uVar4 = *(uint *)(param_2 + 0x318);
    if ((uVar10 == uVar11) && (uVar3 == uVar4)) break;
    if (uVar3 < uVar4) goto LAB_0044ee29;
    if (uVar3 != uVar4) {
      return local_74;
    }
    goto LAB_0044e8d6;
  case 0x12:
    if ((iVar7 == 0) || (iVar8 == 0)) break;
    uVar10 = *(uint *)(iVar7 + 0x7c);
    uVar11 = *(uint *)(iVar8 + 0x7c);
    uVar3 = *(uint *)(iVar7 + 0x80);
    uVar4 = *(uint *)(iVar8 + 0x80);
    if ((uVar10 == uVar11) && (uVar3 == uVar4)) break;
    if (uVar4 <= uVar3) {
      if (uVar3 != uVar4) {
        return local_74;
      }
      goto LAB_0044e8d6;
    }
    goto LAB_0044ee29;
  case 0x13:
    if (((iVar7 == 0) || (iVar8 == 0)) || (*(double *)(iVar8 + 0x70) == *(double *)(iVar7 + 0x70)))
    break;
    if (*(double *)(iVar8 + 0x70) < *(double *)(iVar7 + 0x70)) {
      return local_74;
    }
    goto LAB_0044ee29;
  case 0x14:
    if (((iVar7 == 0) || (iVar8 == 0)) || (*(double *)(iVar8 + 0x40) == *(double *)(iVar7 + 0x40)))
    break;
    if (*(double *)(iVar8 + 0x40) < *(double *)(iVar7 + 0x40)) {
      return local_74;
    }
LAB_0044ee29:
    iVar9 = -1;
  }
  return iVar9 * local_74;
}


