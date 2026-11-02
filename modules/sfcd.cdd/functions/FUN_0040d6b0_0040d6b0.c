/* Module: sfcd.cdd
   Function: FUN_0040d6b0
   Address: 0040d6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040d6b0(HSFCD__ *param_1,undefined4 param_2)

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
  if (uVar2 == 0xffff) {
    local_68._0_3_ = CONCAT12(((byte)*(undefined4 *)(iVar1 + 0x38) & 4 | 2) >> 1,0x231);
    local_68 = (uint)(uint3)local_68;
  }
  else {
    local_68 = 0x231;
    if ((uVar2 & 2) != 0) {
      local_68 = 0x10231;
    }
    if ((uVar2 & 4) != 0) {
      local_68._0_3_ = CONCAT12(3,(undefined2)local_68);
      local_68 = (uint)(uint3)local_68;
    }
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_10 = 7000;
  local_5b = 0x10;
  local_58 = 0x10;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = local_6c;
  local_1c[3] = local_68;
  local_18 = 0x10;
  lVar3 = FUN_0040c8e0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x506,(uchar *)"cdu92x.cpp");
  return lVar3;
}


