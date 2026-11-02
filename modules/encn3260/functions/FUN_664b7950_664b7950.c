/* Module: encn3260.dll
   Function: FUN_664b7950
   Address: 664b7950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b7950(HDC param_1)

{
  uint uVar1;
  int *piVar2;
  HDC pHVar3;
  HDC pHVar4;
  int iVar5;
  BOOL BVar6;
  uint *puVar7;
  uint local_214 [3];
  byte local_208;
  uint local_1d0;
  uint local_188;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_30;
  uint local_2c [8];
  undefined4 *local_c;
  uint local_8;
  
  pHVar3 = param_1;
  FUN_664b9350();
  if (param_1 == (HDC)0x0) {
    return 0x80004005;
  }
  if ((param_1[0x112].unused & 1) != 0) {
    return 0x80004005;
  }
  param_1[0x112].unused = 0;
  param_1[0x111].unused = 0;
  param_1[0x110].unused = 0;
  pHVar4 = param_1 + 1;
  param_1 = (HDC)0xb;
  pHVar4 = (HDC)FUN_664ba320((int)pHVar4);
  if ((10 < (int)pHVar4) || (((&DAT_664e3a80)[(int)pHVar4 * 4] & 1) == 0)) goto LAB_664b7ea1;
  if (((pHVar3[0x10e].unused & 8) == 0) || (iVar5 = FUN_664aff60(0,&local_c,0), iVar5 != 0))
  goto LAB_664b7dc4;
  iVar5 = (**(code **)*local_c)(local_c,&DAT_664ddc30,pHVar3 + 0x22b);
  if (iVar5 == 0) {
    puVar7 = local_214;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_214[0] = 0x13c;
    iVar5 = (**(code **)(*(int *)pHVar3[0x22b].unused + 0x2c))
                      ((int *)pHVar3[0x22b].unused,local_214,0);
    if (((iVar5 != 0) || ((local_214[1] & 0x2000000) != 0)) || ((local_214[1] & 0x840) == 0))
    goto LAB_664b7daa;
    BVar6 = IsWindow((HWND)pHVar3->unused);
    if (BVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = pHVar3->unused;
    }
    iVar5 = (**(code **)(*(int *)pHVar3[0x22b].unused + 0x50))((int *)pHVar3[0x22b].unused,iVar5,8);
    if (iVar5 != 0) goto LAB_664b7daa;
    local_98 = 0x6c;
    local_94 = 1;
    local_30 = 0x200;
    iVar5 = (**(code **)(*(int *)pHVar3[0x22b].unused + 0x18))
                      ((int *)pHVar3[0x22b].unused,&local_98,pHVar3 + 0x22c,0);
    if (iVar5 != 0) goto LAB_664b7daa;
    puVar7 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_2c[0] = 0x20;
    local_2c[1] = 0x44;
    iVar5 = (**(code **)(*(int *)pHVar3[0x22c].unused + 0x54))((int *)pHVar3[0x22c].unused,local_2c)
    ;
    if (((iVar5 != 0) || (param_1 = (HDC)FUN_664ba460(local_2c), (int)param_1 < 5)) ||
       (9 < (int)param_1)) {
LAB_664b7d7b:
      (**(code **)(*(int *)pHVar3[0x22c].unused + 8))((int *)pHVar3[0x22c].unused);
      if ((pHVar3[0x112].unused & 0x80) != 0) {
        (**(code **)(*(int *)pHVar3[0x22f].unused + 8))((int *)pHVar3[0x22f].unused);
        pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffff7f;
      }
      goto LAB_664b7daa;
    }
    if (((local_214[1] & 0x800) != 0) && (DAT_664f1d50 == 0)) {
      DAT_664f1d50 = local_1d0;
    }
    if ((DAT_664f1d34 == (undefined4 *)0x0) || (iVar5 = FUN_664b94d0(), iVar5 != 0)) {
      DAT_664f1d34 = FUN_664b94e0((undefined4 *)pHVar3[0x22b].unused);
    }
    uVar1 = DAT_664f1d34[(int)((int)&param_1[7].unused + 2)];
    local_8 = DAT_664f1d34[(int)((int)&param_1[8].unused + 3)];
    if (local_8 == 0 && uVar1 == 0) goto LAB_664b7d7b;
    if (((&DAT_664e3a80)[(int)param_1 * 4] & 0x10) != 0) {
      iVar5 = FUN_664b78e0((int)pHVar3);
      if (iVar5 != 0) goto LAB_664b7d7b;
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x80;
    }
    if (((((pHVar3[0x10e].unused & 0x20U) != 0) && ((local_214[1] & 0x800) != 0)) &&
        ((DAT_664f1d50 == 0 || (DAT_664f1d54 < DAT_664f1d50)))) && (uVar1 != 0)) {
      if ((((pHVar3[0x10e].unused & 0x10U) != 0) && ((local_214[1] & 0x4000) != 0)) &&
         ((local_188 == 0 || (1999 < local_188)))) {
        pHVar3[0x112].unused = pHVar3[0x112].unused | 0x10;
      }
      if ((((&DAT_664e3a80)[(int)pHVar4 * 4] & 2) == 0) &&
         ((iVar5 = FUN_664b8010(pHVar3,(int)pHVar4,0xb,uVar1,FUN_664b83f0), iVar5 != 0 ||
          (iVar5 = FUN_664b8010(pHVar3,(int)pHVar4,(int)param_1,uVar1,FUN_664b8300), iVar5 != 0))))
      {
        if (((pHVar3[0x10e].unused & 0x40) != 0) &&
           (((local_208 & 0x10) != 0 && (iVar5 = FUN_664b8450(pHVar3,4), iVar5 == 0)))) {
          pHVar3[0x112].unused = pHVar3[0x112].unused | 0x69;
          DAT_664f1d54 = DAT_664f1d54 + 1;
          goto LAB_664b7dc4;
        }
        (**(code **)(*(int *)pHVar3[0x22d].unused + 8))((int *)pHVar3[0x22d].unused);
      }
      pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffffef;
    }
    if (((local_214[1] & 0x40) == 0) || (local_8 == 0)) goto LAB_664b7d7b;
    if (((pHVar3[0x10e].unused & 0x10) != 0) && ((local_214[1] & 0x200) != 0)) {
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x10;
    }
    if (((((&DAT_664e3a80)[(int)pHVar4 * 4] & 2) != 0) ||
        (((((&DAT_664e3a80)[(int)param_1 * 4] & 0x10) != 0 ||
          (iVar5 = FUN_664b8010(pHVar3,(int)pHVar4,0xb,local_8,FUN_664b8430), iVar5 == 0)) &&
         (iVar5 = FUN_664b7fd0(pHVar3,pHVar4,param_1,FUN_664b8410), iVar5 == 0)))) &&
       (iVar5 = FUN_664b7fd0(pHVar3,pHVar4,param_1,FUN_664b8410), iVar5 == 0)) {
LAB_664b7d6d:
      pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffffef;
      goto LAB_664b7d7b;
    }
    iVar5 = FUN_664b85b0(pHVar3);
    if (iVar5 == 0) {
      pHVar3[0x112].unused = pHVar3[0x112].unused | 9;
    }
    else {
      if (((local_208 & 1) == 0) || (iVar5 = FUN_664b8450(pHVar3,2), iVar5 != 0)) {
        (**(code **)(*(int *)pHVar3[0x22d].unused + 8))((int *)pHVar3[0x22d].unused);
        goto LAB_664b7d6d;
      }
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x49;
    }
  }
  else {
LAB_664b7daa:
    piVar2 = (int *)pHVar3[0x22b].unused;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      pHVar3[0x22b].unused = 0;
    }
  }
LAB_664b7dc4:
  if ((pHVar3[0x10e].unused & 0x100U) != 0) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 0x100;
  }
  if ((pHVar3[0x112].unused & 0x40U) != 0) {
    pHVar3[0x111].unused = 1;
  }
  if ((pHVar3[0x10f].unused != 0) && ((pHVar3[0x112].unused & 0x10U) != 0)) {
    pHVar3[0x10f].unused = 0;
  }
  pHVar3[0x113].unused = 0;
  pHVar3[0x114].unused = 0;
  if (((param_1 == (HDC)0xb) && (BVar6 = IsWindow((HWND)pHVar3->unused), BVar6 != 0)) &&
     (iVar5 = FUN_664b7f30(pHVar3), iVar5 == 0)) {
    param_1 = (HDC)FUN_664ba320((int)(pHVar3 + 0x11e));
  }
  if (((((pHVar3[0x10e].unused & 2) != 0) && (param_1 != (HDC)0xb)) && (pHVar4 != param_1)) &&
     (((((&DAT_664e3a80)[(int)pHVar4 * 4] & 2) == 0 &&
       (iVar5 = FUN_664b8010(pHVar3,(int)pHVar4,(int)param_1,0xffffffff,FUN_664b82e0), iVar5 != 0))
      || (iVar5 = FUN_664b7fd0(pHVar3,pHVar4,param_1,FUN_664b82e0), iVar5 != 0)))) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 3;
    return 0;
  }
LAB_664b7ea1:
  if ((((pHVar3[0x10e].unused & 4) != 0) && (((&DAT_664e3a80)[(int)pHVar4 * 4] & 2) == 0)) &&
     (iVar5 = FUN_664b80b0(pHVar3,(int)pHVar4,0,6), iVar5 != 0)) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 5;
    return 0;
  }
  iVar5 = FUN_664b80b0(pHVar3,(int)pHVar4,0,5);
  if (iVar5 != 0) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 1;
    return 0;
  }
  if ((pHVar3[0x112].unused & 1) == 0) {
    return 0x80004005;
  }
  return 0;
}


