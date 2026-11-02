/* Module: vegas30k.dll
   Function: FUN_01157880
   Address: 01157880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01157880(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_10 [2];
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
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    FUN_01155f80(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_01155fb0(param_1,"Duplicate tIME chunk");
    FUN_011561f0(param_1,param_3);
    return;
  }
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  if (param_3 != 7) {
    FUN_01155fb0(param_1,"Incorrect tIME chunk length");
    FUN_011561f0(param_1,param_3);
    return;
  }
  FUN_011561c0(param_1,local_10,7);
  iVar1 = FUN_011561f0(param_1,0);
  if (iVar1 == 0) {
    local_4 = local_c;
    local_2 = local_a;
    local_3 = local_b;
    local_5 = local_d;
    local_6 = local_e;
    local_8 = FUN_011561a0(local_10);
    FUN_011284e0(param_1,param_2,&local_8);
  }
  return;
}


