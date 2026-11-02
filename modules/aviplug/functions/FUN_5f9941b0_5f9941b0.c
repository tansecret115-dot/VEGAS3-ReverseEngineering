/* Module: aviplug.dll
   Function: FUN_5f9941b0
   Address: 5f9941b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9941b0(int param_1,uint param_2,double *param_3,int param_4,double *param_5,int param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0x20) && (param_1 != 0x21)) {
    return 0;
  }
  iVar1 = 0;
  iVar2 = 0;
  if (param_7 != 0) {
    iVar2 = *(int *)(param_7 + 0x1d5c);
  }
  if (param_1 == 0x20) {
    if (iVar2 != 0) {
      iVar2 = FUN_5f9981a0(param_2,(float *)param_3,param_4,(float *)param_5,param_6,param_7,1);
      return iVar2;
    }
    iVar1 = FUN_5f9981a0(param_2,(float *)param_3,param_4,(float *)param_5,param_6,param_7,0);
  }
  else if (param_1 == 0x21) {
    if (iVar2 != 0) {
      iVar2 = FUN_5f998610(param_2,param_3,param_4,param_5,param_6,param_7,1);
      return iVar2;
    }
    iVar2 = FUN_5f998610(param_2,param_3,param_4,param_5,param_6,param_7,0);
    return iVar2;
  }
  return iVar1;
}


