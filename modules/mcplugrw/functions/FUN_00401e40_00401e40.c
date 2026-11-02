/* Module: mcplugrw.dll
   Function: FUN_00401e40
   Address: 00401e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401e40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_40 [11];
  undefined4 local_14;
  
  puVar1 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_14 = param_2;
  (**(code **)(*param_1 + 0x3c))(param_1,param_3,param_4,local_40);
  return;
}


