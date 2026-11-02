/* Module: tokr3260.dll
   Function: FUN_68055e00
   Address: 68055e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68055e00(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_8;
  
  local_8 = 0;
  if (*param_1 < 1) {
    return 0;
  }
  piVar7 = param_1 + 0x143f;
  iVar9 = 4;
  do {
    iVar2 = param_1[0x3c89];
    iVar3 = *(int *)(*(int *)(iVar2 + 0x3c) + piVar7[-0x20] * 4);
    if (iVar3 == -999999) {
      return 0xfff0bdc1;
    }
    if (0 < iVar3) {
      fVar1 = *(float *)(*(int *)(iVar2 + 0x34) + *piVar7 * 4);
      if (fVar1 == _DAT_6805b0e8) {
        return 0xfff0bdc1;
      }
      iVar6 = *(int *)(iVar9 + -4 + *(int *)(iVar2 + 0x38));
      if (iVar6 == -999999) {
        return 0xfff0bdc1;
      }
      iVar2 = *(int *)(iVar9 + *(int *)(iVar2 + 0x38));
      if (iVar2 == -999999) {
        return 0xfff0bdc1;
      }
      fVar4 = (float)_DAT_6805b0f0;
      if (iVar6 < iVar2) {
        piVar8 = param_1 + iVar6 + 0x145f;
        pfVar5 = (float *)(param_2 + iVar6 * 4);
        do {
          iVar2 = *piVar8;
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 1;
          *pfVar5 = (float)iVar2 * (fVar1 / ((float)iVar3 - fVar4)) + *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (iVar6 < *(int *)(*(int *)(param_1[0x3c89] + 0x38) + iVar9));
      }
    }
    local_8 = local_8 + 1;
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + 4;
    if (*param_1 <= local_8) {
      return 0;
    }
  } while( true );
}


