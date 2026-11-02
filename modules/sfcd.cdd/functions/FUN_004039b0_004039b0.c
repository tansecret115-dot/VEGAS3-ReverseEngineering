/* Module: sfcd.cdd
   Function: FUN_004039b0
   Address: 004039b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004039b0(HSFCD__ *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_78 [3];
  undefined2 local_6c;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined4 local_68;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  int *local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0x160);
  local_68 = 0;
  local_78[0] = 0x8000000;
  local_78[1] = 0;
  local_78[2] = (uint)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x10;
  _local_6c = 0x623;
  uVar2 = cdr_GetSpeed(param_1,0);
  if (uVar2 == 0xffff) {
    _local_6c = _local_6c & 0xffff;
  }
  else {
    if ((uVar2 & 1) != 0) {
      _local_6c = CONCAT12(1,local_6c);
      _local_6c = (uint)_local_6c;
    }
    if ((uVar2 & 2) != 0) {
      _local_6c = CONCAT12(2,local_6c);
      _local_6c = (uint)_local_6c;
    }
  }
  _local_6c = CONCAT13(1,_local_6c);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x14;
  piVar4 = local_78;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *local_1c = *piVar4;
    piVar4 = piVar4 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x14;
  uVar2 = FUN_00402d20((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x4a5,(uchar *)"cdd2000.cpp");
  return uVar2;
}


