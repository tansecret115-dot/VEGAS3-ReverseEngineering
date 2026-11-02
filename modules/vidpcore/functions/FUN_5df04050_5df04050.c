/* Module: vidpcore.dll
   Function: FUN_5df04050
   Address: 5df04050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5df04050(int param_1,double *param_2,int param_3)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  float10 fVar8;
  int local_18;
  
  iVar6 = 0;
  local_18 = 0;
  dVar1 = _DAT_5df18830 / SQRT((double)param_1);
  if (param_3 == -1) {
    param_3 = rand();
    param_3 = param_3 * 0x1e240;
  }
  uVar3 = FUN_5ded1800(param_3);
  iVar4 = iVar6;
  pdVar7 = param_2;
  if (0 < param_1) {
    do {
      bVar2 = false;
      fVar8 = (float10)FUN_5df04000(uVar3);
      *pdVar7 = (double)fVar8;
      fVar8 = (float10)FUN_5df04000(uVar3);
      pdVar7[1] = (double)fVar8;
      iVar4 = 0;
      if (0 < iVar6) {
        do {
          if (SQRT((pdVar7[1] - param_2[iVar4 * 0x2b + 1]) * (pdVar7[1] - param_2[iVar4 * 0x2b + 1])
                   + (*pdVar7 - param_2[iVar4 * 0x2b]) * (*pdVar7 - param_2[iVar4 * 0x2b])) <= dVar1
             ) {
            bVar2 = true;
            iVar4 = iVar6;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar6);
      }
      local_18 = local_18 + 1;
      iVar4 = iVar6;
      if (param_1 * 0x32 <= local_18) {
        if (iVar6 < param_1) {
          iVar5 = param_1 - iVar6;
          iVar4 = iVar6 + iVar5;
          param_2 = param_2 + iVar6 * 0x2b;
          do {
            fVar8 = (float10)FUN_5df04000(uVar3);
            *param_2 = (double)fVar8;
            fVar8 = (float10)FUN_5df04000(uVar3);
            param_2[1] = (double)fVar8;
            param_2 = param_2 + 0x2b;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        break;
      }
      if (!bVar2) {
        iVar4 = iVar6 + 1;
        pdVar7 = pdVar7 + 0x2b;
      }
      iVar6 = iVar4;
    } while (iVar4 < param_1);
  }
  FUN_5ded17e0(uVar3);
  return iVar4 == param_1 + -1;
}


