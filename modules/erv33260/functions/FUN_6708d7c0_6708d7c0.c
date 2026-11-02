/* Module: erv33260.dll
   Function: FUN_6708d7c0
   Address: 6708d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708d7c0(int param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  byte abStack_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar11 = 0;
  if (param_1 == 3) {
    param_1 = 0;
  }
  bVar9 = ~(byte)(param_2 >> 2) & 1;
  bVar3 = ~(byte)param_2 & 1;
  if ((bVar9 == 0) && (param_1 != 2)) {
    pbVar5 = (byte *)(param_3 - param_4);
    iVar8 = (int)&local_c - (int)pbVar5;
    iVar12 = 8;
    do {
      bVar1 = *pbVar5;
      pbVar5[iVar8] = bVar1;
      iVar11 = iVar11 + (uint)bVar1;
      pbVar5 = pbVar5 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if ((bVar3 == 0) && (param_1 != 1)) {
    uVar6 = 0;
    pbVar5 = (byte *)(param_3 + -1);
    do {
      bVar1 = *pbVar5;
      abStack_14[uVar6] = bVar1;
      iVar11 = iVar11 + (uint)bVar1;
      uVar6 = uVar6 + 1;
      pbVar5 = pbVar5 + param_4;
    } while (uVar6 < 8);
  }
  if (param_1 != 0) {
    if (param_1 == 1) {
      iVar11 = 8;
      do {
        *param_5 = local_c;
        param_5[1] = local_8;
        param_5 = param_5 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      return;
    }
    if (param_1 != 2) {
      return;
    }
    uVar6 = 0;
    do {
      uVar10 = CONCAT11(abStack_14[uVar6],abStack_14[uVar6]);
      uVar7 = CONCAT22(uVar10,uVar10);
      uVar6 = uVar6 + 1;
      *param_5 = uVar7;
      param_5[1] = uVar7;
      param_5 = param_5 + 4;
    } while (uVar6 < 8);
    return;
  }
  if (bVar9 == 0) {
LAB_6708d8bd:
    if (bVar3 != 0) goto LAB_6708d8c1;
  }
  else {
    if (bVar3 != 0) {
      uVar4 = 0x80;
      goto LAB_6708d8c9;
    }
    if (bVar9 == 0) goto LAB_6708d8bd;
LAB_6708d8c1:
    iVar11 = iVar11 << 1;
  }
  uVar4 = (undefined1)(iVar11 + 8U >> 4);
LAB_6708d8c9:
  iVar11 = 7;
  *(undefined1 *)((int)param_5 + 3) = uVar4;
  *(undefined1 *)((int)param_5 + 2) = uVar4;
  *(undefined1 *)((int)param_5 + 1) = uVar4;
  *(undefined1 *)param_5 = uVar4;
  *(undefined1 *)((int)param_5 + 7) = uVar4;
  *(undefined1 *)((int)param_5 + 6) = uVar4;
  *(undefined1 *)((int)param_5 + 5) = uVar4;
  *(undefined1 *)(param_5 + 1) = uVar4;
  puVar2 = param_5;
  do {
    puVar2[4] = *param_5;
    puVar2[5] = *param_5;
    iVar11 = iVar11 + -1;
    puVar2 = puVar2 + 4;
  } while (iVar11 != 0);
  return;
}


