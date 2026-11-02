/* Module: vegas30k.dll
   Function: FUN_011921a0
   Address: 011921a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011921a0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_011ea89c;
  param_1[1] = 0;
  param_1[3] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[5] = 0;
  param_1[4] = 0;
  puVar2 = param_1 + 6;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x206;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


