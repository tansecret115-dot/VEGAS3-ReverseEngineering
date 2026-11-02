/* Module: vegas30k.dll
   Function: _SfMatrix2DConcatenate@8
   Address: 010fdfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DConcatenate_8(double *param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  int local_5c;
  int local_58;
  double local_50 [9];
  
  iVar3 = (int)param_2 - (int)param_1;
  local_58 = 3;
  pdVar8 = local_50;
                    /* 0xfdfd0  1105  _SfMatrix2DConcatenate@8 */
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar8 = *param_2;
    param_2 = param_2 + 1;
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  do {
    pdVar8 = local_50;
    pdVar4 = (double *)(iVar3 + (int)param_1);
    local_5c = 3;
    do {
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
      iVar5 = 3;
      pdVar6 = param_1;
      pdVar7 = pdVar8;
      do {
        dVar1 = *pdVar6;
        dVar2 = *pdVar7;
        pdVar6 = pdVar6 + 1;
        pdVar7 = pdVar7 + 3;
        iVar5 = iVar5 + -1;
        *pdVar4 = dVar1 * dVar2 + *pdVar4;
      } while (iVar5 != 0);
      pdVar4 = pdVar4 + 1;
      pdVar8 = pdVar8 + 1;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
    param_1 = param_1 + 3;
    local_58 = local_58 + -1;
  } while (local_58 != 0);
  return;
}


