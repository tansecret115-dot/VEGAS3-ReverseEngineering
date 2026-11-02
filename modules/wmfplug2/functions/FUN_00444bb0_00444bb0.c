/* Module: wmfplug2.dll
   Function: FUN_00444bb0
   Address: 00444bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00444bb0(int param_1,uint param_2,LPBYTE param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  LPBYTE pBVar3;
  
  pBVar3 = param_3;
  for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pBVar3[0] = '\0';
    pBVar3[1] = '\0';
    pBVar3[2] = '\0';
    pBVar3[3] = '\0';
    pBVar3 = pBVar3 + 4;
  }
  for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pBVar3 = '\0';
    pBVar3 = pBVar3 + 1;
  }
  if (param_2 == 0x2711) {
    uVar1 = FUN_004200a0(DAT_00489e30);
    if (3 < param_4) {
      *(undefined4 *)param_3 = uVar1;
      return 4;
    }
  }
  else if (*(int *)(param_1 + 0x34) != 0) {
    uVar2 = FUN_00474750(*(int *)(param_1 + 0x34),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


