/* Module: vidcap30.exe
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401000(undefined4 param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 *local_194 [4];
  char *local_184;
  undefined *local_180;
  undefined *local_17c;
  undefined *local_178;
  undefined1 *local_174;
  char *local_170;
  char *local_16c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [8];
  undefined1 local_140 [64];
  undefined1 local_100 [256];
  
  ppuVar1 = local_194;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar1 = (undefined1 *)0x0;
    ppuVar1 = ppuVar1 + 1;
  }
  local_140[0] = 0;
  local_194[0] = (undefined1 *)0x0;
  local_14c = FUN_00401250((-(DAT_005ba294 != 0) & 4U) + 1,local_148);
  local_194[2] = &DAT_005ba2ac;
  local_184 = "Copyright (C) 1997-2001 Sonic Foundry, Inc.";
  SfPrintF(local_100,&DAT_00586b68,"Version 3.0 (Build 63)");
  local_194[3] = local_100;
  local_16c = "http://sonicfoundry.com/";
  local_170 = "http://sonicfoundry.com/";
  local_174 = local_140;
  local_180 = &DAT_005ba32c;
  local_17c = &DAT_005ba3ac;
  local_178 = &DAT_005ba42c;
  local_150 = 3;
  _SfAboutBox_12(param_1,local_194,0x54);
  return;
}


