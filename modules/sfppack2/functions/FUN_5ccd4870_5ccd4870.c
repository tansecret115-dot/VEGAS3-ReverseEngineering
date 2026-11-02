/* Module: sfppack2.dll
   Function: FUN_5ccd4870
   Address: 5ccd4870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccd4870(double *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  uint *puStack_4c;
  int iStack_38;
  
  _CIpow();
  iVar2 = ftol();
  fVar7 = FUN_5ccd4ae0(*(uint *)(param_3 + 4));
  *param_1 = (double)fVar7;
  param_1[iVar2] = (double)fVar7;
  FUN_5ccd4b80((int)param_1,0,iVar2);
  iStack_38 = param_4 + -1;
  _CIpow();
  puStack_4c = (uint *)ftol();
  iVar2 = param_2 + -1;
  if (iVar2 < (int)puStack_4c) {
    puStack_4c = (uint *)iVar2;
  }
  fVar7 = FUN_5ccd4ae0(*(uint *)(param_3 + 4 + iStack_38 * 8));
  param_1[(int)puStack_4c] = (double)fVar7;
  param_1[iVar2] = (double)fVar7;
  FUN_5ccd4b80((int)param_1,(int)puStack_4c,iVar2);
  puStack_4c = (uint *)(param_3 + 4);
  if (0 < iStack_38) {
    do {
      uVar1 = *puStack_4c;
      iVar6 = 0;
      do {
        ftol();
        _CIpow();
        iVar3 = ftol();
        iVar6 = iVar6 + 1;
        ftol();
        _CIpow();
        iVar4 = ftol();
        iVar5 = ftol();
        fVar7 = FUN_5ccd4ae0(iVar5 + uVar1);
        iVar5 = ftol();
        fVar8 = FUN_5ccd4ae0(iVar5 + uVar1);
        if (iVar2 < iVar3) {
          iVar3 = iVar2;
        }
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
        }
        param_1[iVar3] = (double)fVar7;
        param_1[iVar4] = (double)fVar8;
        FUN_5ccd4b80((int)param_1,iVar3,iVar4);
      } while (iVar6 < 10);
      puStack_4c = puStack_4c + 2;
      iStack_38 = iStack_38 + -1;
    } while (iStack_38 != 0);
  }
  return;
}


