/* Module: sfcd.cdd
   Function: FUN_0041ddf0
   Address: 0041ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041ddf0(undefined4 *param_1)

{
  int iVar1;
  _scsicommand local_64 [10];
  undefined1 local_5a;
  undefined1 local_58;
  int local_1c;
  undefined4 local_18;
  
  FUN_004194f0(param_1);
  SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0x1a);
  local_5a = 0x3f;
  local_58 = 0xff;
  local_18 = 0xff;
  iVar1 = FUN_004194d0(param_1,local_64);
  if (iVar1 < 0) {
    return false;
  }
  return *(char *)(local_1c + 3) == '\b';
}


