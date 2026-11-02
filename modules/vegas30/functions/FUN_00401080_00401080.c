/* Module: vegas30.exe
   Function: FUN_00401080
   Address: 00401080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401080(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *local_c8 [4];
  char *local_b8;
  undefined *local_b4;
  undefined *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  char *local_a4;
  char *local_a0;
  undefined1 *local_9c;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [8];
  undefined1 local_74 [52];
  undefined1 local_40 [64];
  
  ppuVar1 = local_c8;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar1 = (undefined *)0x0;
    ppuVar1 = ppuVar1 + 1;
  }
  local_40[0] = 0;
  local_c8[0] = (undefined *)0x0;
  uVar2 = FUN_0043ce00(2);
  local_80 = FUN_004014b0(uVar2,local_7c);
  local_c8[2] = &DAT_00647210;
  local_b8 = "Copyright (C) 1997-2001 Sonic Foundry, Inc.";
  local_c8[3] = &DAT_006473b0;
  local_b4 = &DAT_00647290;
  local_b0 = &DAT_00647310;
  iVar3 = FUN_00605ba0(&DAT_00647390);
  local_ac = &DAT_0060f98c;
  if (iVar3 == 0) {
    local_ac = &DAT_00647390;
  }
  FUN_005fed00(local_74,0x32);
  local_9c = local_74;
  local_a0 = "http://sonicfoundry.com/";
  local_a4 = "http://sonicfoundry.com/";
  local_a8 = local_40;
  local_84 = 0x103;
  _SfAboutBox_12(param_1,local_c8,0x54);
  return;
}


