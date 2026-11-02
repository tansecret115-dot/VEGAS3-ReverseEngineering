/* Module: rmto3260.dll
   Function: FUN_66300180
   Address: 66300180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66300180(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = &DAT_66311920;
  puVar6 = param_1;
  do {
    if (local_8 < *local_c) {
      puVar1 = (undefined4 *)((int)param_1 + *local_c * 0xe);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar2 = *(undefined2 *)(puVar1 + 3);
      *puVar1 = *puVar6;
      puVar1[1] = puVar6[1];
      puVar1[2] = puVar6[2];
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar6 + 3);
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      puVar6[2] = uVar5;
      *(undefined2 *)(puVar6 + 3) = uVar2;
    }
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    puVar6 = (undefined4 *)((int)puVar6 + 0xe);
  } while ((int)local_c < 0x66311aa0);
  return;
}


