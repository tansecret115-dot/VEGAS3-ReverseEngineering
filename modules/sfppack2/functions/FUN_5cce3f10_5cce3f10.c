/* Module: sfppack2.dll
   Function: FUN_5cce3f10
   Address: 5cce3f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cce3f10(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = FUN_5cce3ee0(param_3);
  iVar3 = MulDiv(0x800,0xb4,25000);
  iVar7 = 0;
  if ((param_4 == 0xfa) || (param_4 == -0xfa)) {
    iVar5 = 0x2000;
  }
  else {
    uVar4 = MulDiv(param_4,0x800,0xfa);
    iVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  }
  if (-1 < iVar2) {
    piVar6 = (int *)(param_1 + iVar2 * 4);
    iVar2 = iVar2 + 1;
    do {
      iVar1 = iVar7;
      if (param_4 < 0) {
        iVar1 = -iVar7;
      }
      *piVar6 = *piVar6 + iVar1;
      if (iVar7 < iVar5) {
        iVar7 = iVar7 + iVar3;
      }
      piVar6 = piVar6 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


