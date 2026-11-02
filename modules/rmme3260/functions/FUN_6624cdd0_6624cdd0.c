/* Module: rmme3260.dll
   Function: FUN_6624cdd0
   Address: 6624cdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624cdd0(HDC param_1)

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
  FUN_6624e7d0();
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
  pHVar4 = (HDC)FUN_6624f7a0((int)pHVar4);
  if ((10 < (int)pHVar4) || (((&DAT_66270568)[(int)pHVar4 * 4] & 1) == 0)) goto LAB_6624d321;
  if (((pHVar3[0x10e].unused & 8) == 0) || (iVar5 = FUN_662453b0(0,&local_c,0), iVar5 != 0))
  goto LAB_6624d244;
  iVar5 = (**(code **)*local_c)(local_c,&DAT_6626af88,pHVar3 + 0x22b);
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
    goto LAB_6624d22a;
    BVar6 = IsWindow((HWND)pHVar3->unused);
    if (BVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = pHVar3->unused;
    }
    iVar5 = (**(code **)(*(int *)pHVar3[0x22b].unused + 0x50))((int *)pHVar3[0x22b].unused,iVar5,8);
    if (iVar5 != 0) goto LAB_6624d22a;
    local_98 = 0x6c;
    local_94 = 1;
    local_30 = 0x200;
    iVar5 = (**(code **)(*(int *)pHVar3[0x22b].unused + 0x18))
                      ((int *)pHVar3[0x22b].unused,&local_98,pHVar3 + 0x22c,0);
    if (iVar5 != 0) goto LAB_6624d22a;
    puVar7 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_2c[0] = 0x20;
    local_2c[1] = 0x44;
    iVar5 = (**(code **)(*(int *)pHVar3[0x22c].unused + 0x54))((int *)pHVar3[0x22c].unused,local_2c)
    ;
    if (((iVar5 != 0) || (param_1 = (HDC)FUN_6624f8e0(local_2c), (int)param_1 < 5)) ||
       (9 < (int)param_1)) {
LAB_6624d1fb:
      (**(code **)(*(int *)pHVar3[0x22c].unused + 8))((int *)pHVar3[0x22c].unused);
      if ((pHVar3[0x112].unused & 0x80) != 0) {
        (**(code **)(*(int *)pHVar3[0x22f].unused + 8))((int *)pHVar3[0x22f].unused);
        pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffff7f;
      }
      goto LAB_6624d22a;
    }
    if (((local_214[1] & 0x800) != 0) && (DAT_6627e558 == 0)) {
      DAT_6627e558 = local_1d0;
    }
    if ((DAT_6627e53c == (undefined4 *)0x0) || (iVar5 = FUN_6624e950(), iVar5 != 0)) {
      DAT_6627e53c = FUN_6624e960((undefined4 *)pHVar3[0x22b].unused);
    }
    uVar1 = DAT_6627e53c[(int)((int)&param_1[7].unused + 2)];
    local_8 = DAT_6627e53c[(int)((int)&param_1[8].unused + 3)];
    if (local_8 == 0 && uVar1 == 0) goto LAB_6624d1fb;
    if (((&DAT_66270568)[(int)param_1 * 4] & 0x10) != 0) {
      iVar5 = FUN_6624cd60((int)pHVar3);
      if (iVar5 != 0) goto LAB_6624d1fb;
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x80;
    }
    if (((((pHVar3[0x10e].unused & 0x20U) != 0) && ((local_214[1] & 0x800) != 0)) &&
        ((DAT_6627e558 == 0 || (DAT_6627e55c < DAT_6627e558)))) && (uVar1 != 0)) {
      if ((((pHVar3[0x10e].unused & 0x10U) != 0) && ((local_214[1] & 0x4000) != 0)) &&
         ((local_188 == 0 || (1999 < local_188)))) {
        pHVar3[0x112].unused = pHVar3[0x112].unused | 0x10;
      }
      if ((((&DAT_66270568)[(int)pHVar4 * 4] & 2) == 0) &&
         ((iVar5 = FUN_6624d490(pHVar3,(int)pHVar4,0xb,uVar1,FUN_6624d870), iVar5 != 0 ||
          (iVar5 = FUN_6624d490(pHVar3,(int)pHVar4,(int)param_1,uVar1,FUN_6624d780), iVar5 != 0))))
      {
        if (((pHVar3[0x10e].unused & 0x40) != 0) &&
           (((local_208 & 0x10) != 0 && (iVar5 = FUN_6624d8d0(pHVar3,4), iVar5 == 0)))) {
          pHVar3[0x112].unused = pHVar3[0x112].unused | 0x69;
          DAT_6627e55c = DAT_6627e55c + 1;
          goto LAB_6624d244;
        }
        (**(code **)(*(int *)pHVar3[0x22d].unused + 8))((int *)pHVar3[0x22d].unused);
      }
      pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffffef;
    }
    if (((local_214[1] & 0x40) == 0) || (local_8 == 0)) goto LAB_6624d1fb;
    if (((pHVar3[0x10e].unused & 0x10) != 0) && ((local_214[1] & 0x200) != 0)) {
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x10;
    }
    if (((((&DAT_66270568)[(int)pHVar4 * 4] & 2) != 0) ||
        (((((&DAT_66270568)[(int)param_1 * 4] & 0x10) != 0 ||
          (iVar5 = FUN_6624d490(pHVar3,(int)pHVar4,0xb,local_8,FUN_6624d8b0), iVar5 == 0)) &&
         (iVar5 = FUN_6624d450(pHVar3,pHVar4,param_1,FUN_6624d890), iVar5 == 0)))) &&
       (iVar5 = FUN_6624d450(pHVar3,pHVar4,param_1,FUN_6624d890), iVar5 == 0)) {
LAB_6624d1ed:
      pHVar3[0x112].unused = pHVar3[0x112].unused & 0xffffffef;
      goto LAB_6624d1fb;
    }
    iVar5 = FUN_6624da30(pHVar3);
    if (iVar5 == 0) {
      pHVar3[0x112].unused = pHVar3[0x112].unused | 9;
    }
    else {
      if (((local_208 & 1) == 0) || (iVar5 = FUN_6624d8d0(pHVar3,2), iVar5 != 0)) {
        (**(code **)(*(int *)pHVar3[0x22d].unused + 8))((int *)pHVar3[0x22d].unused);
        goto LAB_6624d1ed;
      }
      pHVar3[0x112].unused = pHVar3[0x112].unused | 0x49;
    }
  }
  else {
LAB_6624d22a:
    piVar2 = (int *)pHVar3[0x22b].unused;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      pHVar3[0x22b].unused = 0;
    }
  }
LAB_6624d244:
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
     (iVar5 = FUN_6624d3b0(pHVar3), iVar5 == 0)) {
    param_1 = (HDC)FUN_6624f7a0((int)(pHVar3 + 0x11e));
  }
  if (((((pHVar3[0x10e].unused & 2) != 0) && (param_1 != (HDC)0xb)) && (pHVar4 != param_1)) &&
     (((((&DAT_66270568)[(int)pHVar4 * 4] & 2) == 0 &&
       (iVar5 = FUN_6624d490(pHVar3,(int)pHVar4,(int)param_1,0xffffffff,FUN_6624d760), iVar5 != 0))
      || (iVar5 = FUN_6624d450(pHVar3,pHVar4,param_1,FUN_6624d760), iVar5 != 0)))) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 3;
    return 0;
  }
LAB_6624d321:
  if ((((pHVar3[0x10e].unused & 4) != 0) && (((&DAT_66270568)[(int)pHVar4 * 4] & 2) == 0)) &&
     (iVar5 = FUN_6624d530(pHVar3,(int)pHVar4,0,6), iVar5 != 0)) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 5;
    return 0;
  }
  iVar5 = FUN_6624d530(pHVar3,(int)pHVar4,0,5);
  if (iVar5 != 0) {
    pHVar3[0x112].unused = pHVar3[0x112].unused | 1;
    return 0;
  }
  if ((pHVar3[0x112].unused & 1) == 0) {
    return 0x80004005;
  }
  return 0;
}


