/* Module: ednt3260.dll
   Function: FUN_630f6f90
   Address: 630f6f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f6f90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int local_18;
  int local_14;
  undefined2 *local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x1b836) == param_1 + 0x1419e) {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x17cea;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b852;
  }
  else {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x1419e;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b83a;
  }
  local_10 = (undefined2 *)(param_1 + 0x14088);
  puVar4 = (undefined2 *)(param_1 + 0xed74);
  local_c = 0;
  local_18 = 0;
  puVar5 = (undefined2 *)(param_1 + 0xed5c);
  do {
    puVar5[0x1873b] = 0;
    *puVar5 = 0;
    if (puVar5[-0x44b0] != 0) {
      puVar5[6] = 0;
      iVar1 = (int)(short)puVar5[-0x447a];
      if (iVar1 < (short)puVar5[-0x4474]) {
        do {
          iVar1 = iVar1 + 1;
          *(undefined2 *)(*(int *)(local_18 + *(int *)(param_1 + 0x1b86a)) + -2 + iVar1 * 2) = 0;
        } while (iVar1 < (short)puVar5[-0x4474]);
      }
    }
    local_14 = 0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      local_8 = local_c;
      puVar3 = puVar4;
      do {
        iVar2 = 0;
        *puVar3 = 0;
        iVar1 = local_8;
        if (0 < (short)puVar3[-0x1e84]) {
          do {
            iVar2 = iVar2 + 1;
            *(undefined2 *)(iVar1 + *(int *)(param_1 + 0x1b836)) = 0;
            iVar1 = iVar1 + 2;
          } while (iVar2 < (short)puVar3[-0x1e84]);
        }
        local_8 = local_8 + 0x1fa;
        local_14 = local_14 + 1;
        puVar3 = puVar3 + 1;
      } while (local_14 < *(short *)(param_1 + 0x6344));
    }
    iVar1 = 0;
    if ((*(short *)(param_1 + 0x6312) != 0) &&
       (puVar5[0x2a] = 0, puVar3 = local_10, 0 < (short)puVar5[-0x1e5a])) {
      do {
        *puVar3 = 0;
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar1 < (short)puVar5[-0x1e5a]);
    }
    local_c = local_c + 0x9e2;
    local_18 = local_18 + 4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 5;
    local_10 = local_10 + 7;
  } while (local_18 < 0x18);
  return;
}


