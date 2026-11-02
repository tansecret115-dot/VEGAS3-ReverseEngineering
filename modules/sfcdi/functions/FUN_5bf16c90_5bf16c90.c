/* Module: sfcdi.dll
   Function: FUN_5bf16c90
   Address: 5bf16c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16c90(uchar *param_1,uint param_2,int param_3)

{
  BYTE *pBVar1;
  uint local_c;
  int local_8;
  int local_4;
  
  FUN_5bf2b5e0(&local_c,param_2);
  if ((param_3 != 0) && (local_4 != 0)) {
    local_8 = local_8 + 1;
  }
  if (local_c == 0) {
    pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xe7);
    FUN_5bf25750(param_1,pBVar1);
    return;
  }
  if (local_8 == 0) {
    pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xe6);
    FUN_5bf25750(param_1,pBVar1);
    return;
  }
  pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xe5);
  FUN_5bf25750(param_1,pBVar1);
  return;
}


