/* Module: sfcd.cdd
   Function: FUN_00416980
   Address: 00416980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416980(HSFCD__ *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_6c;
  undefined4 local_68;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  
  local_6c = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x10;
  local_68 = 0x231;
  uVar1 = cdr_GetSpeed(param_1,1);
  if (uVar1 != 0xffff) {
    if ((uVar1 & 1) != 0) {
      local_68 = 0x10000231;
    }
    if ((uVar1 & 2) == 0) goto LAB_00416a04;
  }
  local_68 = CONCAT13(0x20,(undefined3)local_68);
LAB_00416a04:
  iVar2 = cdr_GetTestMode(param_1);
  if (iVar2 != 0) {
    local_68 = local_68 | 0x1000000;
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x10;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = local_6c;
  local_1c[3] = local_68;
  local_18 = 0x10;
  FUN_00415eb0((undefined4 *)param_1,local_64);
  return;
}


