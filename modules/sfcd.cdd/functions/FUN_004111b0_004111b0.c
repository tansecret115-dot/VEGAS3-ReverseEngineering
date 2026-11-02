/* Module: sfcd.cdd
   Function: FUN_004111b0
   Address: 004111b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004111b0(HSFCD__ *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x10;
  local_c._0_2_ = CONCAT11(2,param_3);
  local_c = (uint)CONCAT12(param_4,(undefined2)local_c);
  FUN_00419870(param_1,&local_8,&local_c,4);
  return;
}


