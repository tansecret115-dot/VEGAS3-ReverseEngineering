/* Module: wmfplug2.dll
   Function: FUN_004060a0
   Address: 004060a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004060a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  HANDLE pvVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 extraout_var;
  int **unaff_EBP;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  int *piVar17;
  int *piStack_880;
  int *piStack_87c;
  int *piStack_878;
  int *piStack_874;
  int *piStack_870;
  int **ppiVar18;
  int **ppiVar19;
  undefined1 auStack_850 [4];
  int iStack_84c;
  int **local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  int *piStack_83c;
  int iStack_838;
  int *piStack_834;
  int iStack_830;
  int aiStack_82c [2];
  undefined4 uStack_824;
  undefined4 uStack_81c;
  int aiStack_810 [17];
  undefined4 uStack_7cc;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piStack_870 = (int *)0x4060c3;
    pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x10) = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      return -0x7fffbffb;
    }
  }
  if (*(LPCVOID *)(param_1 + 0x30) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalFree(pvVar4);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x34) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34));
    GlobalFree(pvVar4);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x40) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40));
    GlobalFree(pvVar4);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  ppiVar19 = (int **)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 0x194) = param_5;
  local_848 = ppiVar19;
  if (*ppiVar19 == (int *)0x0) {
    piStack_870 = (int *)0x406191;
    iVar5 = WMCreateSyncReader();
    if (iVar5 < 0) {
      return iVar5;
    }
  }
  iVar5 = (**(code **)(**ppiVar19 + 0xc))();
  if (iVar5 < 0) {
    iVar9 = -0x7ffb1ff9;
    if (iVar5 == -0x3ff2ffd5) {
      iVar9 = -0x7ffb1fcc;
    }
    return iVar9;
  }
  piStack_870 = *ppiVar19;
  ppiVar18 = &piStack_834;
  uStack_824 = 0x800;
  piStack_874 = (int *)0x4061e2;
  (**(code **)(*piStack_870 + 0x38))();
  piVar6 = (int *)0x0;
  if (piStack_83c != (int *)0x0) {
    do {
      piStack_87c = *ppiVar19;
      piStack_874 = (int *)&stack0xfffff7a0;
      piStack_880 = (int *)0x406204;
      piStack_878 = piVar6;
      iVar5 = (**(code **)(*piStack_87c + 0x3c))();
      if (iVar5 < 0) {
        piStack_880 = *ppiVar19;
        (**(code **)(*piStack_880 + 0x10))();
        return iVar5;
      }
      piStack_880 = &iStack_838;
      iVar5 = (*(code *)(*ppiVar18)[4])();
      if (iVar5 < 0) {
        (**(code **)(*piStack_878 + 8))();
        (**(code **)(**ppiVar19 + 0x10))();
        return iVar5;
      }
      (**(code **)(*piStack_878 + 8))();
      iVar5 = 4;
      bVar13 = true;
      piVar7 = aiStack_810;
      piVar11 = &DAT_0047b640;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar13 = *piVar7 == *piVar11;
        piVar7 = piVar7 + 1;
        piVar11 = piVar11 + 1;
      } while (bVar13);
      ppiVar19 = unaff_EBP;
      if (bVar13) {
        if (&stack0x00000000 != (undefined1 *)0x810) {
          iVar5 = 4;
          bVar13 = true;
          piVar6 = aiStack_810;
          piVar7 = &DAT_0047b640;
          goto code_r0x004062a9;
        }
        break;
      }
      piVar6 = (int *)((int)piVar6 + 1);
    } while (piVar6 < piStack_83c);
  }
LAB_00406734:
  piStack_874 = *ppiVar19;
  piStack_878 = (int *)0x40673c;
  (**(code **)(*piStack_874 + 0x10))();
  return -0x7fff0001;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar13 = *piVar6 == *piVar7;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
    if (!bVar13) break;
code_r0x004062a9:
    if (iVar5 == 0) break;
  }
  if (!bVar13) goto LAB_00406734;
  uStack_81c = uStack_7cc;
  piStack_874 = (int *)(param_1 + 0x168);
  piStack_87c = *unaff_EBP;
  piStack_878 = (int *)&DAT_0047b600;
  piStack_880 = (int *)0x4062d3;
  iVar5 = (**(code **)*piStack_87c)();
  if (iVar5 < 0) {
    piStack_880 = *unaff_EBP;
    (**(code **)(*piStack_880 + 0x10))();
    return iVar5;
  }
  piVar6 = *unaff_EBP;
  piStack_880 = aiStack_82c;
  iVar5 = (**(code **)(*piVar6 + 0x38))();
  if (iVar5 < 0) {
    (**(code **)(**unaff_EBP + 0x10))();
    return iVar5;
  }
  if (piStack_834 == (int *)0x0) {
    iVar5 = -0x7fffbffb;
    goto LAB_004066f9;
  }
  piStack_874 = (int *)0x0;
  iVar5 = FUN_004044a0(*unaff_EBP,piStack_834,*(uint *)(param_1 + 0x1c),(int *)&piStack_874);
  if (iVar5 < 0) goto LAB_004066f9;
  piVar17 = piStack_874;
  (**(code **)(*piStack_874 + 0x30))();
  piVar7 = (int *)(param_1 + 0x48);
  piVar16 = piStack_87c;
  (**(code **)(*piStack_87c + 0x28))();
  piVar11 = (int *)(param_1 + 0x58);
  *piVar11 = 10000000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar5 = (**(code **)*piVar6)(piVar6,&DAT_0047b620,&piStack_880);
  unaff_EBP = ppiVar18;
  if (-1 < iVar5) {
    (**(code **)(*piVar17 + 0x20))(piVar17,(undefined4 *)(param_1 + 0x54));
    (**(code **)(*piVar16 + 0x18))(piVar16,piVar11);
    if (piVar17 != (int *)0x0) {
      (**(code **)(*piVar17 + 8))(piVar17);
    }
    piVar17 = (int *)0x0;
    unaff_EBP = ppiVar18;
  }
  if ((*piVar11 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
    *piVar11 = 10000000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  (**(code **)(*piVar7 + 8))(piVar7);
  iVar5 = (**(code **)(*(int *)*piVar17 + 0x28))
                    ((int *)*piVar17,CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x1c)),0);
  if (iVar5 < 0) goto LAB_004066f9;
  uStack_844 = 0;
  piStack_870 = (int *)0x8;
  (**(code **)(**(int **)(param_1 + 0x168) + 0x14))(*(int **)(param_1 + 0x168),&uStack_844);
  plVar1 = (longlong *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x20) = uStack_844;
  *(undefined4 *)(param_1 + 0x24) = uStack_840;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x168) + 0x14))
                    (*(int **)(param_1 + 0x168),&stack0xfffff7ac,L"NumberOfFrames",auStack_850,
                     plVar1,&stack0xfffff778);
  if (iVar5 < 0) {
    *(int *)plVar1 = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = 1;
  }
  lVar2 = *plVar1;
  if (*(int *)plVar1 == 0 && *(int *)(param_1 + 0x184) == 0) {
LAB_004064c2:
    *(undefined4 *)(param_1 + 0x38) = 0;
    piVar6 = *unaff_EBP;
    *(undefined4 *)(param_1 + 0x3c) = 0x403e0000;
    ppiVar19 = unaff_EBP;
    iVar5 = (**(code **)(*piVar6 + 0x14))(piVar6);
    if (-1 < iVar5) {
      piVar6 = (int *)(param_1 + 0x2c);
      piStack_874 = (int *)0x0;
      if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
      }
      piVar7 = *unaff_EBP;
      *piVar6 = 0;
      (**(code **)(*piVar7 + 0x1c))(piVar7,0,piVar6,&stack0xfffff7a0);
      piVar7 = (int *)*piVar6;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      piVar7 = *unaff_EBP;
      *piVar6 = 0;
      ppiVar19 = (int **)0x0;
      iVar5 = (**(code **)(*piVar7 + 0x1c))
                        (piVar7,0,piVar6,&stack0xfffff794,&stack0xfffff778,&piStack_874,&piStack_878
                         ,&stack0xfffff76c);
      if ((int *)*piVar6 != (int *)0x0) {
        (**(code **)(*(int *)*piVar6 + 8))();
      }
      *piVar6 = 0;
      if ((-1 < iVar5) && (iStack_84c != 0 || local_848 != (int **)0x0)) {
        *(double *)(param_1 + 0x38) = _DAT_0047ba78 / (double)CONCAT44(local_848,iStack_84c);
      }
    }
    unaff_EBP = ppiVar19;
    if (*(int *)(param_1 + 0x180) == 0 && *(int *)(param_1 + 0x184) == 0) {
      uVar15 = ftol();
      *(undefined8 *)(param_1 + 0x180) = uVar15;
      unaff_EBP = ppiVar19;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x20) == 0 && *(uint *)(param_1 + 0x24) == 0) goto LAB_004064c2;
    lVar14 = __alldiv(*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24),10000000,0);
    *(double *)(param_1 + 0x38) = (double)lVar2 / (double)lVar14;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  piVar6 = (int *)(iStack_830 + 0x30);
  if (*(int *)(iStack_830 + 0x40) == 3) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = *(int *)(iStack_830 + 0x50) << 2;
  }
  pvVar4 = GlobalAlloc(0x42,iVar5 + *piVar6);
  piVar7 = GlobalLock(pvVar4);
  *(int **)(param_1 + 0x30) = piVar7;
  if (piVar7 == (int *)0x0) {
    (**(code **)(**unaff_EBP + 0x10))();
    return -0x7ff8fff2;
  }
  if (*(int *)(iStack_830 + 0x40) == 3) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = *(int *)(iStack_830 + 0x50) << 2;
  }
  iVar9 = *piVar6;
  for (uVar10 = (uint)(iVar5 + iVar9) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (uVar10 = iVar5 + iVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  pvVar4 = GlobalAlloc(0x42,0x40);
  puVar8 = GlobalLock(pvVar4);
  *(undefined4 **)(param_1 + 0x34) = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  puVar12 = puVar8;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined8 *)(puVar8 + 4) = uVar15;
  puVar8[6] = 0;
  puVar8[8] = 0;
  *puVar8 = 0x40;
  puVar8[1] = 0xffffffff;
  puVar8[2] = 0;
  puVar8[3] = 0xffffffff;
  puVar8[7] = 0x3ff00000;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  iVar5 = FUN_00404380(*(undefined4 **)(param_1 + 0x168));
LAB_004066f9:
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(uint *)(param_1 + 400) = (uint)(-1 < iVar5);
  if (iVar5 < 0) {
    (**(code **)(**unaff_EBP + 0x10))();
  }
  return iVar5;
}


