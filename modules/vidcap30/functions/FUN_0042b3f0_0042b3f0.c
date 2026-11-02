/* Module: vidcap30.exe
   Function: FUN_0042b3f0
   Address: 0042b3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042b3f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uStack_8;
  
  piVar3 = param_1;
  iVar6 = 0;
  if (*param_1 == 7) {
    if (param_2 == 0) {
      iVar6 = FUN_00422890(param_1,param_1 + 10,0);
      iVar4 = FUN_0042b6a0(piVar3);
      if (iVar4 != 0) {
        iVar6 = FUN_0042b3f0(piVar3,1,1);
        return iVar6;
      }
      FUN_00424cd0(piVar3);
      return iVar6;
    }
    if ((((param_1[0x52] & 0x4000U) == 0) && (iVar4 = param_1[199], iVar4 != 0)) &&
       ((*(uint *)(iVar4 + 0x14c) & 0x40) != 0)) {
      param_1 = (int *)0x0;
      iVar6 = (**(code **)(**(int **)(iVar4 + 0x3cc) + 0x40))(*(int **)(iVar4 + 0x3cc),&param_1);
      if ((-1 < iVar6) && (param_1 != (int *)0x10c9)) {
        iVar6 = FUN_00426360(piVar3[199]);
        FUN_00422750(DAT_005bb49c,0);
      }
    }
    if ((piVar3[0x52] & 0x40U) == 0) {
      iVar6 = FUN_00422890(piVar3,piVar3 + 10,0);
      if (iVar6 < 0) {
        piVar3[0x52] = piVar3[0x52] & 0xffffffdf;
        piVar3[0x53] = piVar3[0x53];
        FUN_00422890(piVar3,piVar3 + 10,0);
      }
      else {
        piVar3[0x52] = piVar3[0x52] | 0x40;
        piVar3[0x53] = piVar3[0x53];
      }
      FUN_00424cd0(piVar3);
    }
    if ((-1 < iVar6) && (param_3 == 0)) {
      piVar3[0x52] = piVar3[0x52] | 0x100;
      piVar3[0x53] = piVar3[0x53];
      iVar4 = FUN_00424c80(piVar3);
      if (((piVar3[0x52] & 0x4000U) == 0) &&
         ((iVar1 = piVar3[199], iVar1 != 0 && ((*(uint *)(iVar1 + 0x14c) & 0x40) != 0)))) {
        if (iVar4 == 0) {
          FUN_00426470(iVar1);
          FUN_00422750(DAT_005bb49c,0);
        }
        iVar6 = FUN_00426430(piVar3[199]);
      }
      if (-1 < iVar6) {
        if (iVar4 == 0) {
          uStack_8 = (ulonglong)DAT_005bb4a0;
          dVar2 = (double)uStack_8;
          uStack_8._0_4_ = SUB84(dVar2 * _DAT_0058aa88 + _DAT_0058a850,0);
          iVar4 = piVar3[199];
          if ((iVar4 != 0) && (_DAT_00587ad0 < *(double *)(iVar4 + 0x368))) {
            uStack_8._0_4_ =
                 SUB84((dVar2 * _DAT_00589f18) / *(double *)(iVar4 + 0x368) + _DAT_0058a850,0);
          }
          uVar5 = __aullshr();
          FUN_00422750((int)uStack_8 + -0x80000000,uVar5 & 1);
          if ((piVar3[0x52] & 0x80U) != 0) {
            iVar6 = FUN_00424c00(piVar3);
          }
        }
        if ((-1 < iVar6) && ((piVar3[0x52] & 0x80U) != 0)) {
          return iVar6;
        }
      }
      piVar3[0x52] = piVar3[0x52] & 0xfffffeff;
      piVar3[0x53] = piVar3[0x53];
    }
  }
  return iVar6;
}


