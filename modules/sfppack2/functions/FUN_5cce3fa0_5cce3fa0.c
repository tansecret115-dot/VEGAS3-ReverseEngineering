/* Module: sfppack2.dll
   Function: FUN_5cce3fa0
   Address: 5cce3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cce3fa0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_5cce3ee0(param_3);
  iVar2 = MulDiv(0x800,0xb4,25000);
  iVar7 = 0;
  if ((param_4 == 0xfa) || (param_4 == -0xfa)) {
    iVar4 = 0x2000;
  }
  else {
    uVar3 = MulDiv(param_4,0x800,0xfa);
    iVar4 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  }
  if (iVar1 < param_2) {
    iVar6 = param_2 - iVar1;
    piVar5 = (int *)(param_1 + iVar1 * 4);
    do {
      iVar1 = iVar7;
      if (param_4 < 0) {
        iVar1 = -iVar7;
      }
      *piVar5 = *piVar5 + iVar1;
      if (iVar7 < iVar4) {
        iVar7 = iVar7 + iVar2;
      }
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


