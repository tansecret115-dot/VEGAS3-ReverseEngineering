/* Module: sfppack1.dll
   Function: FUN_5cdc8c30
   Address: 5cdc8c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cdc8c30(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piStack_d0;
  undefined1 **ppuStack_cc;
  int *piStack_c8;
  int **ppiStack_c4;
  int *piStack_c0;
  undefined1 **ppuStack_bc;
  int *piStack_b8;
  int **ppiStack_b4;
  int *piStack_b0;
  undefined1 **ppuStack_ac;
  int *piStack_a8;
  int **ppiStack_a4;
  int *piStack_a0;
  int ***pppiStack_9c;
  int *piStack_98;
  undefined1 *puStack_94;
  int *piStack_90;
  undefined1 *puStack_8c;
  int *piStack_88;
  undefined1 *puStack_84;
  int *piStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  int **ppiStack_64;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  piVar1 = param_1;
  ppiStack_64 = &param_1;
  piStack_68 = param_1;
  local_48 = 0;
  local_44 = 0;
  puStack_6c = (undefined1 *)0x5cdc8c56;
  (**(code **)(*param_1 + 0x5c))();
  puStack_6c = &stack0xffffffac;
  piStack_70 = piVar1;
  puStack_74 = (undefined1 *)0x5cdc8c61;
  (**(code **)(*piVar1 + 0x44))();
  puStack_74 = auStack_50;
  piStack_78 = piVar1;
  puStack_7c = (undefined1 *)0x5cdc8c6c;
  (**(code **)(*piVar1 + 0x74))();
  puStack_7c = &stack0xffffffac;
  piStack_80 = piVar1;
  puStack_84 = (undefined1 *)0x5cdc8c77;
  (**(code **)(*piVar1 + 0x7c))();
  puStack_84 = &stack0xffffffa8;
  piStack_88 = piVar1;
  puStack_8c = (undefined1 *)0x5cdc8c85;
  (**(code **)(*piVar1 + 0x84))();
  puStack_8c = &stack0xffffffa4;
  piStack_90 = piVar1;
  puStack_94 = (undefined1 *)0x5cdc8c93;
  (**(code **)(*piVar1 + 0x8c))();
  puStack_94 = &stack0xffffffa0;
  piStack_98 = piVar1;
  pppiStack_9c = (int ***)0x5cdc8ca1;
  (**(code **)(*piVar1 + 0x94))();
  pppiStack_9c = &ppiStack_64;
  piStack_a0 = piVar1;
  ppiStack_a4 = (int **)0x5cdc8caf;
  (**(code **)(*piVar1 + 0x9c))();
  ppiStack_a4 = &piStack_68;
  piStack_a8 = piVar1;
  ppuStack_ac = (undefined1 **)0x5cdc8cbd;
  (**(code **)(*piVar1 + 0xa4))();
  ppuStack_ac = &puStack_6c;
  piStack_b0 = piVar1;
  ppiStack_b4 = (int **)0x5cdc8ccb;
  (**(code **)(*piVar1 + 0xac))();
  ppiStack_b4 = &piStack_70;
  piStack_b8 = piVar1;
  ppuStack_bc = (undefined1 **)0x5cdc8cd9;
  (**(code **)(*piVar1 + 0xb4))();
  ppuStack_bc = &puStack_74;
  piStack_c0 = piVar1;
  ppiStack_c4 = (int **)0x5cdc8ce7;
  (**(code **)(*piVar1 + 0xbc))();
  ppiStack_c4 = &piStack_78;
  piStack_c8 = piVar1;
  ppuStack_cc = (undefined1 **)0x5cdc8cf5;
  (**(code **)(*piVar1 + 0xc4))();
  ppuStack_cc = &puStack_7c;
  piStack_d0 = piVar1;
  (**(code **)(*piVar1 + 0xcc))();
  (**(code **)(*piVar1 + 0xd4))();
  (**(code **)(*piVar1 + 0xdc))(piVar1,&puStack_84);
  (**(code **)(*piVar1 + 0xe4))(piVar1,&piStack_88);
  (**(code **)(*piVar1 + 0xec))(piVar1,&puStack_8c);
  puVar2 = puStack_84;
  piVar1 = piStack_88;
  puVar6 = puStack_8c;
  piVar8 = piStack_88;
  for (uVar3 = (int)puStack_84 * 4 + 4U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar8 = 0;
    piVar8 = (int *)((int)piVar8 + 1);
  }
  *piStack_88 = 10000;
  puVar5 = puStack_8c;
  if (0 < (int)puStack_8c) {
    do {
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined1 *)0x0);
  }
  iVar4 = ftol();
  piStack_88 = (int *)0x1;
  piVar8 = piVar1;
  if (0 < (int)puVar2) {
    do {
      piVar8 = piVar8 + 1;
      iVar7 = 0;
      iVar9 = 0;
      if (0 < (int)puVar6) {
        do {
          if (-1 < (int)piStack_88 - (int)(&piStack_b0)[iVar9]) {
            iVar7 = iVar7 + (piVar1[(int)piStack_88 - (int)(&piStack_b0)[iVar9]] *
                            (int)(&piStack_d0)[iVar9]) / 100;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)puVar6);
      }
      iVar7 = (iVar7 * iVar4) / 10000;
      if (iVar7 < -10000) {
        iVar7 = -10000;
      }
      else if (10000 < iVar7) {
        iVar7 = 10000;
      }
      piStack_88 = (int *)((int)piStack_88 + 1);
      *piVar8 = iVar7;
      puVar6 = puStack_8c;
    } while ((int)piStack_88 <= (int)puStack_84);
  }
  return 1;
}


