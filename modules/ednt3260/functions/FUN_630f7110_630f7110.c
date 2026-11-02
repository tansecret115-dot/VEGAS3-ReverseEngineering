/* Module: ednt3260.dll
   Function: FUN_630f7110
   Address: 630f7110
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_630f7110(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  
  iVar7 = (int)*(short *)(param_1 + 0x3fbe2);
  psVar2 = (short *)(param_1 + 0x3fbd2);
  iVar6 = 6;
  do {
    iVar7 = iVar7 - *psVar2;
    psVar2 = psVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar7 < 0) {
    puVar3 = (undefined2 *)(param_1 + 0x3fbf0);
    iVar6 = 6;
    do {
      puVar3[-6] = 0;
      *puVar3 = 0;
      puVar3[-0x15] = 0;
      puVar3 = puVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(undefined2 *)(param_1 + 0x3fbde) = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 0x3fbae) / 6;
    if (2 < (int)*(short *)(param_1 + 0x3fbae) + sVar5 * -6) {
      sVar5 = sVar5 + 1;
    }
    iVar6 = (int)*(short *)(param_1 + 0x3fbb8);
    local_c = 0;
    puVar3 = (undefined2 *)(param_1 + 0x3fbe4);
    local_10 = 6;
    iVar8 = iVar7;
    do {
      iVar6 = (short)puVar3[-0x15] + iVar6 + (int)(short)puVar3[-9];
      local_c = local_c + sVar5;
      iVar4 = local_c - iVar6;
      if (iVar8 < local_c - iVar6) {
        iVar4 = iVar8;
      }
      if (iVar4 < 9) {
        *puVar3 = 0;
        puVar3[6] = 0;
        puVar3[-0xf] = 0;
      }
      else {
        *puVar3 = 1;
        sVar1 = (short)((int)(iVar4 + -9 + (iVar4 + -9 >> 0x1f & 7U)) >> 3);
        puVar3[6] = sVar1;
        sVar1 = sVar1 * 8 + 9;
        puVar3[-0xf] = sVar1;
        iVar6 = iVar6 + sVar1;
        iVar8 = iVar8 - sVar1;
      }
      puVar3 = puVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    *(short *)(param_1 + 0x3fbde) = (short)iVar8;
  }
  iVar6 = (((((((int)*(short *)(param_1 + 0x3fbb2) - (int)*(short *)(param_1 + 0x3fbc6)) -
              (int)*(short *)(param_1 + 0x3fbc8)) - (int)*(short *)(param_1 + 0x3fbd4)) -
            (int)*(short *)(param_1 + 0x3fbbc)) - (int)*(short *)(param_1 + 0x3fbba)) -
          (int)*(short *)(param_1 + 0x3fbb8)) - (int)*(short *)(param_1 + 0x3fbd2);
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
  }
  iVar6 = (((int)*(short *)(param_1 + 0x3fbb6) - (int)*(short *)(param_1 + 0x3fbdc)) -
          (int)*(short *)(param_1 + 0x3fbe0)) - (int)*(short *)(param_1 + 0x3fbde);
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
  }
  return iVar7;
}


