/* Module: qt4plug.dll
   Function: FUN_5f516510
   Address: 5f516510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f516510(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                int *param_5,int param_6,uint param_7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_5f514050(param_2);
  FUN_5f57a690();
  FUN_5f57a690();
  FUN_5f5779b0();
  sVar1 = FUN_5f575c90();
  if (sVar1 != 0) {
    return -0x7fffbffb;
  }
  uVar2 = FUN_5f577a50();
  sVar1 = FUN_5f575c90();
  if (sVar1 == 0) {
    sVar1 = FUN_5f5766b0();
    if (sVar1 == 0) {
      iVar3 = FUN_5f516640(uVar2,(int)param_2,param_3,param_4,param_5,param_6,param_7);
      sVar1 = FUN_5f5766d0();
      if (sVar1 == 0) {
        FUN_5f5765b0();
        FUN_5f577970();
      }
      return iVar3;
    }
  }
  return -0x7fffbffb;
}


