/* Module: mpgaout.dll
   Function: FUN_10002010
   Address: 10002010
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10002010(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar4 = param_1[6];
  iVar2 = *(int *)(&DAT_1000c040 + (*(int *)(iVar1 + 4) + -1) * 0x3c + *(int *)(iVar1 + 0xc) * 4) /
          param_1[4];
  iVar1 = (int)ROUND(*(double *)(&DAT_1000c000 + *(int *)(iVar1 + 0x10) * 8));
  if (((iVar1 == 0x30) && (0x37 < iVar2)) || (iVar2 - 0x38U < 0x19)) {
    uVar3 = 0;
  }
  else if (((iVar1 == 0x30) || (uVar3 = 1, iVar2 < 0x60)) &&
          ((uVar3 = 3, iVar1 != 0x20 && (iVar2 < 0x31)))) {
    uVar3 = 2;
  }
  if (param_1[3] != uVar3) {
    param_1[3] = uVar3;
    if (uVar3 == 2) {
      param_1[2] = (int)&DAT_10010300;
      iVar4 = 8;
    }
    else {
      if (uVar3 < 3) {
        if (uVar3 == 1) {
          param_1[2] = (int)&DAT_1000e300;
          return 0x1e;
        }
      }
      else if (uVar3 == 3) {
        param_1[2] = (int)&DAT_10012300;
        return 0xc;
      }
      param_1[2] = (int)&DAT_1000c300;
      iVar4 = 0x1b;
    }
  }
  return iVar4;
}


