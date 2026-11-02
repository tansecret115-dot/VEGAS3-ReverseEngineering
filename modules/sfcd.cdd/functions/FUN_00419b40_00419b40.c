/* Module: sfcd.cdd
   Function: FUN_00419b40
   Address: 00419b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419b40(undefined4 *param_1,int param_2)

{
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  char local_58;
  
  FUN_004194f0(param_1);
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x1b);
  local_60 = 6;
  local_58 = (param_2 == 0) + '\x02';
  local_5b = 1;
  FUN_004194d0(param_1,local_64);
  return;
}


