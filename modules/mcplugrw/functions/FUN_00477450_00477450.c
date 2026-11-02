/* Module: mcplugrw.dll
   Function: FUN_00477450
   Address: 00477450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477450(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte local_10 [2];
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00475b50(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_00475b80((int)param_1,"Duplicate tIME chunk");
    FUN_00475dc0(param_1,param_3);
    return;
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  if (param_3 != 7) {
    FUN_00475b80((int)param_1,"Incorrect tIME chunk length");
    FUN_00475dc0(param_1,param_3);
    return;
  }
  FUN_00475d90(param_1,local_10,7);
  iVar1 = FUN_00475dc0(param_1,0);
  if (iVar1 == 0) {
    local_4 = local_c;
    local_2 = local_a;
    local_3 = local_b;
    local_5 = local_d;
    local_6 = local_e;
    iVar1 = FUN_00475d70(local_10);
    local_8 = (undefined2)iVar1;
    FUN_0044dc80((int)param_1,param_2,(undefined4 *)&local_8);
  }
  return;
}


