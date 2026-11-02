/* Module: sfcd.cdd
   Function: FUN_0040cb40
   Address: 0040cb40
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040cb40(HSFCD__ *param_1,undefined4 *param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_84 [3];
  undefined1 local_78 [6];
  undefined1 local_72;
  undefined1 local_70 [12];
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  lVar1 = FUN_0040cb00(param_1,local_84);
  if (lVar1 == 0) {
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
    local_5b = 0x10;
    local_58 = 0x24;
    local_10 = 7000;
    *local_1c = 0;
    local_72 = param_3;
    FUN_0041f9a0(local_78,1);
    FUN_0041f9a0(local_70,2);
    puVar3 = local_84;
    for (iVar2 = 8; local_1c = local_1c + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *local_1c = *puVar3;
      puVar3 = puVar3 + 1;
    }
    local_18 = 0x24;
    lVar1 = FUN_0040c8e0((undefined4 *)param_1,local_64);
    if ((lVar1 == 0) && (lVar1 = FUN_0040ca70(param_1,0x23,param_2,0x24), lVar1 == 0)) {
      FUN_0041f9a0((undefined1 *)(param_2 + 2),4);
    }
  }
  return lVar1;
}


