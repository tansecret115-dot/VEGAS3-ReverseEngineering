/* Module: tokr3260.dll
   Function: FUN_68059bf0
   Address: 68059bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68059bf0(int *param_1,int param_2,int *param_3,int param_4,int param_5,int *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float local_1018 [256];
  float afStackY_c18 [256];
  float local_818 [256];
  float afStackY_418 [224];
  int in_stack_ffffff6c;
  undefined4 uStack_24;
  int iVar14;
  int iVar15;
  
  FUN_6805a6a0();
  iVar14 = 0;
  if (0 < param_5) {
    iVar10 = param_4 - (int)param_3;
    pfVar5 = (float *)(&DAT_6805ce50 + -(int)param_1);
    iVar15 = 0;
    piVar9 = param_1;
    do {
      if ((*param_3 == 0) && (*(int *)(iVar10 + (int)param_3) == 0)) {
        puVar3 = (undefined4 *)*piVar9;
        puVar6 = (undefined4 *)(*param_6 + iVar15);
        iVar8 = -(int)puVar3;
        iVar11 = 0x100;
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          *(undefined4 *)((int)local_818 + iVar8 + (int)puVar3) = uVar2;
          *(undefined4 *)((int)afStackY_418 + iVar8 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        pfVar5 = local_1018;
        puVar3 = (undefined4 *)(iVar10 + (int)param_3);
        puVar6 = (undefined4 *)&stack0xffffffac;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        piVar12 = param_3;
        piVar13 = (int *)&stack0xffffff6c;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar13 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar13 = piVar13 + 1;
        }
        afStackY_418[0xdf] = 2.5238593e+24;
        iVar8 = FUN_680573a0(0x200,in_stack_ffffff6c);
        if (iVar8 == -999999) {
          return 0xfff0bdc1;
        }
        iVar8 = *piVar9;
        pfVar7 = (float *)(*param_6 + iVar15);
        iVar11 = 0;
        do {
          fVar1 = *pfVar7;
          iVar4 = iVar11 + 4;
          pfVar7 = pfVar7 + 1;
          *(float *)((int)local_818 + iVar11) = fVar1 / *(float *)((int)local_1018 + iVar11);
          *(float *)((int)afStackY_418 + iVar11) =
               *(float *)(iVar8 + -4 + iVar4) / *(float *)((int)afStackY_c18 + iVar11);
          iVar11 = iVar4;
        } while (iVar4 < 0x400);
      }
      pfVar5 = *(float **)((int)pfVar5 + (int)piVar9);
      uStack_24 = 0x68059d22;
      FUN_680582c0((int)local_818,(float *)(param_2 + iVar15),*(int *)param_6[1],(int)pfVar5);
      param_3 = param_3 + 0x10;
      iVar14 = iVar14 + 1;
      piVar9 = piVar9 + 1;
      iVar15 = iVar15 + 0x400;
    } while (iVar14 < param_5);
  }
  if (0 < param_5) {
    iVar14 = 0;
    do {
      puVar3 = (undefined4 *)*param_1;
      param_1 = param_1 + 1;
      puVar6 = (undefined4 *)(*param_6 + iVar14);
      iVar14 = iVar14 + 0x400;
      param_5 = param_5 + -1;
      for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
    } while (param_5 != 0);
  }
  return 0;
}


