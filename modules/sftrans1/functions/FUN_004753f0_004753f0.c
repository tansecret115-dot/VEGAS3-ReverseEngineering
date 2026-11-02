/* Module: sftrans1.dll
   Function: FUN_004753f0
   Address: 004753f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004753f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  uint *in_stack_0000003c;
  int local_34;
  int local_30;
  
  ftol();
  ftol();
  FUN_00474340(in_stack_0000003c);
  iVar7 = ftol();
  if (_DAT_00555910 <= *(double *)(param_1 + 0x30)) {
    if (param_6 == 4) {
      FUN_00474340(in_stack_0000003c);
      iVar8 = ftol();
      fVar14 = (float10)FUN_00474340(in_stack_0000003c);
      fVar5 = (float10)_DAT_005624b8;
      local_34 = 0;
      if (0 < iVar7) {
        do {
          iVar9 = ftol();
          iVar10 = ftol();
          uVar11 = *in_stack_0000003c;
          uVar2 = in_stack_0000003c[uVar11 + 0x41];
          pbVar1 = (byte *)(param_2 + iVar10 * param_3 + iVar9 * 4);
          uVar3 = in_stack_0000003c[1];
          uVar4 = in_stack_0000003c[uVar3 + 0x41];
          in_stack_0000003c[uVar11 + 0x41] = uVar2 ^ uVar4;
          *in_stack_0000003c = (uint)*(byte *)((int)in_stack_0000003c + uVar11 + 8);
          uVar11 = (uVar2 ^ uVar4) & 0x80000007;
          in_stack_0000003c[1] = (uint)*(byte *)((int)in_stack_0000003c + uVar3 + 8);
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
          }
          iVar10 = uVar11 + iVar8;
          iVar9 = (uint)*pbVar1 + iVar10;
          if (iVar9 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0xff;
            if (iVar9 < 0x100) {
              iVar12 = iVar9;
            }
          }
          *pbVar1 = (byte)iVar12;
          iVar9 = (uint)pbVar1[1] + iVar10;
          if (iVar9 < 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0xff;
            if (iVar9 < 0x100) {
              iVar12 = iVar9;
            }
          }
          pbVar1[1] = (byte)iVar12;
          iVar10 = iVar10 + (uint)pbVar1[2];
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          pbVar1[2] = (byte)iVar10;
          FUN_00474340(in_stack_0000003c);
          fsin(((float10)local_34 / (float10)iVar7) * (float10)_DAT_005624b0 +
               (float10)(double)(fVar14 * fVar5));
          FUN_00474340(in_stack_0000003c);
          local_34 = local_34 + 1;
        } while (local_34 < iVar7);
        return;
      }
    }
    else {
      fVar15 = (float10)FUN_00474340(in_stack_0000003c);
      fVar5 = (float10)_DAT_00555908;
      fVar14 = (float10)_DAT_005624a0;
      fVar16 = (float10)FUN_00474340(in_stack_0000003c);
      fVar6 = (float10)_DAT_005624b8;
      local_30 = 0;
      if (0 < iVar7) {
        do {
          iVar8 = ftol();
          iVar9 = ftol();
          pfVar13 = (float *)(iVar8 * 0x10 + param_2 + iVar9 * param_3);
          fVar17 = (float10)FUN_00474340(in_stack_0000003c);
          fVar18 = fVar17 * (float10)_DAT_005624a0 + (float10)(float)((fVar15 + fVar5) * fVar14);
          fVar17 = fVar18 + (float10)*pfVar13;
          if ((float10)_DAT_00557840 <= fVar17) {
            if ((float10)_DAT_0055c008 < fVar17) {
              fVar17 = (float10)_DAT_0055c008;
            }
          }
          else {
            fVar17 = (float10)_DAT_00557840;
          }
          *pfVar13 = (float)fVar17;
          fVar17 = fVar18 + (float10)pfVar13[1];
          if ((float10)_DAT_00557840 <= fVar17) {
            if ((float10)_DAT_0055c008 < fVar17) {
              fVar17 = (float10)_DAT_0055c008;
            }
          }
          else {
            fVar17 = (float10)_DAT_00557840;
          }
          pfVar13[1] = (float)fVar17;
          fVar18 = fVar18 + (float10)pfVar13[2];
          if ((float10)_DAT_00557840 <= fVar18) {
            if ((float10)_DAT_0055c008 < fVar18) {
              fVar18 = (float10)_DAT_0055c008;
            }
          }
          else {
            fVar18 = (float10)_DAT_00557840;
          }
          pfVar13[2] = (float)fVar18;
          FUN_00474340(in_stack_0000003c);
          fsin(((float10)local_30 / (float10)iVar7) * (float10)_DAT_005624b0 +
               (float10)(double)(fVar16 * fVar6));
          FUN_00474340(in_stack_0000003c);
          local_30 = local_30 + 1;
        } while (local_30 < iVar7);
      }
    }
  }
  return;
}


