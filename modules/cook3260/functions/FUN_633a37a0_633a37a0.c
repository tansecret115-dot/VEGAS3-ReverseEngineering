/* Module: cook3260.dll
   Function: FUN_633a37a0
   Address: 633a37a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a37a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  puVar1 = (undefined4 *)(param_1 + 0xa840);
  puVar4 = (undefined4 *)(param_1 + 0xa820);
  puVar3 = (undefined4 *)(param_1 + 0x4820);
  local_8 = 2;
  do {
    puVar5 = puVar3;
    for (iVar2 = 0xc00; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *puVar4 = 0x3f800000;
    puVar4[1] = 0x3f800000;
    puVar4[2] = 0x3f800000;
    puVar4[3] = 0x3f800000;
    iVar2 = 2;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x11;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar4 = puVar4 + 4;
    puVar3 = puVar3 + 0xc00;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


