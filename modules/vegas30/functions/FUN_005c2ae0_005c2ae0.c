/* Module: vegas30.exe
   Function: FUN_005c2ae0
   Address: 005c2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c2ae0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_40 [4];
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_40[2] = *(undefined4 *)(param_1 + 0xc);
  local_40[1] = *(int *)(param_1 + 4);
  local_40[3] = *(uint *)(param_1 + 0x8c) >> 7 & 1;
  local_30 = *(uint *)(param_1 + 0x8c) >> 4 & 1;
  local_40[0] = 0x40;
  if (local_40[1] == 3) {
    local_28 = *(undefined4 *)(param_1 + 0x44);
    local_24 = *(undefined4 *)(param_1 + 0x60);
    local_10 = 0;
    local_20 = *(undefined4 *)(param_1 + 0x68);
    local_c = 0;
    local_1c = *(undefined4 *)(param_1 + 0x6c);
    local_18 = *(undefined4 *)(param_1 + 0x70);
    local_8 = *(undefined4 *)(param_1 + 0x50);
    local_14 = *(undefined4 *)(param_1 + 0x74);
    local_4 = *(undefined4 *)(param_1 + 0x54);
  }
  (**(code **)(*param_2 + 0x10))(param_2,local_40,0x40,0);
  return;
}


