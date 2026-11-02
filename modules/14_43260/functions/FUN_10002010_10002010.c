/* Module: 14_43260.dll
   Function: FUN_10002010
   Address: 10002010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_10002010(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = param_2 + 10;
  iVar2 = 0x10000;
  for (; param_2 < piVar1; param_2 = param_2 + 1) {
    iVar3 = (0x1000000 - *param_2 * *param_2 >> 0xc) * iVar2;
    iVar2 = iVar3 >> 0xc;
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 < 0x4000) {
      do {
        iVar2 = iVar2 * 4;
        iVar4 = iVar4 + 1;
      } while (iVar2 < 0x4000);
    }
    else if (0x10000 < iVar2) {
      for (iVar2 = iVar3 >> 0xe; iVar4 = iVar4 + -1, 0x10000 < iVar2; iVar2 = iVar2 >> 2) {
      }
    }
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_100020e0(iVar2);
  }
  if (0 < iVar4 + 10) {
    return (iVar3 >> ((byte)(iVar4 + 10) & 0x1f)) * param_1 >> 10;
  }
  return (iVar3 << (-(char)iVar4 - 10U & 0x1f)) * param_1 >> 10;
}


