/* Module: vegas30.exe
   Function: FUN_005583c0
   Address: 005583c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005583c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_154 [4];
  undefined4 local_150 [69];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = local_150;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_8 = 0;
  local_4 = 0;
  local_150[0] = *(undefined4 *)(param_3 + 0x40);
  local_150[1] = *(undefined4 *)(param_3 + 0x44);
  local_150[2] = *(undefined4 *)(param_3 + 0x48);
  local_3c = *(undefined4 *)(param_3 + 100);
  local_150[3] = *(undefined4 *)(param_3 + 0x4c);
  local_30 = *(undefined4 *)(param_3 + 0x58);
  local_38 = *(undefined4 *)(param_3 + 0x68);
  local_28 = *(undefined4 *)(param_3 + 0x3c);
  local_2c = *(undefined4 *)(param_3 + 0x5c);
  local_18 = *(undefined4 *)(param_3 + 0x30);
  local_20 = *(undefined4 *)(param_3 + 0x10);
  local_10 = *(undefined4 *)(param_3 + 0x14);
  local_14 = *(undefined4 *)(param_3 + 0x34);
  iVar1 = FUN_005f8fb0(local_150,local_154);
  if (iVar1 < 0) {
    SfMsgBox(param_1,0x10,"An unknown error occurred trying to save the video profile.");
  }
  return 1;
}


