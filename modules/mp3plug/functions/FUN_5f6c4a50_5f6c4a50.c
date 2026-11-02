/* Module: mp3plug.dll
   Function: FUN_5f6c4a50
   Address: 5f6c4a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6c4a50(double *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int local_24;
  int local_18;
  
  if (0 < param_3) {
    local_18 = param_3;
    do {
      if (0 < param_4) {
        iVar9 = 0;
        piVar6 = (int *)(param_5 + 200);
        local_24 = param_4;
        pdVar8 = param_1;
        do {
          dVar1 = *(double *)((param_2 - (int)param_1) + (int)pdVar8);
          iVar7 = *piVar6;
          dVar2 = dVar1 * *(double *)(piVar6 + 2);
          dVar3 = _DAT_5f7349d0;
          if (0 < iVar7) {
            pdVar4 = (double *)(piVar6 + -0x12);
            do {
              iVar7 = iVar7 + -1;
              dVar2 = pdVar4[-0x10] * *pdVar4 + dVar2;
              dVar3 = pdVar4[-8] * *pdVar4 + dVar3;
              pdVar4 = pdVar4 + 1;
            } while (iVar7 != 0);
          }
          *pdVar8 = dVar1 * *(double *)(piVar6 + 4) + dVar2 * *(double *)(piVar6 + -2) + dVar3;
          if ((dVar2 < _DAT_5f736110) && (_DAT_5f736108 < dVar2)) {
            dVar2 = _DAT_5f7349d0;
          }
          iVar7 = *piVar6 + -1;
          if (0 < iVar7) {
            puVar5 = (undefined4 *)(param_5 + 0x80 + (iVar9 + iVar7) * 8);
            do {
              *puVar5 = puVar5[-2];
              puVar5[1] = puVar5[-1];
              puVar5 = puVar5 + -2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(double *)(piVar6 + -0x12) = dVar2;
          pdVar8 = pdVar8 + 1;
          iVar9 = iVar9 + 0x1c;
          piVar6 = piVar6 + 0x38;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      param_2 = param_2 + param_4 * 8;
      param_1 = param_1 + param_4;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}


