/* Module: sfppack1.dll
   Function: FUN_5cdb7a00
   Address: 5cdb7a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdb7a00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  if (param_3 < 0x18) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  local_8 = (param_3 >> 3) * 0x20;
  param_3 = param_3 * 4 + (param_3 >> 3) * -0x20;
  if (param_3 < 0x40) {
    local_8 = local_8 + -0x40;
    param_3 = param_3 + 0x40;
  }
  iVar1 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar1 + 0x1c) = *(undefined4 *)((int)param_2 + iVar1 + 0x1c);
    *(undefined4 *)((int)param_1 + iVar1 + 0x18) = *(undefined4 *)((int)param_2 + iVar1 + 0x18);
    *(undefined4 *)((int)param_1 + iVar1 + 0x14) = *(undefined4 *)((int)param_2 + iVar1 + 0x14);
    *(undefined4 *)((int)param_1 + iVar1 + 0x10) = *(undefined4 *)((int)param_2 + iVar1 + 0x10);
    *(undefined4 *)((int)param_1 + iVar1 + 0xc) = *(undefined4 *)((int)param_2 + iVar1 + 0xc);
    *(undefined4 *)((int)param_1 + iVar1 + 8) = *(undefined4 *)((int)param_2 + iVar1 + 8);
    *(undefined4 *)((int)param_1 + iVar1 + 4) = *(undefined4 *)((int)param_2 + iVar1 + 4);
    *(undefined4 *)((int)param_1 + iVar1) = *(undefined4 *)((int)param_2 + iVar1);
    iVar1 = iVar1 + 0x20;
  } while (iVar1 < local_8);
  puVar3 = (undefined4 *)((int)param_2 + iVar1);
  puVar4 = (undefined4 *)((int)param_1 + iVar1);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


