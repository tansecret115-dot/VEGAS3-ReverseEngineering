/* Module: ednt3260.dll
   Function: FUN_630f3cb0
   Address: 630f3cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f3cb0(double *param_1,short param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  uint local_8;
  
  if (0x400 < param_2) {
    FUN_630f92d0();
  }
  iVar6 = (int)param_2;
  _param_2 = 1;
  for (iVar6 = iVar6 / 2; 0 < iVar6; iVar6 = iVar6 >> 1) {
    pdVar10 = (double *)&DAT_630fe078;
    local_8 = 0;
    pdVar7 = param_1;
    pdVar9 = param_1;
    if (0 < _param_2) {
      do {
        pdVar9 = pdVar9 + iVar6 * 2;
        uVar8 = (int)local_8 >> 0x1f;
        dVar1 = *pdVar10;
        if (((local_8 ^ uVar8) - uVar8 & 1 ^ uVar8) == uVar8) {
          local_18 = *(undefined4 *)(pdVar10 + 1);
          uStack_14 = *(undefined4 *)((int)pdVar10 + 0xc);
        }
        else {
          local_18 = *(undefined4 *)(pdVar10 + -1);
          uStack_14 = *(undefined4 *)((int)pdVar10 + -4);
          dVar1 = -dVar1;
        }
        local_10 = iVar6;
        if (0 < iVar6) {
          do {
            dVar2 = *pdVar7;
            dVar5 = pdVar7[1];
            dVar4 = (dVar1 * *pdVar9 + dVar2) - (double)CONCAT44(uStack_14,local_18) * pdVar9[1];
            dVar3 = (double)CONCAT44(uStack_14,local_18) * *pdVar9 + dVar1 * pdVar9[1] + pdVar7[1];
            *pdVar7 = dVar4;
            pdVar7[1] = dVar3;
            pdVar7 = pdVar7 + 2;
            *pdVar9 = (dVar2 + dVar2) - dVar4;
            pdVar9[1] = (dVar5 + dVar5) - dVar3;
            pdVar9 = pdVar9 + 2;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
        pdVar7 = pdVar7 + iVar6 * 2;
        pdVar10 = pdVar10 + 1;
        local_8 = local_8 + 1;
      } while ((int)local_8 < _param_2);
    }
    _param_2 = _param_2 << 1;
  }
  return;
}


