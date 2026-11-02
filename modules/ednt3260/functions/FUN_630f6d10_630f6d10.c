/* Module: ednt3260.dll
   Function: FUN_630f6d10
   Address: 630f6d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f6d10(int param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined2 *local_c;
  short *local_8;
  
  if (*(int *)(param_1 + 0x1b836) == param_1 + 0x1419e) {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x17cea;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b852;
  }
  else {
    *(int *)(param_1 + 0x1b836) = param_1 + 0x1419e;
    *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b83a;
  }
  local_c = (undefined2 *)(param_1 + 0x14088);
  local_8 = (short *)(param_1 + 0xb06c);
  local_18 = 0;
  local_14 = 0;
  puVar6 = (undefined2 *)(param_1 + 0x1b8ce);
  do {
    if (puVar6[-0x3bc9] == 0) {
      puVar6[0x12182] = puVar6[0x12181];
      puVar6[-0x65b9] = puVar6[-0x65ba];
      if (puVar6[-0xaa69] != 0) {
        puVar6[-0x65b3] = puVar6[-0x65b4];
        iVar3 = (int)(short)puVar6[-0xaa33];
        if (iVar3 < (short)puVar6[-0xaa2d]) {
          do {
            piVar4 = (int *)(*(int *)(param_1 + 0x1b86a) + local_14);
            iVar3 = iVar3 + 1;
            *(undefined2 *)(*piVar4 + -2 + iVar3 * 2) = *(undefined2 *)(piVar4[-1] + -2 + iVar3 * 2)
            ;
          } while (iVar3 < (short)puVar6[-0xaa2d]);
        }
      }
      local_20 = 0;
      if (0 < *(short *)(param_1 + 0x6344)) {
        local_10 = local_18;
        psVar1 = local_8;
        do {
          iVar5 = 0;
          psVar1[0x1e84] = psVar1[0x1e7f];
          iVar3 = local_10;
          if (0 < *psVar1) {
            do {
              iVar5 = iVar5 + 1;
              *(undefined2 *)(iVar3 + *(int *)(param_1 + 0x1b836)) =
                   *(undefined2 *)(iVar3 + -0x9e2 + *(int *)(param_1 + 0x1b836));
              iVar3 = iVar3 + 2;
            } while (iVar5 < *psVar1);
          }
          local_20 = local_20 + 1;
          local_10 = local_10 + 0x1fa;
          psVar1 = psVar1 + 1;
        } while (local_20 < *(short *)(param_1 + 0x6344));
      }
      if (*(short *)(param_1 + 0x6312) != 0) {
        iVar3 = 0;
        puVar6[-25999] = puVar6[-26000];
        puVar2 = local_c;
        if (0 < (short)puVar6[-0x8413]) {
          do {
            iVar3 = iVar3 + 1;
            *puVar2 = puVar2[-7];
            puVar2 = puVar2 + 1;
          } while (iVar3 < (short)puVar6[-0x8413]);
        }
      }
      puVar6[-0x65c5] = puVar6[5];
    }
    else {
      puVar6[0x12182] = *puVar6;
      puVar6[-0x65b9] = puVar6[-0x30];
      if (puVar6[-0xaa69] != 0) {
        puVar6[-0x65b3] = puVar6[-6];
      }
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x6344)) {
        psVar1 = local_8 + 0x1e84;
        do {
          iVar3 = iVar3 + 1;
          *psVar1 = psVar1[0x6583];
          psVar1 = psVar1 + 1;
        } while (iVar3 < *(short *)(param_1 + 0x6344));
      }
      if (*(short *)(param_1 + 0x6312) != 0) {
        puVar6[-25999] = puVar6[-0xc];
        iVar3 = 0;
        puVar2 = local_c;
        if (0 < (short)puVar6[-0x8413]) {
          do {
            iVar3 = iVar3 + 1;
            *puVar2 = puVar2[0x61];
            puVar2 = puVar2 + 1;
          } while (iVar3 < (short)puVar6[-0x8413]);
        }
      }
      puVar6[-0x65c5] = puVar6[6];
    }
    local_14 = local_14 + 4;
    puVar6 = puVar6 + 1;
    local_18 = local_18 + 0x9e2;
    local_8 = local_8 + 5;
    local_c = local_c + 7;
  } while (local_14 < 0x18);
  return;
}


