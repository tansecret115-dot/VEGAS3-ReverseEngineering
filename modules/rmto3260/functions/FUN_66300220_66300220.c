/* Module: rmto3260.dll
   Function: FUN_66300220
   Address: 66300220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66300220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_34 [7];
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  int *local_c;
  int local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = 6;
    puVar4 = param_2;
    do {
      uVar2 = *puVar4;
      *puVar4 = 0;
      *(undefined4 *)(((int)local_34 - (int)param_2) + (int)puVar4) = uVar2;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_8 = 0;
  local_c = &DAT_66311920;
  puVar4 = param_1;
  do {
    iVar3 = *local_c;
    if (local_8 < iVar3) {
      puVar1 = (undefined4 *)((int)param_1 + iVar3 * 0xe);
      uVar2 = *puVar1;
      local_18 = puVar1[1];
      local_14 = puVar1[2];
      local_10 = *(undefined2 *)(puVar1 + 3);
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1[2] = puVar4[2];
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar4 + 3);
      *puVar4 = uVar2;
      puVar4[1] = local_18;
      puVar4[2] = local_14;
      *(undefined2 *)(puVar4 + 3) = local_10;
    }
    if ((param_2 != (undefined4 *)0x0) && (local_34[local_8 >> 4] != 0)) {
      param_2[iVar3 >> 4] = param_2[iVar3 >> 4] | 1 << ((byte)iVar3 & 0xf);
    }
    local_c = local_c + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 0xe);
    local_8 = local_8 + 1;
  } while ((int)local_c < 0x66311aa0);
  return;
}


