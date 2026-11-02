/* Module: pncrt.dll
   Function: FUN_7800b840
   Address: 7800b840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_7800b840(void)

{
  byte *pbVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined **local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = &PTR_LOOP_7803d3c8;
  do {
    if ((undefined **)PTR_LOOP_7803f3e8 == local_10) {
      local_c = local_c + 1;
    }
    piVar6 = (int *)local_10[4];
    if (piVar6 != (int *)0xffffffff) {
      ppuVar2 = local_10 + 6;
      local_8 = 0;
      local_1c = 0;
      piVar7 = piVar6 + 2;
      do {
        iVar8 = 0;
        if (*ppuVar2 == (undefined *)0xffffffff) {
          if ((local_1c == 0) && ((undefined **)local_10[3] != ppuVar2)) {
            return -1;
          }
          local_1c = local_1c + 1;
        }
        else {
          if (piVar7 + 0x3c <= (int *)*piVar6) {
            return -2;
          }
          if ((char)piVar7[0x3c] != -1) {
            return -3;
          }
          iVar3 = 0;
          local_18 = 0;
          local_14 = (undefined *)0x0;
          iVar4 = 0;
          do {
            pbVar1 = (byte *)(iVar4 + (int)piVar7);
            if (pbVar1 == (byte *)*piVar6) {
              iVar3 = iVar3 + 1;
              local_18 = iVar3;
            }
            if (*pbVar1 == 0) {
              local_14 = local_14 + 1;
              iVar8 = iVar8 + 1;
              iVar5 = iVar4 + 1;
            }
            else {
              if ((int)ppuVar2[1] <= iVar8) {
                return -4;
              }
              if (iVar3 == 1) {
                if (iVar8 < piVar7[-1]) {
                  return -5;
                }
                local_18 = 2;
              }
              iVar5 = iVar4 + 1;
              iVar8 = 0;
              iVar3 = local_18;
              if (iVar5 < (int)(iVar4 + (uint)*pbVar1)) {
                do {
                  if (*(char *)(iVar5 + (int)piVar7) != '\0') {
                    return -6;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)((uint)*(byte *)(iVar4 + 8 + (int)piVar6) + iVar4));
              }
            }
            iVar4 = iVar5;
          } while (iVar5 < 0xf0);
          if (local_14 != *ppuVar2) {
            return -7;
          }
          if (iVar3 == 0) {
            return -8;
          }
        }
        ppuVar2 = ppuVar2 + 2;
        local_8 = local_8 + 1;
        piVar6 = piVar6 + 0x400;
        piVar7 = piVar7 + 0x400;
      } while (local_8 < 0x400);
    }
    local_10 = (undefined **)*local_10;
    if (local_10 == &PTR_LOOP_7803d3c8) {
      return (-(uint)(local_c != 0) & 9) - 9;
    }
  } while( true );
}


