/* Module: sfcd.cdd
   Function: FUN_00411130
   Address: 00411130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411130(HSFCD__ *param_1,undefined4 param_2)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x10;
  FUN_00419870(param_1,&local_8,(undefined4 *)0x0,0);
  return;
}


