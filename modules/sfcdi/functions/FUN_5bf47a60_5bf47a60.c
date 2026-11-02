/* Module: sfcdi.dll
   Function: FUN_5bf47a60
   Address: 5bf47a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf47a60(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined4 local_4;
  
  local_4 = param_3;
  local_8 = param_5;
  local_c = param_5;
  local_7 = param_6;
  local_b = param_6;
  local_6 = param_7;
  local_a = param_7;
  local_5 = param_8;
  local_9 = param_8;
  local_18 = param_2;
  local_14 = param_4;
  iVar1 = FUN_5bf29ae0(*(int **)(param_1 + 0x1c),-1,&local_18,1);
  if ((-1 < iVar1) && (param_2 != 0)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_4;
  }
  return;
}


