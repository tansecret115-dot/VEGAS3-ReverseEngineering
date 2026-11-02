/* Module: vegas30.exe
   Function: FUN_00528600
   Address: 00528600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528600(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = (*(uint *)(param_2 + 0x114) ^ *param_1) & 1 ^ *param_1;
  param_1[1] = *(uint *)(param_2 + 0x118);
  return;
}


