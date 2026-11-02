/* Module: sfs4rw.dll
   Function: FUN_0041bc00
   Address: 0041bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bc00(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_004171a0((int)param_2,local_18);
  FUN_00417180(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0041b960(param_1,local_18,param_3,param_4);
  return;
}


