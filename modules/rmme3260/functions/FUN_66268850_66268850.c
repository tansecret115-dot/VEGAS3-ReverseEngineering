/* Module: rmme3260.dll
   Function: FUN_66268850
   Address: 66268850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66268850(undefined1 *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  ushort uVar7;
  undefined3 uVar8;
  int3 iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  int iVar14;
  
  piVar6 = param_3;
  puVar10 = param_1;
  if (*(int *)(param_1 + 0x14) == 0) {
    return -0x7fffbffb;
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))(param_3,&param_1,&param_3);
  }
  *(int *)(puVar10 + 0x38) = *(int *)(puVar10 + 0x38) + (int)param_3;
  if ((((*(int *)(puVar10 + 0x358) == 0xc) && (piVar6 != (int *)0x0)) &&
      (piVar5 = *(int **)(puVar10 + 8), piVar5 < param_3)) && ((int)param_3 - (int)piVar5 == 1)) {
    (**(code **)(*piVar6 + 0x14))(piVar6,piVar5);
  }
  iVar14 = param_2;
  iVar12 = *(int *)(puVar10 + 0x3c);
  if (((iVar12 == 0x52494646) || (iVar12 == 0x464f524d)) && ((puVar10[0x38] & 1) != 0)) {
    *(int *)(puVar10 + 0x38) = *(int *)(puVar10 + 0x38) + 1;
  }
  switch(*(undefined4 *)(puVar10 + 0x358)) {
  case 2:
    if ((param_3 != (int *)0x8) || (param_2 != 0)) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 8))(*(int **)(puVar10 + 0x14),0x80004005,0);
      return -0x7ffbfff7;
    }
    if (CONCAT22(CONCAT11(*param_1,param_1[1]),CONCAT11(param_1[2],param_1[3])) ==
        *(int *)(puVar10 + 0x24)) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      if (*(int *)(puVar10 + 0x2c) == 0) {
        uVar8 = CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]);
        uVar1 = param_1[7];
      }
      else {
        uVar8 = *(undefined3 *)(param_1 + 5);
        uVar1 = param_1[4];
      }
      *(int *)(puVar10 + 0x28) = CONCAT31(uVar8,uVar1);
      if ((iVar12 == 0x52494646) && ((puVar10[0x28] & 1) != 0)) {
        *(int *)(puVar10 + 0x28) = CONCAT31(uVar8,uVar1) + 1;
      }
      *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) =
           *(int *)(puVar10 + 0x38) + *(int *)(puVar10 + 0x28);
      *(undefined4 *)(puVar10 + 0x34c) = *(undefined4 *)(puVar10 + 0x38);
      *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) =
           *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) - *(int *)(puVar10 + 0x354);
      *(int *)(puVar10 + 0x44) = *(int *)(puVar10 + 0x24);
      if (*(int *)(puVar10 + 0x24) == 0x4c495354) {
        *(undefined4 *)(puVar10 + 0x358) = 9;
        (**(code **)(**(int **)(puVar10 + 0x10) + 0x18))(*(int **)(puVar10 + 0x10),4);
        return 0;
      }
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 8))
                (*(int **)(puVar10 + 0x14),0,*(int *)(puVar10 + 0x28) - *(int *)(puVar10 + 0x354));
      return 0;
    }
    *(undefined4 *)(puVar10 + 0x358) = 4;
    if (*(int *)(puVar10 + 0x2c) == 0) {
      uVar8 = CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]);
      uVar1 = param_1[7];
    }
    else {
      uVar8 = *(undefined3 *)(param_1 + 5);
      uVar1 = param_1[4];
    }
    iVar14 = *(int *)(puVar10 + 0x38);
    iVar11 = CONCAT31(uVar8,uVar1) + iVar14;
    *(int *)(puVar10 + 0x34) = iVar11;
    if (iVar11 == iVar14) {
      if (iVar12 != 0x52494646) {
        if (iVar12 != 0x464f524d) {
          (**(code **)(**(int **)(puVar10 + 0x14) + 8))(*(int **)(puVar10 + 0x14),0x80004005,0);
          return 0;
        }
        goto LAB_66268c85;
      }
    }
    else {
LAB_66268c85:
      if ((iVar12 != 0x52494646) && (iVar12 != 0x464f524d)) goto LAB_66268c9f;
    }
    if ((puVar10[0x34] & 1) != 0) {
      *(int *)(puVar10 + 0x34) = iVar11 + 1;
    }
LAB_66268c9f:
    iVar12 = *(int *)(puVar10 + 0x34) - *(int *)(puVar10 + 0x354);
    *(int *)(puVar10 + 0x34) = iVar12;
    if (iVar12 == iVar14) {
      *(undefined4 *)(puVar10 + 0x358) = 2;
      iVar12 = (**(code **)(**(int **)(puVar10 + 0x10) + 0x18))(*(int **)(puVar10 + 0x10),8);
      return iVar12;
    }
    *(undefined4 *)(puVar10 + 0x358) = 4;
    iVar12 = (**(code **)(**(int **)(puVar10 + 0x10) + 0x20))(*(int **)(puVar10 + 0x10),iVar12,0);
    return iVar12;
  default:
    iVar12 = -0x7ffbfff7;
    break;
  case 5:
    if (param_3 != (int *)0x8) {
LAB_66268a60:
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)**(undefined4 **)(puVar10 + 0x14))(*(undefined4 **)(puVar10 + 0x14),0x80004005);
      return -0x7ffbfff7;
    }
    uVar13 = CONCAT11(*param_1,param_1[1]);
    if (CONCAT22(uVar13,CONCAT11(param_1[2],param_1[3])) == 0x52494646) {
      *(undefined4 *)(puVar10 + 0x358) = 7;
      *(undefined4 *)(puVar10 + 0x3c) = 0x52494646;
      *(undefined4 *)(puVar10 + 0x2c) = 1;
      iVar12 = *(int *)(param_1 + 4);
      *(undefined4 *)(puVar10 + 0x354) = 0;
      *(int *)(puVar10 + 0x28) = iVar12;
      *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) = iVar12 + *(int *)(puVar10 + 0x38);
      (**(code **)(**(int **)(puVar10 + 0x10) + 0x18))(*(int **)(puVar10 + 0x10),4);
      return param_2;
    }
    if (CONCAT22(uVar13,CONCAT11(param_1[2],param_1[3])) == 0x464f524d) {
      *(undefined4 *)(puVar10 + 0x358) = 7;
      *(undefined4 *)(puVar10 + 0x3c) = 0x464f524d;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      iVar12 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
      *(undefined4 *)(puVar10 + 0x354) = 0;
      *(int *)(puVar10 + 0x28) = iVar12;
      *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) = iVar12 + *(int *)(puVar10 + 0x38);
      *(undefined4 *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x4c) = 0xc;
      (**(code **)(**(int **)(puVar10 + 0x10) + 0x18))(*(int **)(puVar10 + 0x10),4);
      return param_2;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    *(undefined4 *)(puVar10 + 0x2c) = 0;
    *(uint *)(puVar10 + 0x3c) = CONCAT22(uVar13,CONCAT11(uVar1,uVar2));
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    uVar3 = param_1[6];
    uVar4 = param_1[7];
    *(undefined4 *)(puVar10 + 0x354) = 8;
    iVar12 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
    *(int *)(puVar10 + 0x28) = iVar12;
    *(int *)(puVar10 + *(int *)(puVar10 + 0x30) * 0xc + 0x50) =
         iVar12 + -8 + *(int *)(puVar10 + 0x38);
    *(undefined4 *)(puVar10 + 0x358) = 0;
    iVar12 = (**(code **)**(undefined4 **)(puVar10 + 0x14))
                       (*(undefined4 **)(puVar10 + 0x14),param_2);
    if (iVar14 != 0) {
      return iVar14;
    }
    break;
  case 7:
    if (param_3 != (int *)0x4) goto LAB_66268a60;
    if (*(int *)(puVar10 + 0x2c) == 0) {
      uVar8 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
      uVar1 = param_1[3];
    }
    else {
      uVar8 = *(undefined3 *)(param_1 + 1);
      uVar1 = *param_1;
    }
    *(undefined4 *)(puVar10 + 0x358) = 0;
    *(uint *)(puVar10 + 0x40) = CONCAT31(uVar8,uVar1);
    iVar12 = (**(code **)**(undefined4 **)(puVar10 + 0x14))
                       (*(undefined4 **)(puVar10 + 0x14),param_2);
    if (iVar14 != 0) {
      return iVar14;
    }
    break;
  case 8:
    *(undefined4 *)(puVar10 + 0x358) = 0;
    iVar12 = (**(code **)(**(int **)(puVar10 + 0x14) + 0x14))
                       (*(int **)(puVar10 + 0x14),param_2,piVar6);
    return iVar12;
  case 9:
    if (param_3 != (int *)0x4) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 8))(*(int **)(puVar10 + 0x14),0x80004005,0);
      return -0x7ffbfff7;
    }
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = *param_1;
    uVar4 = param_1[3];
    *(undefined4 *)(puVar10 + 0x358) = 0;
    *(uint *)(puVar10 + 0x48) = CONCAT22(CONCAT11(uVar3,uVar1),CONCAT11(uVar2,uVar4));
    (**(code **)(**(int **)(puVar10 + 0x14) + 8))
              (*(int **)(puVar10 + 0x14),param_2,*(undefined4 *)(puVar10 + 0x28));
    return 0;
  case 0xb:
    if (param_2 != 0) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 0x1c))(*(int **)(puVar10 + 0x14),0x80004005,0,0);
      return 0;
    }
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = *param_1;
    uVar4 = param_1[3];
    *(undefined4 *)(puVar10 + 0x358) = 0xc;
    *(uint *)(puVar10 + 0x350) = CONCAT22(CONCAT11(uVar3,uVar1),CONCAT11(uVar2,uVar4));
    if (*(int *)(puVar10 + 0x2c) == 0) {
      uVar8 = CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]);
      uVar1 = param_1[7];
    }
    else {
      uVar8 = *(undefined3 *)(param_1 + 5);
      uVar1 = param_1[4];
    }
    iVar14 = CONCAT31(uVar8,uVar1);
    if ((iVar12 == 0x52494646) && (*(int *)(puVar10 + 0x350) == 0)) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 0x1c))(*(int **)(puVar10 + 0x14),0x80004005,0,0);
      return 0;
    }
    if (iVar14 == 0) {
      *(undefined4 *)(puVar10 + 0x358) = 0;
      (**(code **)(**(int **)(puVar10 + 0x14) + 0x1c))
                (*(int **)(puVar10 + 0x14),0,*(undefined4 *)(puVar10 + 0x350),0);
      return 0;
    }
    if ((iVar12 != 0x52494646) && (iVar12 != 0x464f524d)) {
      *(int *)(puVar10 + 8) = iVar14;
      iVar12 = (**(code **)(**(int **)(puVar10 + 0x10) + 0x18))(*(int **)(puVar10 + 0x10),iVar14);
      return iVar12;
    }
    if (*(int *)(puVar10 + 0x2c) == 0) {
      iVar9 = (uint3)CONCAT11(param_1[4],param_1[5]) << 8;
      uVar1 = param_1[7];
    }
    else {
      iVar9 = *(int3 *)(param_1 + 5);
      uVar1 = param_1[4];
    }
    *(int *)(puVar10 + 8) = iVar14;
    piVar6 = *(int **)(puVar10 + 0x10);
    uVar7 = (ushort)(iVar9 >> 0x17);
    if ((((ushort)CONCAT31(iVar9,uVar1) ^ uVar7) - uVar7 & 1 ^ uVar7) != uVar7) {
      iVar12 = (**(code **)(*piVar6 + 0x18))(piVar6,iVar14 + 1);
      return iVar12;
    }
    iVar12 = (**(code **)(*piVar6 + 0x18))(piVar6,iVar14);
    return iVar12;
  case 0xc:
    *(undefined4 *)(puVar10 + 0x358) = 0;
    (**(code **)(**(int **)(puVar10 + 0x14) + 0x1c))
              (*(int **)(puVar10 + 0x14),param_2,*(undefined4 *)(puVar10 + 0x350),piVar6);
    return 0;
  }
  return iVar12;
}


