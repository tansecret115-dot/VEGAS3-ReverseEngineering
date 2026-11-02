/* Module: sftrans1.dll
   Function: FUN_00475080
   Address: 00475080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475080(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  undefined4 in_stack_0000003c;
  int local_28;
  int local_24;
  
  ftol();
  ftol();
  FUN_00474340(in_stack_0000003c);
  local_28 = ftol();
  if (_DAT_00555910 <= *(double *)(param_1 + 0x30)) {
    if (param_6 == 4) {
      FUN_00474340(in_stack_0000003c);
      iVar5 = ftol();
      if (0 < local_28) {
        do {
          FUN_00474340(in_stack_0000003c);
          FUN_00474340(in_stack_0000003c);
          iVar6 = ftol();
          iVar7 = ftol();
          iVar7 = param_2 + iVar7 * param_3;
          puVar1 = (undefined1 *)(iVar7 + iVar6 * 4);
          iVar6 = (uint)*(byte *)(iVar7 + iVar6 * 4) + iVar5;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          *puVar1 = (char)iVar6;
          iVar6 = (uint)(byte)puVar1[1] + iVar5;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          puVar1[1] = (char)iVar6;
          iVar6 = (uint)(byte)puVar1[2] + iVar5;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          puVar1[2] = (char)iVar6;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        return;
      }
    }
    else {
      fVar9 = (float10)FUN_00474340(in_stack_0000003c);
      fVar2 = (float)((fVar9 + (float10)_DAT_00555908) * (float10)_DAT_00562488);
      local_24 = local_28;
      if (0 < local_28) {
        do {
          FUN_00474340(in_stack_0000003c);
          FUN_00474340(in_stack_0000003c);
          iVar5 = ftol();
          iVar6 = ftol();
          pfVar8 = (float *)(iVar5 * 0x10 + param_2 + iVar6 * param_3);
          fVar3 = fVar2 + *pfVar8;
          fVar4 = _DAT_00557840;
          if ((_DAT_00557840 <= fVar3) && (fVar4 = fVar3, _DAT_0055c008 < fVar3)) {
            fVar4 = _DAT_0055c008;
          }
          *pfVar8 = fVar4;
          fVar3 = fVar2 + pfVar8[1];
          fVar4 = _DAT_00557840;
          if ((_DAT_00557840 <= fVar3) && (fVar4 = fVar3, _DAT_0055c008 < fVar3)) {
            fVar4 = _DAT_0055c008;
          }
          pfVar8[1] = fVar4;
          fVar3 = fVar2 + pfVar8[2];
          fVar4 = _DAT_00557840;
          if ((_DAT_00557840 <= fVar3) && (fVar4 = fVar3, _DAT_0055c008 < fVar3)) {
            fVar4 = _DAT_0055c008;
          }
          pfVar8[2] = fVar4;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
    }
  }
  return;
}


