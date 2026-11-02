/* Module: sftrkfx1.dll
   Function: FUN_5cbb1740
   Address: 5cbb1740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb1740(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int nNumber;
  int nNumber_00;
  
  iVar1 = FUN_5cbb16e0(param_3);
  iVar2 = MulDiv(0x800,param_4 * 0x36,15000);
  if ((param_5 == 0x96) || (param_5 == -0x96)) {
    nNumber = 0x803;
  }
  else {
    uVar3 = MulDiv(param_5,0x800,0x96);
    nNumber = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  }
  iVar6 = iVar1 - nNumber / iVar2;
  iVar1 = iVar1 - iVar6;
  iVar6 = iVar6 - iVar1 / 2;
  iVar7 = iVar6 + -1;
  if (param_5 < 0) {
    nNumber = -nNumber;
  }
  if (param_5 == -0x96) {
    iVar7 = iVar7 + iVar1;
    iVar8 = nNumber / 2;
    nNumber_00 = 0;
  }
  else {
    nNumber_00 = -iVar1;
    iVar8 = nNumber;
  }
  if (nNumber_00 < iVar1) {
    param_4 = nNumber_00 * 2;
    iVar6 = nNumber_00 + iVar6 + iVar1;
    piVar5 = (int *)(param_1 + iVar6 * 4);
    do {
      iVar4 = MulDiv(nNumber_00,nNumber_00,iVar1);
      if ((-1 < iVar6) && (iVar6 < 0x3e9)) {
        iVar4 = MulDiv(nNumber,(iVar4 - param_4) + iVar1,(iVar4 + iVar1) * 2);
        *piVar5 = *piVar5 + iVar4;
      }
      nNumber_00 = nNumber_00 + 1;
      param_4 = param_4 + 2;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (nNumber_00 < iVar1);
  }
  if (-1 < iVar7) {
    piVar5 = (int *)(param_1 + iVar7 * 4);
    iVar7 = iVar7 + 1;
    do {
      *piVar5 = *piVar5 + iVar8;
      if ((nNumber * 4 < iVar8) && (param_5 == -0x96)) {
        iVar8 = iVar8 - iVar2;
      }
      piVar5 = piVar5 + -1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


