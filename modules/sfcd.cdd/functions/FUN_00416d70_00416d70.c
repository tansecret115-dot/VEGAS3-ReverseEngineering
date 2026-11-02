/* Module: sfcd.cdd
   Function: FUN_00416d70
   Address: 00416d70
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00416d70(HSFCD__ *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int local_6c;
  undefined4 local_68;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x160);
  local_6c = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x10;
  uVar2 = cdr_GetSpeed(param_1,0);
  if (uVar2 != 0xffff) {
    local_68._3_1_ = 0x10;
    if ((uVar2 & 1) == 0) {
      local_68._3_1_ = 0;
    }
    if ((uVar2 & 2) != 0) {
      local_68._3_1_ = 0x20;
    }
    if ((uVar2 & 4) == 0) goto LAB_00416df5;
  }
  local_68._3_1_ = 0x40;
LAB_00416df5:
  local_68 = CONCAT13(local_68._3_1_,0x231) | 0x1000000;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x10;
  local_10 = 7000;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = local_6c;
  local_1c[3] = local_68;
  local_18 = 0x10;
  lVar3 = FUN_00415eb0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x562,(uchar *)"r1420.cpp");
  return lVar3;
}


