/* Module: vfplugs.dll
   Function: FUN_004711d0
   Address: 004711d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004711d0(int param_1,double *param_2,int *param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  float10 fVar8;
  int local_18;
  
  iVar6 = 0;
  local_18 = 0;
  dVar1 = _DAT_00487590 / SQRT((double)param_1);
  if (param_3 == (int *)0xffffffff) {
    iVar3 = rand();
    param_3 = (int *)(iVar3 * 0x1e240);
  }
  puVar4 = FUN_004824d0(param_3);
  iVar3 = iVar6;
  pdVar7 = param_2;
  if (0 < param_1) {
    do {
      bVar2 = false;
      fVar8 = FUN_00471180(puVar4);
      *pdVar7 = (double)fVar8;
      fVar8 = FUN_00471180(puVar4);
      pdVar7[1] = (double)fVar8;
      iVar3 = 0;
      if (0 < iVar6) {
        do {
          if (SQRT((pdVar7[1] - param_2[iVar3 * 0x2b + 1]) * (pdVar7[1] - param_2[iVar3 * 0x2b + 1])
                   + (*pdVar7 - param_2[iVar3 * 0x2b]) * (*pdVar7 - param_2[iVar3 * 0x2b])) <= dVar1
             ) {
            bVar2 = true;
            iVar3 = iVar6;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar6);
      }
      local_18 = local_18 + 1;
      iVar3 = iVar6;
      if (param_1 * 0x32 <= local_18) {
        if (iVar6 < param_1) {
          iVar5 = param_1 - iVar6;
          iVar3 = iVar6 + iVar5;
          pdVar7 = param_2 + iVar6 * 0x2b;
          do {
            fVar8 = FUN_00471180(puVar4);
            *pdVar7 = (double)fVar8;
            fVar8 = FUN_00471180(puVar4);
            pdVar7[1] = (double)fVar8;
            pdVar7 = pdVar7 + 0x2b;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        break;
      }
      if (!bVar2) {
        iVar3 = iVar6 + 1;
        pdVar7 = pdVar7 + 0x2b;
      }
      iVar6 = iVar3;
    } while (iVar3 < param_1);
  }
  FUN_004824b0(puVar4);
  return iVar3 == param_1 + -1;
}


