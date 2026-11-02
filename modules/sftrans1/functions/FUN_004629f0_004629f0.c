/* Module: sftrans1.dll
   Function: FUN_004629f0
   Address: 004629f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_004629f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int *param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,int param_12)

{
  undefined1 auVar1 [8];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float10 extraout_ST0;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iStack_638;
  int local_624;
  int iStack_620;
  int iStack_61c;
  int iStack_618;
  undefined1 auStack_614 [8];
  undefined4 auStack_60c [4];
  double dStack_5fc;
  double dStack_5f4;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 auStack_5c8 [2];
  int aiStack_5c0 [5];
  undefined4 uStack_5ac;
  undefined4 uStack_5a4;
  int iStack_11c;
  undefined1 auStack_118 [224];
  int iStack_38;
  
  local_5e8 = *(undefined4 *)(param_1 + 0xc);
  local_5e4 = *(undefined4 *)(param_1 + 0x10);
  local_5e0 = *(undefined4 *)(param_1 + 0x14);
  local_5dc = *(undefined4 *)(param_1 + 0x18);
  local_624 = param_1;
  fVar11 = (float10)_CIpow();
  unique0x0000aa00 =
       (double)((float10)_DAT_00555908 -
               ((float10)*(double *)(param_12 + 0x20) * (float10)_DAT_0055f628 +
               (float10)_DAT_0055f620) * fVar11);
  iStack_638 = ftol();
  if (_DAT_0055f618 < stack0xfffff9f0) {
    iStack_638 = param_8[2] - *param_8;
  }
  iVar2 = ftol();
  if ((float10)_DAT_0055f618 < extraout_ST0) {
    iVar2 = param_8[3] - param_8[1];
  }
  FUN_0052f210();
  auStack_5c8[0] = 0;
  piVar9 = aiStack_5c0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  piVar9 = aiStack_5c0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  aiStack_5c0[1] = iStack_638;
  puVar13 = auStack_5c8;
  iVar14 = 0;
  uStack_5ac = 1;
  uStack_5a4 = 0x7fffffff;
  aiStack_5c0[3] = iVar2;
  iVar6 = (**(code **)(**(int **)(local_624 + 8) + 0xc))
                    (*(int **)(local_624 + 8),0,0,&local_5e8,puVar13,0,0,&DAT_005547c0,&iStack_620);
  if (-1 < iVar6) {
    iVar6 = FUN_0052f2e0(unaff_ESI,auStack_60c,0);
    if (iVar6 != 0) {
      FUN_004d14d0(iStack_11c,auStack_118,iStack_38,0,param_7,param_8,param_9,0,param_11);
      iVar6 = ftol();
      iVar3 = ftol();
      auVar1 = (undefined1  [8])CONCAT44(auStack_614._4_4_,auStack_614._0_4_);
      iVar15 = 0;
      if (0 < iVar2) {
        iVar12 = 0;
        iVar2 = iStack_11c;
        do {
          iVar7 = 0;
          if (0 < (int)puVar13) {
            iVar4 = iVar12 + (iVar12 >> 0x1f & 0x3fffU);
            iVar5 = iVar3 + iVar12;
            iVar10 = 0;
            pbVar8 = (byte *)(iVar2 + 1);
            do {
              dStack_5fc = (double)pbVar8[1] * _DAT_0055f608;
              dStack_5f4 = (double)*pbVar8 * _DAT_0055f608;
              auStack_614 = (undefined1  [8])((double)pbVar8[-1] * _DAT_0055f608);
              local_624 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
              iStack_61c = (int)(iVar10 + iVar6 + (iVar10 + iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
              iStack_618 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
              if (iVar14 + -1 == iVar15) {
                iStack_618 = *(int *)(param_4 + 0xc);
              }
              if ((int)puVar13 + -1 == iVar7) {
                iStack_61c = *(int *)(param_4 + 8);
              }
              iStack_620 = iVar4 >> 0xe;
              FUN_004cd320(param_3,param_4,param_5,&local_624,param_11,dStack_5fc,dStack_5f4,
                           auStack_614,(double)pbVar8[2] * _DAT_0055f608);
              iVar7 = iVar7 + 1;
              pbVar8 = pbVar8 + 4;
              iVar10 = iVar10 + iVar6;
              auVar1 = auStack_614;
            } while (iVar7 < (int)puVar13);
          }
          auStack_614._4_4_ = (undefined4)((ulonglong)auVar1 >> 0x20);
          auStack_614._0_4_ = SUB84(auVar1,0);
          iVar2 = iVar2 + iStack_38;
          iVar12 = iVar12 + iVar3;
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar14);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      FUN_0052f260();
      return 0;
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    FUN_0052f260();
    return -0x7fffbffb;
  }
  FUN_0052f260();
  return iVar6;
}


