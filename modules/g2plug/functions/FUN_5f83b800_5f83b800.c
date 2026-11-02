/* Module: g2plug.dll
   Function: FUN_5f83b800
   Address: 5f83b800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f83b800(int param_1,uint param_2,LPBYTE param_3,uint param_4)

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
    uVar1 = FUN_5f8178e0(DAT_5f877520);
    if (3 < param_4) {
      *(undefined4 *)param_3 = uVar1;
      return 4;
    }
  }
  else if (*(int *)(param_1 + 0x34) != 0) {
    uVar2 = FUN_5f862ed0(*(int *)(param_1 + 0x34),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


