/* Module: rnco3260.dll
   Function: FUN_636f59a0
   Address: 636f59a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_636f59a0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  int local_c;
  
  local_18 = 0;
  do {
    local_14 = 0;
    do {
      uVar3 = 0;
      do {
        local_1c = 0;
        uVar2 = *param_2;
        uVar2 = *(int *)(&DAT_63789348 + (local_14 - (uVar2 >> 8 & 0xff)) * 4) +
                *(int *)(&DAT_63789348 + (uVar3 - (uVar2 >> 0x10 & 0xff)) * 4) +
                *(int *)(&DAT_63789348 + (local_18 - (uVar2 & 0xff)) * 4);
        local_c = 1;
        local_10 = param_2;
        if (1 < param_1) {
          do {
            local_10 = local_10 + 1;
            uVar1 = *local_10;
            uVar1 = *(int *)(&DAT_63789348 + (local_14 - (uVar1 >> 8 & 0xff)) * 4) +
                    *(int *)(&DAT_63789348 + (uVar3 - (uVar1 >> 0x10 & 0xff)) * 4) +
                    *(int *)(&DAT_63789348 + (local_18 - (uVar1 & 0xff)) * 4);
            if (uVar1 < uVar2) {
              local_1c = local_c;
              uVar2 = uVar1;
            }
            local_c = local_c + 1;
          } while (local_c < param_1);
        }
        uVar2 = uVar3 + 0x10;
        (&DAT_63795aa0)[uVar3 >> 4 | local_18 << 4 | local_14] =
             *(undefined1 *)(param_3 + local_1c * 4);
        uVar3 = uVar2;
      } while (uVar2 < 0x100);
      local_14 = local_14 + 0x10;
    } while (local_14 < 0x100);
    local_18 = local_18 + 0x10;
  } while (local_18 < 0x100);
  return param_1;
}


