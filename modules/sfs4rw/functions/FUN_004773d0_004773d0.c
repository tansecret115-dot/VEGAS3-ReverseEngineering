/* Module: sfs4rw.dll
   Function: FUN_004773d0
   Address: 004773d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004773d0(int *param_1,int param_2,uint param_3)

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
    FUN_00475ad0(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_00475b00((int)param_1,"Duplicate tIME chunk");
    FUN_00475d40(param_1,param_3);
    return;
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  if (param_3 != 7) {
    FUN_00475b00((int)param_1,"Incorrect tIME chunk length");
    FUN_00475d40(param_1,param_3);
    return;
  }
  FUN_00475d10(param_1,local_10,7);
  iVar1 = FUN_00475d40(param_1,0);
  if (iVar1 == 0) {
    local_4 = local_c;
    local_2 = local_a;
    local_3 = local_b;
    local_5 = local_d;
    local_6 = local_e;
    iVar1 = FUN_00475cf0(local_10);
    local_8 = (undefined2)iVar1;
    FUN_0044dc00((int)param_1,param_2,(undefined4 *)&local_8);
  }
  return;
}


