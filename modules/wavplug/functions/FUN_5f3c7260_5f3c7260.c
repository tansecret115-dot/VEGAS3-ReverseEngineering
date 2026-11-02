/* Module: wavplug.dll
   Function: FUN_5f3c7260
   Address: 5f3c7260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c7260(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_5f3c2b30((int)param_2,local_18);
  FUN_5f3c2b10(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_5f3c6fc0(param_1,local_18,param_3,param_4);
  return;
}


