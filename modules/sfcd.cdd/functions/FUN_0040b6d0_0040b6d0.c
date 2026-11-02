/* Module: sfcd.cdd
   Function: FUN_0040b6d0
   Address: 0040b6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b6d0(HSFCD__ *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int local_6c;
  uint local_68;
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
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0;
    if ((uVar2 & 2) != 0) {
      uVar3 = 0x10;
    }
    if ((uVar2 & 4) != 0) {
      uVar3 = 0x20;
    }
  }
  local_68 = CONCAT13(uVar3,0x231) | 0x1000000;
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x10;
  local_10 = 7000;
  *local_1c = 0x8000000;
  local_1c[1] = 0;
  local_1c[2] = local_6c;
  local_1c[3] = local_68;
  local_18 = 0x10;
  uVar2 = FUN_0040aaa0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x4ba,(uchar *)"cdr100.cpp");
  return uVar2;
}


