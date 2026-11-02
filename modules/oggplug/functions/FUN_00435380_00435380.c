/* Module: oggplug.dll
   Function: FUN_00435380
   Address: 00435380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl FUN_00435380(int param_1,int param_2)

{
  uint uVar1;
  uint *_Memory;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_90;
  uint local_88 [34];
  
  _Memory = malloc(param_2 * 4);
  puVar6 = local_88;
  for (iVar4 = 0x21; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
  }
  local_90 = 0;
  if (0 < param_2) {
    local_88[0] = param_1 - (int)_Memory;
    uVar3 = param_1 - (int)_Memory;
    puVar6 = _Memory;
    do {
      iVar4 = *(int *)(uVar3 + (int)puVar6);
      if (0 < iVar4) {
        uVar3 = local_88[iVar4 + 1];
        puVar2 = local_88 + iVar4 + 1;
        if ((iVar4 < 0x20) && ((int)uVar3 >> ((byte)iVar4 & 0x1f) != 0)) {
          free(_Memory);
          return (uint *)0x0;
        }
        *puVar6 = uVar3;
        iVar5 = iVar4;
        do {
          if ((*puVar2 & 1) != 0) {
            if (iVar5 == 1) {
              local_88[2] = local_88[2] + 1;
            }
            else {
              local_88[iVar5 + 1] = local_88[iVar5] << 1;
            }
            break;
          }
          iVar5 = iVar5 + -1;
          *puVar2 = *puVar2 + 1;
          puVar2 = puVar2 + -1;
        } while (0 < iVar5);
        iVar5 = iVar4 + 1;
        if (iVar5 < 0x21) {
          puVar2 = local_88 + iVar4 + 2;
          do {
            uVar1 = *puVar2;
            if ((int)uVar1 >> 1 != uVar3) break;
            *puVar2 = puVar2[-1] << 1;
            iVar5 = iVar5 + 1;
            puVar2 = puVar2 + 1;
            uVar3 = uVar1;
          } while (iVar5 < 0x21);
        }
      }
      puVar6 = puVar6 + 1;
      local_90 = local_90 + 1;
      uVar3 = local_88[0];
    } while (local_90 < param_2);
    if (0 < param_2) {
      local_90 = param_2;
      puVar6 = _Memory;
      do {
        iVar4 = *(int *)((int)puVar6 + (param_1 - (int)_Memory));
        uVar3 = 0;
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            uVar3 = uVar3 * 2 | (int)*puVar6 >> ((byte)iVar5 & 0x1f) & 1U;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
        local_90 = local_90 + -1;
      } while (local_90 != 0);
    }
  }
  return _Memory;
}


