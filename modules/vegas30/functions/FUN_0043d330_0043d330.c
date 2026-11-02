/* Module: vegas30.exe
   Function: FUN_0043d330
   Address: 0043d330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d330(FILE *param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  int local_4;
  
  local_2c = DAT_00611df8;
  local_28 = param_2 + 0x24;
  local_24 = DAT_00611dec;
  local_20 = DAT_00611df0;
  local_18 = *param_3;
  local_16 = param_3[1];
  local_14 = *(undefined4 *)(param_3 + 2);
  local_10 = *(undefined4 *)(param_3 + 4);
  local_c = param_3[6];
  local_a = param_3[7];
  local_1c = 0x10;
  local_8 = DAT_00611de4;
  local_4 = param_2;
  iVar1 = fseek(param_1,0,0);
  if (iVar1 == 0) {
    sVar2 = fwrite(&local_2c,1,0x2c,param_1);
    if (sVar2 == 0x2c) {
      return 0;
    }
  }
  return 0x8004e009;
}


