/* Module: tokr3260.dll
   Function: FUN_68053e50
   Address: 68053e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68053e50(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_20;
  int local_1c;
  int local_18;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_8 = 5;
  if (*(int *)(param_1 + 0x110) != 0) {
    local_8 = 7;
  }
  local_20 = 0;
  if (*(int *)(param_1 + 0x110) < 1) {
    return local_8;
  }
  piVar5 = (int *)(param_1 + 0x118);
  do {
    if (0 < *(int *)(param_1 + 4)) {
      local_8 = local_8 + *(int *)(param_1 + 4);
    }
    iVar2 = local_8 + 6;
    if (*(int *)(param_1 + 8) == 3) {
      iVar2 = local_8 + 7;
    }
    local_8 = iVar2;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xf224) + 0x44) + piVar5[1] * 4) +
            piVar5[-1] * 0x2c;
    if ((iVar2 == 0) || (puVar3 = (uint *)FUN_68053a30(*piVar5), puVar3 == (uint *)0xfff0bdc1)) {
      return -999999;
    }
    local_1c = 0;
    if (0 < *(int *)(param_1 + 4) << 2) {
      local_c = piVar5 + 6;
      local_10 = piVar5 + 0x16;
      do {
        iVar4 = FUN_68053a10(local_1c);
        if (iVar4 == -999999) {
          return -999999;
        }
        if (piVar5[iVar4 + 2] != 0) {
          local_18 = 0;
          local_8 = local_8 + 3;
          piVar6 = local_10;
          if (0 < *local_c) {
            do {
              iVar4 = *(int *)*piVar6;
              if (0x400 < (int)puVar3 + iVar4) {
                puVar3 = (uint *)(0x400 - iVar4);
              }
              puVar1 = (uint *)((int *)*piVar6 + 2);
              iVar4 = FUN_68054120(iVar2,puVar1,puVar3);
              if (iVar4 == -999999) {
                return -999999;
              }
              iVar4 = FUN_68054120(iVar2,puVar1,puVar3);
              local_8 = local_8 + 0xc + iVar4;
              local_18 = local_18 + 1;
              piVar6 = piVar6 + 1;
            } while (local_18 < *local_c);
          }
        }
        local_c = local_c + 1;
        local_10 = local_10 + 7;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 4) * 4);
    }
    local_20 = local_20 + 1;
    piVar5 = piVar5 + 0x87;
    if (*(int *)(param_1 + 0x110) <= local_20) {
      return local_8;
    }
  } while( true );
}


