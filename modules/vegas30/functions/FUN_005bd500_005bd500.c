/* Module: vegas30.exe
   Function: FUN_005bd500
   Address: 005bd500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bd500(uint *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar1 = local_48;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_48[2] = param_1[1];
  local_48[1] = *param_1 & 7;
  local_38 = param_1[3];
  local_48[3] = param_1[2];
  local_30 = param_1[5];
  local_34 = param_1[4];
  local_28 = param_1[7];
  local_2c = param_1[6];
  local_1c = param_1[9];
  local_20 = param_1[8];
  local_14 = param_1[0xb];
  local_18 = param_1[10];
  local_c = param_1[0xd];
  local_10 = param_1[0xc];
  local_4 = param_1[0xf];
  local_8 = param_1[0xe];
  local_48[0] = 0x48;
  (**(code **)(*param_2 + 0x10))(param_2,local_48,0x48,0);
  return;
}


