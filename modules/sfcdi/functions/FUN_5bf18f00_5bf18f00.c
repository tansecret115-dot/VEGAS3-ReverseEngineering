/* Module: sfcdi.dll
   Function: FUN_5bf18f00
   Address: 5bf18f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf18f00(int param_1,uint param_2,short *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_6 >> 1;
  uVar1 = param_4 >> 1;
  iVar6 = param_1 + ((param_2 >> 1) - param_5) * 2;
  if ((uVar7 < 2) || ((uVar1 - param_5) - 1 <= uVar7)) {
    uVar7 = 0;
  }
  else {
    psVar3 = param_3 + uVar7;
    iVar5 = iVar6 - (int)psVar3;
    param_4 = uVar7;
    do {
      uVar4 = 0;
      psVar2 = psVar3;
      if (param_5 == 0) {
LAB_5bf18f77:
        return param_4 * 2;
      }
      while (*(short *)(iVar5 + (int)psVar2) == *psVar2) {
        psVar2 = psVar2 + 1;
        uVar4 = uVar4 + 1;
        if (param_5 <= uVar4) goto LAB_5bf18f77;
      }
      psVar3 = psVar3 + -1;
      param_4 = param_4 - 1;
      iVar5 = iVar5 + 2;
    } while (param_4 != 0);
    uVar7 = uVar7 + 1;
    param_3 = param_3 + uVar7;
  }
  uVar1 = uVar1 - param_5;
  if (uVar7 < uVar1) {
    iVar6 = iVar6 - (int)param_3;
    do {
      uVar4 = 0;
      psVar3 = param_3;
      if (param_5 == 0) {
LAB_5bf18fd6:
        return uVar7 * 2;
      }
      while (*(short *)(iVar6 + (int)psVar3) == *psVar3) {
        psVar3 = psVar3 + 1;
        uVar4 = uVar4 + 1;
        if (param_5 <= uVar4) goto LAB_5bf18fd6;
      }
      uVar7 = uVar7 + 1;
      param_3 = param_3 + 1;
      iVar6 = iVar6 + -2;
    } while (uVar7 < uVar1);
  }
  return -1;
}


