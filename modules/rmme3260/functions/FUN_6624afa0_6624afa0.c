/* Module: rmme3260.dll
   Function: FUN_6624afa0
   Address: 6624afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624afa0(byte *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint local_70 [18];
  uint local_28 [8];
  uint local_8;
  
  if ((*param_1 & 1) == 0) {
    return 0x80070057;
  }
  uVar1 = FUN_6624f7a0((int)param_3);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x850) != 0) {
    puVar3 = *(uint **)(param_1 + 0x858);
    do {
      if (uVar1 == *puVar3) break;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x850));
  }
  puVar3 = local_70;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_70[3] = param_3[1];
  local_70[2] = param_3[2];
  local_70[0] = 0x6c;
  local_70[1] = 7;
  if ((uVar1 == 10) || (uVar1 < 5)) {
    local_28[0] = 0x20;
    FUN_6624f9c0(local_28,uVar1);
    local_70[1] = local_70[1] | 0x1000;
  }
  local_8 = (-(uint)((param_4 & 2) != 0) & 0x40) + 0x40;
  if ((param_4 & 8) == 0) {
    if ((param_4 & 0x10) == 0) {
      if ((param_4 & 0x40) == 0) {
        local_8 = local_8 | 0x800;
      }
    }
    else {
      local_8 = local_8 | 0x20000000;
    }
  }
  else {
    local_8 = (uint)CONCAT11(0x40,(char)local_8);
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x86c) + 0x18))
                    (*(int **)(param_1 + 0x86c),local_70,param_2 + 0x10e,0);
  if (iVar4 == 0) {
    param_2[0x10c] = uVar1;
    param_2[1] = param_5;
    *param_2 = param_4 | 0x100;
    puVar3 = param_2 + 2;
    for (iVar4 = 0x10a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_66250b60(*(void **)(param_1 + 0x860),param_2);
    FUN_6624a320(param_1,*(int *)(param_1 + 4),0x311);
    return 0;
  }
  param_2[0x10e] = 0;
  return 0x80004005;
}


