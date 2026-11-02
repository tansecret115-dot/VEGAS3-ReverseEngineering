/* Module: g2plug.dll
   Function: FUN_5f80b410
   Address: 5f80b410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80b410(int *param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint unaff_ESI;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  int *piStack_6c;
  undefined *puStack_68;
  int **ppiStack_64;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  int *piStack_8;
  
  puVar2 = param_3;
  piVar1 = param_1;
  *param_3 = 0;
  param_3[1] = 0;
  if (DAT_5f87749c == (int *)0x0) {
    return 0x80004005;
  }
  if (param_1[1] != 100) {
    return 0x80070057;
  }
  if (*param_1 != 0x10) {
    return 0x80070057;
  }
  ppiStack_64 = &param_1;
  puStack_68 = &DAT_5f86a4c0;
  piStack_6c = DAT_5f87749c;
  iVar3 = (**(code **)*DAT_5f87749c)();
  if (iVar3 != 0) {
    return 0x80004002;
  }
  iVar3 = (**(code **)(*piStack_8 + 0xc))(piStack_8,&DAT_5f86a4b0,0,&DAT_5f86a4a0);
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 8))(piStack_1c);
  }
  if (iVar3 != 0) {
    return 0x80004002;
  }
  iVar3 = *piVar1;
  puVar7 = (uint *)((int)piVar1 + iVar3);
  if (iStack_18 < iVar3) {
    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))(piStack_14);
    }
    return 0x80070057;
  }
  puStack_68 = (undefined *)0x0;
  piVar10 = (int *)register0x00000010;
  while( true ) {
    if ((int)ppiStack_64[2] <= (int)puStack_68) {
      if (piStack_14 != (int *)0x0) {
        (**(code **)(*piStack_14 + 8))(piStack_14);
      }
      return 0;
    }
    uVar6 = *puVar7;
    if (iStack_18 < (int)(uVar6 + iVar3)) break;
    puVar8 = puVar7;
    puVar9 = (uint *)&stack0xffffffa8;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar7 = (uint *)((int)puVar7 + uVar6);
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar9 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(*piStack_14 + 0x14))(piStack_14,uStack_40,uStack_3c,&piStack_6c);
      if (iVar4 == 0) {
        iVar4 = (**(code **)*piStack_6c)(piStack_6c,&DAT_5f86a480,&stack0xffffff90);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*piVar10 + 0xc))(piVar10,&stack0xffffffa4);
          if (iVar4 == 0) {
            if (((int)puVar2[1] < 1) && (((int)puVar2[1] < 0 || (*puVar2 < unaff_ESI)))) {
              *puVar2 = unaff_ESI;
              puVar2[1] = 0;
            }
          }
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 8))(piVar10);
            piVar10 = (int *)0x0;
          }
        }
        if (piStack_6c != (int *)0x0) {
          (**(code **)(*piStack_6c + 8))(piStack_6c);
          piStack_6c = (int *)0x0;
        }
      }
    }
    puStack_68 = (undefined *)((int)puStack_68 + 1);
  }
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  return 0x80070057;
}


