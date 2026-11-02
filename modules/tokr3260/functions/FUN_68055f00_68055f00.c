/* Module: tokr3260.dll
   Function: FUN_68055f00
   Address: 68055f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68055f00(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_20;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  
  local_20 = 0;
  if (*(int *)(param_1 + 0x110) < 1) {
    return 0;
  }
  piVar5 = (int *)(param_1 + 0x130);
  do {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xf224) + 0x3c) + piVar5[-7] * 4);
    if ((iVar2 == -999999) || (iVar6 = FUN_68053a30(piVar5[-6]), iVar6 == -999999)) {
      return 0xfff0bdc1;
    }
    if ((0 < iVar2) && (local_18 = 0, 0 < *(int *)(param_1 + 4) << 2)) {
      local_10 = piVar5 + 0x10;
      piVar9 = piVar5;
      do {
        local_14 = 0;
        if (0 < *piVar9) {
          local_c = local_10;
          do {
            piVar3 = (int *)*local_c;
            fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0xf224) + 0x34) + piVar3[1] * 4);
            if (fVar1 == _DAT_6805b0e8) {
              return 0xfff0bdc1;
            }
            iVar8 = 0;
            fVar4 = (float)_DAT_6805b0f0;
            if (0 < iVar6) {
              piVar10 = piVar3 + 2;
              do {
                iVar7 = *piVar3 + iVar8;
                if ((-1 < iVar7) && (iVar7 < 0x400)) {
                  *(float *)(param_2 + iVar7 * 4) =
                       (float)*piVar10 * (fVar1 / ((float)iVar2 - fVar4)) +
                       *(float *)(param_2 + iVar7 * 4);
                }
                iVar8 = iVar8 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar8 < iVar6);
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < *piVar9);
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 7;
        piVar9 = piVar9 + 1;
      } while (local_18 < *(int *)(param_1 + 4) * 4);
    }
    local_20 = local_20 + 1;
    piVar5 = piVar5 + 0x87;
  } while (local_20 < *(int *)(param_1 + 0x110));
  return 0;
}


