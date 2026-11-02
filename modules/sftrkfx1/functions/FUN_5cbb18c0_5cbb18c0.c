/* Module: sftrkfx1.dll
   Function: FUN_5cbb18c0
   Address: 5cbb18c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb18c0(int param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int nNumber;
  uint nDenominator;
  int nNumber_00;
  
  iVar1 = FUN_5cbb16e0((int)param_3);
  iVar2 = MulDiv(0x800,param_4 * 0x36,15000);
  if ((param_5 == 0x96) || (param_5 == -0x96)) {
    nNumber = 0x803;
  }
  else {
    uVar3 = MulDiv(param_5,0x800,0x96);
    nNumber = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  }
  iVar6 = nNumber / iVar2 + iVar1;
  nDenominator = iVar6 - iVar1;
  iVar1 = iVar1 - (int)nDenominator / 2;
  uVar3 = nDenominator & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  iVar6 = uVar3 + (int)nDenominator / 2 + iVar6;
  if (param_5 < 0) {
    nNumber = -nNumber;
  }
  iVar7 = nNumber;
  param_4 = nDenominator;
  if (param_5 == -0x96) {
    param_4 = 0;
    iVar6 = iVar6 - nDenominator;
    iVar7 = nNumber / 2;
  }
  nNumber_00 = -nDenominator;
  if (nNumber_00 < (int)param_4) {
    param_3 = (int *)(param_1 + iVar1 * 4);
    do {
      iVar4 = MulDiv(nNumber_00,nNumber_00,nDenominator);
      if ((-1 < iVar1) && (iVar1 < 0x3e9)) {
        iVar4 = MulDiv(nNumber,iVar4 + nNumber_00 * 2 + nDenominator,(iVar4 + nDenominator) * 2);
        *param_3 = *param_3 + iVar4;
      }
      nNumber_00 = nNumber_00 + 1;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 1;
    } while (nNumber_00 < (int)param_4);
  }
  if (iVar6 < 0x3e9) {
    piVar5 = (int *)(param_1 + iVar6 * 4);
    iVar6 = 0x3e9 - iVar6;
    do {
      *piVar5 = *piVar5 + iVar7;
      if ((nNumber * 4 < iVar7) && (param_5 == -0x96)) {
        iVar7 = iVar7 - iVar2;
      }
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


