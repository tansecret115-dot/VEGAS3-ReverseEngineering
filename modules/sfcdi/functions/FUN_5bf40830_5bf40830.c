/* Module: sfcdi.dll
   Function: FUN_5bf40830
   Address: 5bf40830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf40830(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = param_3;
  local_c = param_2;
  local_8 = param_4;
  iVar1 = FUN_5bf29ae0(*(int **)(param_1 + 0x14),-1,&local_c,1);
  if ((-1 < iVar1) && (param_2 != 0)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_4;
  }
  return;
}


