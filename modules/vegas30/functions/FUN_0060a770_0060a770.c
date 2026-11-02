/* Module: vegas30.exe
   Function: FUN_0060a770
   Address: 0060a770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0060a770(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [12];
  uint local_c [3];
  
  FUN_00605d10(param_2,local_18);
  FUN_00605cf0(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0060a4d0(param_1,local_18,param_3,param_4);
  return;
}


