/* Module: sfxpfx2.dll
   Function: FUN_5c8d9bc0
   Address: 5c8d9bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d9bc0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_5c8d5170((int)param_2,local_18);
  FUN_5c8d5150(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_5c8d9920(param_1,local_18,param_3,param_4);
  return;
}


