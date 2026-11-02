/* Module: tokr3260.dll
   Function: FUN_68056f50
   Address: 68056f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68056f50(int param_1,int *param_2,undefined4 *param_3,int param_4,int *param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int *piVar10;
  float *pfVar11;
  float local_1010 [256];
  float afStackY_c10 [256];
  float local_810 [256];
  float local_410 [222];
  int in_stack_ffffff6c;
  undefined4 uStack_24;
  int iStack_20;
  float *pfStack_1c;
  undefined4 uStack_18;
  float *pfStack_14;
  int iVar12;
  int *piVar13;
  
  piVar1 = param_6;
  FUN_6805a6a0();
  iVar12 = 0;
  if (0 < (int)param_5) {
    param_6 = param_3;
    iVar5 = 0;
    piVar13 = param_2;
    do {
      pfStack_14 = *(float **)(((int)&DAT_6805c2f0 - (int)param_2) + (int)piVar13);
      pfStack_1c = local_810;
      uStack_18 = *(undefined4 *)piVar1[1];
      iStack_20 = param_1 + iVar5;
      uStack_24 = 0x68056fbe;
      FUN_68057c40();
      pfStack_14 = local_1010;
      puVar6 = (undefined4 *)((param_4 - (int)param_3) + (int)param_6);
      puVar9 = (undefined4 *)&stack0xffffffac;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      piVar7 = param_6;
      piVar10 = (int *)&stack0xffffff6c;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar10 = piVar10 + 1;
      }
      local_410[0xdd] = 2.5205588e+24;
      iVar4 = FUN_680573a0(0x200,in_stack_ffffff6c);
      if (iVar4 == -999999) {
        return 0xfff0bdc1;
      }
      iVar4 = 0;
      do {
        iVar2 = iVar4 + 4;
        *(float *)((int)local_410 + iVar4) =
             *(float *)((int)afStackY_c10 + iVar4) * *(float *)((int)local_410 + iVar4);
        iVar4 = iVar2;
      } while (iVar2 < 0x400);
      iVar4 = 0;
      iVar2 = iVar5;
      do {
        iVar3 = iVar4 + 4;
        iVar2 = iVar2 + 4;
        *(float *)(iVar4 + *piVar13) =
             *(float *)((int)local_1010 + iVar4) * *(float *)((int)local_810 + iVar4) +
             *(float *)(*piVar1 + -4 + iVar2);
        iVar4 = iVar3;
      } while (iVar3 < 0x400);
      iVar12 = iVar12 + 1;
      pfVar8 = local_410;
      pfVar11 = (float *)(*piVar1 + iVar5);
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
      }
      param_6 = param_6 + 0x10;
      piVar13 = piVar13 + 1;
      iVar5 = iVar2;
    } while (iVar12 < (int)param_5);
  }
  if ((int)param_5 < 4) {
    iVar12 = (int)param_5 << 10;
    param_5 = param_2 + (int)param_5;
    do {
      iVar4 = 0;
      iVar5 = iVar12;
      do {
        iVar4 = iVar4 + 4;
        puVar6 = (undefined4 *)(*piVar1 + iVar5);
        iVar5 = iVar5 + 4;
        *(undefined4 *)(*param_5 + -4 + iVar4) = *puVar6;
      } while (iVar4 < 0x400);
      puVar6 = (undefined4 *)(*piVar1 + iVar12);
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      param_5 = param_5 + 1;
      iVar12 = iVar5;
    } while (iVar5 < 0x1000);
  }
  return 0;
}


