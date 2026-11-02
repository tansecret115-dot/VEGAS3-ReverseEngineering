/* Module: vidcap30.exe
   Function: FUN_0045f9e0
   Address: 0045f9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0045f9e0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_20[2] = param_1[2];
  local_20[3] = param_1[3];
  local_10 = param_1[4];
  local_c = param_1[5];
  local_8 = *param_1;
  local_20[0] = 0x20;
  (**(code **)(*param_2 + 0x10))(param_2,local_20,0x20,0);
  return;
}


