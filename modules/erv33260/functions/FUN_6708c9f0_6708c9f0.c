/* Module: erv33260.dll
   Function: FUN_6708c9f0
   Address: 6708c9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708c9f0(uint param_1,int param_2,int param_3,int param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  
  bVar2 = ~(byte)(param_1 >> 2);
  bVar7 = ~(byte)param_1 & 1;
  bVar3 = bVar2 & 1;
  if ((bVar3 != 0) && (bVar7 != 0)) {
    param_5[4] = 0x80;
    param_5[3] = 0x80;
    param_5[2] = 0x80;
    param_5[1] = 0x80;
    param_5[0xc] = 0x80;
    param_5[0xb] = 0x80;
    param_5[10] = 0x80;
    param_5[9] = 0x80;
    return;
  }
  if (bVar3 != 0) {
    if (bVar7 == 0) {
      puVar4 = param_5 + 1;
      do {
        uVar1 = *(undefined1 *)(param_2 + -1);
        param_2 = param_2 + param_3;
        puVar4[8] = uVar1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while ((int)(puVar4 + (-1 - (int)param_5)) < 4);
      return;
    }
    if ((bVar2 & 1) != 0) goto LAB_6708ca92;
  }
  if (bVar7 != 0) {
    iVar8 = 0;
    do {
      iVar5 = iVar8 + 1;
      uVar1 = *(undefined1 *)((iVar8 - param_3) + param_2);
      param_5[iVar8 + 9] = uVar1;
      param_5[iVar5] = uVar1;
      iVar8 = iVar5;
    } while (iVar5 < 4);
    return;
  }
LAB_6708ca92:
  iVar8 = 0;
  iVar5 = param_2;
  do {
    iVar6 = iVar8 + 1;
    param_5[iVar6] = *(undefined1 *)((iVar8 - param_3) + param_2);
    param_5[iVar8 + 9] = *(undefined1 *)(iVar5 + -1);
    iVar5 = iVar5 + param_3;
    iVar8 = iVar6;
  } while (iVar6 < 4);
  iVar8 = param_2 - param_3;
  *param_5 = *(undefined1 *)(iVar8 + -1);
  if (((&DAT_67091fd8)[param_4] == '\0') ||
     (((~(byte)(param_1 >> 1) & 1) != 0 && ((&DAT_67092008)[param_4] != '\0')))) {
    uVar1 = param_5[4];
    param_5[8] = uVar1;
    param_5[7] = uVar1;
    param_5[6] = uVar1;
    param_5[5] = uVar1;
  }
  else {
    param_5[5] = *(undefined1 *)(iVar8 + 4);
    param_5[6] = *(undefined1 *)(iVar8 + 5);
    param_5[7] = *(undefined1 *)(iVar8 + 6);
    param_5[8] = *(undefined1 *)(iVar8 + 7);
  }
  if ((&DAT_67091ff0)[param_4] == '\0') {
    uVar1 = param_5[0xc];
    param_5[0x10] = uVar1;
    param_5[0xf] = uVar1;
    param_5[0xe] = uVar1;
    param_5[0xd] = uVar1;
    return;
  }
  param_5[0xd] = *(undefined1 *)(param_2 + -1 + param_3 * 4);
  param_5[0xe] = *(undefined1 *)(param_3 * 5 + -1 + param_2);
  param_5[0xf] = *(undefined1 *)(param_2 + -1 + param_3 * 6);
  param_5[0x10] = *(undefined1 *)(param_3 * 7 + -1 + param_2);
  return;
}


