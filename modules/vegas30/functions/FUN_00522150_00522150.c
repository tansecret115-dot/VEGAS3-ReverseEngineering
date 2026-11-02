/* Module: vegas30.exe
   Function: FUN_00522150
   Address: 00522150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522150(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  int local_1c;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    iVar3 = *param_2;
    fVar12 = (float10)FUN_005a5f80(puVar1);
    iVar4 = param_2[1];
    fVar13 = (float10)FUN_005a5ff0(puVar1);
    if ((double)CONCAT44(param_4,param_3) != _DAT_00610fd8) {
      *(undefined4 *)(param_1 + 0x80) = param_3;
      *(undefined4 *)(param_1 + 0x84) = param_4;
    }
    puVar10 = puVar1;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    iVar11 = 0;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar9 = *param_2;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(float *)(param_1 + 0x34) = (float)iVar9;
    *(float *)(param_1 + 0x44) = (float)*param_2;
    iVar9 = param_2[1];
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(float *)(param_1 + 0x48) = (float)iVar9;
    *(float *)(param_1 + 0x58) = (float)param_2[1];
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x44) * _DAT_0061a460;
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x48) * _DAT_0061a460;
    *(float *)(param_1 + 0xb4) = (float)((float10)iVar4 / fVar13) * *(float *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar7 = (int *)FUN_00522a00(0);
      if (piVar7 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar7;
      }
      if (0 < local_1c) {
        do {
          uVar5 = *(undefined4 *)(iVar11 * piVar7[1] + 0x68 + piVar7[2]);
          pfVar2 = (float *)(iVar11 * piVar7[1] + 0x18 + piVar7[2]);
          fVar6 = pfVar2[0x15];
          FUN_005a6120(pfVar2,pfVar2,-(double)CONCAT44(fVar6,uVar5),0);
          iVar9 = 5;
          pfVar8 = pfVar2;
          do {
            iVar9 = iVar9 + -1;
            *pfVar8 = (float)((float10)iVar3 / fVar12) * *pfVar8;
            pfVar8[1] = (float)((float10)iVar4 / fVar13) * pfVar8[1];
            pfVar8 = pfVar8 + 4;
          } while (iVar9 != 0);
          FUN_005a6120(pfVar2,pfVar2,uVar5,fVar6,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_1c);
      }
    }
  }
  return;
}


