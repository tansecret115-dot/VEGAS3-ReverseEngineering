/* Module: vidcap30.exe
   Function: FUN_00579990
   Address: 00579990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00579990(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [12];
  uint local_c [3];
  
  FUN_00575260(param_2,local_18);
  FUN_00575240(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_005796f0(param_1,local_18,param_3,param_4);
  return;
}


