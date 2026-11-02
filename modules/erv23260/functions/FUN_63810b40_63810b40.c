/* Module: erv23260.dll
   Function: FUN_63810b40
   Address: 63810b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63810b40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  puVar5 = *(undefined4 **)(param_1 + 8);
  local_8 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    do {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x124) != 0) {
        do {
          iVar4 = 6;
          puVar1 = puVar5;
          do {
            *puVar2 = puVar1[2];
            puVar2[1] = puVar1[3];
            puVar2 = puVar2 + 2;
            iVar4 = iVar4 + -1;
            puVar1 = puVar1 + 2;
          } while (iVar4 != 0);
          puVar5 = puVar5 + 0x1f;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x124));
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x128));
  }
  return;
}


