/* Module: vidcap30.exe
   Function: FUN_0043cf80
   Address: 0043cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043cf80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = _SfGetUIFont_4(100);
  uVar2 = _SfGetUIFont_4(0x68);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar3 = FUN_00453860(*(undefined4 *)(param_1 + 8),500,0x10000000,0x20,&local_24);
  *(undefined4 *)(param_1 + 0x13bc) = uVar3;
  FUN_00453960(uVar3,0x60c,0,DAT_005bb9a4);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x60c,1,DAT_005bb9a8);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x60c,2,DAT_005bb9ac);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x30,uVar1,0);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x30,uVar2,1);
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x60f,0,*(undefined4 *)(DAT_005ba4c0 + 0x98));
  local_14 = 0x9cdc;
  local_8 = 0x42;
  local_4 = 0;
  local_10 = "Capture";
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x601,0xffffffff,&local_14);
  local_14 = 0x9cdd;
  local_8 = 0x42;
  local_4 = 0;
  local_10 = "Advanced Capture";
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x601,0xffffffff,&local_14);
  local_14 = 0x9cde;
  local_8 = 0x43;
  local_4 = 0;
  local_10 = "Print to Tape";
  FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x601,0xffffffff,&local_14);
  uVar1 = FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x606,0,0);
  *(undefined4 *)(param_1 + 0x1428) = uVar1;
  return;
}


