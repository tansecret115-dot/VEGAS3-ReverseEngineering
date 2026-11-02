/* Module: cook3260.dll
   Function: FUN_633a4eb0
   Address: 633a4eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a4eb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  puVar3 = (undefined4 *)(param_1 + 0x16b74);
  puVar4 = (undefined4 *)(param_1 + 0x16b14);
  puVar2 = (undefined4 *)(param_1 + 0x16b0c);
  local_8 = 2;
  do {
    *puVar2 = 0;
    puVar5 = puVar4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = puVar3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 0xc;
    puVar3 = puVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


