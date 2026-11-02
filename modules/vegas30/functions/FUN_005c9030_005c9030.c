/* Module: vegas30.exe
   Function: FUN_005c9030
   Address: 005c9030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c9030(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  FUN_005c8e80(param_1,-(uint)(param_3 != 0) & param_2,param_2);
  if ((param_2 & 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x3c) + 1;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  return;
}


