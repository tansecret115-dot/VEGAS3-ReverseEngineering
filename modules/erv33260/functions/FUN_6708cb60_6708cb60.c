/* Module: erv33260.dll
   Function: FUN_6708cb60
   Address: 6708cb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708cb60(undefined4 param_1,undefined4 *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  switch(param_1) {
  case 0:
    iVar8 = 0;
    pbVar6 = param_3 + 9;
    do {
      bVar2 = *pbVar6;
      pbVar1 = pbVar6 + -8;
      pbVar6 = pbVar6 + 1;
      iVar8 = (uint)bVar2 + iVar8 + (uint)*pbVar1;
    } while (pbVar6 + (-9 - (int)param_3) < (byte *)0x4);
    iVar7 = 4;
    do {
      uVar4 = (undefined1)(iVar8 + 4U >> 3);
      uVar3 = CONCAT11(uVar4,uVar4);
      iVar7 = iVar7 + -1;
      *param_2 = CONCAT22(uVar3,uVar3);
      param_2 = param_2 + 4;
    } while (iVar7 != 0);
    return;
  case 1:
    iVar8 = 4;
    do {
      uVar5 = 0;
      do {
        *(byte *)(uVar5 + (int)param_2) = param_3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      param_2 = param_2 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
  case 2:
    iVar8 = 4;
    pbVar6 = param_3 + 9;
    do {
      uVar5 = 0;
      do {
        *(byte *)(uVar5 + (int)param_2) = *pbVar6;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      param_2 = param_2 + 4;
      pbVar6 = pbVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
  case 3:
    *(char *)(param_2 + 0xc) =
         (char)((int)(param_3[0xc] + 2 + (uint)param_3[0xb] * 2 + (uint)param_3[10]) >> 2);
    uVar4 = (undefined1)((int)(param_3[0xb] + 2 + (uint)param_3[10] * 2 + (uint)param_3[9]) >> 2);
    *(undefined1 *)((int)param_2 + 0x31) = uVar4;
    *(undefined1 *)(param_2 + 8) = uVar4;
    uVar4 = (undefined1)((int)(*param_3 + 2 + (uint)param_3[9] * 2 + (uint)param_3[10]) >> 2);
    *(undefined1 *)((int)param_2 + 0x32) = uVar4;
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(undefined1 *)(param_2 + 4) = uVar4;
    uVar4 = (undefined1)((int)(param_3[1] + 2 + (uint)*param_3 * 2 + (uint)param_3[9]) >> 2);
    *(undefined1 *)((int)param_2 + 0x33) = uVar4;
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    *(undefined1 *)param_2 = uVar4;
    uVar4 = (undefined1)((int)(*param_3 + 2 + (uint)param_3[1] * 2 + (uint)param_3[2]) >> 2);
    *(undefined1 *)((int)param_2 + 0x23) = uVar4;
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    *(undefined1 *)((int)param_2 + 1) = uVar4;
    uVar4 = (undefined1)((int)(param_3[3] + 2 + (uint)param_3[2] * 2 + (uint)param_3[1]) >> 2);
    *(undefined1 *)((int)param_2 + 0x13) = uVar4;
    *(undefined1 *)((int)param_2 + 2) = uVar4;
    *(char *)((int)param_2 + 3) =
         (char)((int)(param_3[4] + 2 + (uint)param_3[3] * 2 + (uint)param_3[2]) >> 2);
    return;
  case 4:
    *(char *)param_2 =
         (char)((int)(param_3[9] + 4 + ((uint)param_3[2] + (uint)param_3[10]) * 2 + (uint)param_3[1]
                      + (uint)param_3[3] + (uint)param_3[0xb]) >> 3);
    uVar4 = (undefined1)
            ((int)(param_3[4] + 4 + ((uint)param_3[3] + (uint)param_3[0xb]) * 2 + (uint)param_3[2] +
                   (uint)param_3[10] + (uint)param_3[0xc]) >> 3);
    *(undefined1 *)(param_2 + 4) = uVar4;
    *(undefined1 *)((int)param_2 + 1) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[5] + 4 + ((uint)param_3[4] + (uint)param_3[0xc]) * 2 + (uint)param_3[0xd]
                   + (uint)param_3[3] + (uint)param_3[0xb]) >> 3);
    *(undefined1 *)(param_2 + 8) = uVar4;
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    *(undefined1 *)((int)param_2 + 2) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[0xe] + 4 + ((uint)param_3[5] + (uint)param_3[0xd]) * 2 + (uint)param_3[6]
                   + (uint)param_3[4] + (uint)param_3[0xc]) >> 3);
    *(undefined1 *)(param_2 + 0xc) = uVar4;
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    *(undefined1 *)((int)param_2 + 3) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[7] + 4 + ((uint)param_3[0xe] + (uint)param_3[6]) * 2 + (uint)param_3[5] +
                   (uint)param_3[0xf] + (uint)param_3[0xd]) >> 3);
    *(undefined1 *)((int)param_2 + 0x31) = uVar4;
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)((int)param_2 + 0x13) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[8] + 4 + ((uint)param_3[7] + (uint)param_3[0xf]) * 2 +
                   (uint)param_3[0x10] + (uint)param_3[0xe] + (uint)param_3[6]) >> 3);
    *(undefined1 *)((int)param_2 + 0x32) = uVar4;
    *(undefined1 *)((int)param_2 + 0x23) = uVar4;
    *(char *)((int)param_2 + 0x33) =
         (char)((int)((uint)param_3[8] + (uint)param_3[7] + (uint)param_3[0x10] + 2 +
                     (uint)param_3[0xf]) >> 2);
    return;
  case 5:
    uVar4 = (undefined1)((int)(*param_3 + 1 + (uint)param_3[1]) >> 1);
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(undefined1 *)param_2 = uVar4;
    uVar4 = (undefined1)((int)(param_3[2] + 1 + (uint)param_3[1]) >> 1);
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)((int)param_2 + 1) = uVar4;
    uVar4 = (undefined1)((int)(param_3[3] + 1 + (uint)param_3[2]) >> 1);
    *(undefined1 *)((int)param_2 + 0x23) = uVar4;
    *(undefined1 *)((int)param_2 + 2) = uVar4;
    *(char *)((int)param_2 + 3) = (char)((int)(param_3[3] + 1 + (uint)param_3[4]) >> 1);
    uVar4 = (undefined1)((int)(param_3[1] + 2 + (uint)*param_3 * 2 + (uint)param_3[9]) >> 2);
    *(undefined1 *)((int)param_2 + 0x31) = uVar4;
    *(undefined1 *)(param_2 + 4) = uVar4;
    uVar4 = (undefined1)((int)(*param_3 + 2 + (uint)param_3[1] * 2 + (uint)param_3[2]) >> 2);
    *(undefined1 *)((int)param_2 + 0x32) = uVar4;
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    uVar4 = (undefined1)((int)(param_3[3] + 2 + (uint)param_3[2] * 2 + (uint)param_3[1]) >> 2);
    *(undefined1 *)((int)param_2 + 0x33) = uVar4;
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    *(char *)((int)param_2 + 0x13) =
         (char)((int)(param_3[4] + 2 + (uint)param_3[3] * 2 + (uint)param_3[2]) >> 2);
    *(char *)(param_2 + 8) =
         (char)((int)(*param_3 + 2 + (uint)param_3[9] * 2 + (uint)param_3[10]) >> 2);
    *(char *)(param_2 + 0xc) =
         (char)((int)(param_3[0xb] + 2 + (uint)param_3[10] * 2 + (uint)param_3[9]) >> 2);
    return;
  case 6:
    *(char *)param_2 =
         (char)((int)(param_3[10] + 4 +
                      ((uint)param_3[2] + (uint)param_3[0xb] + (uint)param_3[1]) * 2 +
                     (uint)param_3[0xc]) >> 3);
    uVar4 = (undefined1)((int)(param_3[3] + 1 + (uint)param_3[2]) >> 1);
    *(undefined1 *)(param_2 + 8) = uVar4;
    *(undefined1 *)((int)param_2 + 1) = uVar4;
    uVar4 = (undefined1)((int)(param_3[3] + 1 + (uint)param_3[4]) >> 1);
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(undefined1 *)((int)param_2 + 2) = uVar4;
    uVar4 = (undefined1)((int)(param_3[5] + 1 + (uint)param_3[4]) >> 1);
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)((int)param_2 + 3) = uVar4;
    *(char *)((int)param_2 + 0x23) = (char)((int)(param_3[5] + 1 + (uint)param_3[6]) >> 1);
    *(char *)(param_2 + 4) =
         (char)((int)(param_3[0xd] + 4 + ((uint)param_3[2] + (uint)param_3[0xc]) * 2 +
                      (uint)param_3[3] + (uint)param_3[0xb] + (uint)param_3[1]) >> 3);
    uVar4 = (undefined1)((int)(param_3[4] + 2 + (uint)param_3[3] * 2 + (uint)param_3[2]) >> 2);
    *(undefined1 *)(param_2 + 0xc) = uVar4;
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    uVar4 = (undefined1)((int)(param_3[5] + 2 + (uint)param_3[4] * 2 + (uint)param_3[3]) >> 2);
    *(undefined1 *)((int)param_2 + 0x31) = uVar4;
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    uVar4 = (undefined1)((int)(param_3[6] + 2 + (uint)param_3[5] * 2 + (uint)param_3[4]) >> 2);
    *(undefined1 *)((int)param_2 + 0x32) = uVar4;
    *(undefined1 *)((int)param_2 + 0x13) = uVar4;
    *(char *)((int)param_2 + 0x33) =
         (char)((int)(param_3[7] + 2 + (uint)param_3[6] * 2 + (uint)param_3[5]) >> 2);
    return;
  case 7:
    *(char *)param_2 =
         (char)((int)(param_3[2] + 4 + ((uint)param_3[3] + (uint)param_3[10] + (uint)param_3[9]) * 2
                     + (uint)param_3[4]) >> 3);
    *(char *)((int)param_2 + 1) =
         (char)((int)(param_3[5] + 4 + ((uint)param_3[4] + (uint)param_3[10]) * 2 + (uint)param_3[3]
                      + (uint)param_3[0xb] + (uint)param_3[9]) >> 3);
    uVar4 = (undefined1)
            ((int)(param_3[6] + 4 + ((uint)param_3[5] + (uint)param_3[10] + (uint)param_3[0xb]) * 2
                  + (uint)param_3[4]) >> 3);
    *(undefined1 *)(param_2 + 4) = uVar4;
    *(undefined1 *)((int)param_2 + 2) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[7] + 4 + ((uint)param_3[6] + (uint)param_3[0xb]) * 2 + (uint)param_3[5] +
                   (uint)param_3[10] + (uint)param_3[0xc]) >> 3);
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    *(undefined1 *)((int)param_2 + 3) = uVar4;
    uVar4 = (undefined1)
            ((int)(param_3[8] + 4 + ((uint)param_3[7] + (uint)param_3[0xb] + (uint)param_3[0xc]) * 2
                  + (uint)param_3[6]) >> 3);
    *(undefined1 *)(param_2 + 8) = uVar4;
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    uVar4 = (undefined1)
            ((int)((uint)param_3[0xb] +
                  (uint)param_3[8] * 3 + (uint)param_3[7] + 4 + (uint)param_3[0xc] * 3) >> 3);
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(undefined1 *)((int)param_2 + 0x13) = uVar4;
    uVar4 = (undefined1)((int)(param_3[0xe] + 2 + (uint)param_3[0xd] * 2 + (uint)param_3[0xc]) >> 2)
    ;
    *(undefined1 *)((int)param_2 + 0x31) = uVar4;
    *(undefined1 *)((int)param_2 + 0x23) = uVar4;
    uVar4 = (undefined1)
            ((int)((uint)param_3[8] + (uint)param_3[7] + (uint)param_3[0xd] + 2 + (uint)param_3[0xc]
                  ) >> 2);
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)(param_2 + 0xc) = uVar4;
    *(char *)((int)param_2 + 0x32) = (char)((int)(param_3[0xe] + 1 + (uint)param_3[0xd]) >> 1);
    *(char *)((int)param_2 + 0x33) =
         (char)((int)(param_3[0xf] + 2 + (uint)param_3[0xe] * 2 + (uint)param_3[0xd]) >> 2);
    return;
  case 8:
    uVar4 = (undefined1)((int)(*param_3 + 1 + (uint)param_3[9]) >> 1);
    *(undefined1 *)((int)param_2 + 0x12) = uVar4;
    *(undefined1 *)param_2 = uVar4;
    uVar4 = (undefined1)((int)(param_3[1] + 2 + (uint)*param_3 * 2 + (uint)param_3[9]) >> 2);
    *(undefined1 *)((int)param_2 + 0x13) = uVar4;
    *(undefined1 *)((int)param_2 + 1) = uVar4;
    *(char *)((int)param_2 + 2) =
         (char)((int)(*param_3 + 2 + (uint)param_3[1] * 2 + (uint)param_3[2]) >> 2);
    *(char *)((int)param_2 + 3) =
         (char)((int)(param_3[3] + 2 + (uint)param_3[2] * 2 + (uint)param_3[1]) >> 2);
    uVar4 = (undefined1)((int)(param_3[10] + 1 + (uint)param_3[9]) >> 1);
    *(undefined1 *)((int)param_2 + 0x22) = uVar4;
    *(undefined1 *)(param_2 + 4) = uVar4;
    uVar4 = (undefined1)((int)(*param_3 + 2 + (uint)param_3[9] * 2 + (uint)param_3[10]) >> 2);
    *(undefined1 *)((int)param_2 + 0x23) = uVar4;
    *(undefined1 *)((int)param_2 + 0x11) = uVar4;
    uVar4 = (undefined1)((int)(param_3[10] + 1 + (uint)param_3[0xb]) >> 1);
    *(undefined1 *)((int)param_2 + 0x32) = uVar4;
    *(undefined1 *)(param_2 + 8) = uVar4;
    uVar4 = (undefined1)((int)(param_3[0xb] + 2 + (uint)param_3[10] * 2 + (uint)param_3[9]) >> 2);
    *(undefined1 *)((int)param_2 + 0x33) = uVar4;
    *(undefined1 *)((int)param_2 + 0x21) = uVar4;
    *(char *)(param_2 + 0xc) = (char)((int)(param_3[0xb] + 1 + (uint)param_3[0xc]) >> 1);
    *(char *)((int)param_2 + 0x31) =
         (char)((int)(param_3[10] + 2 + (uint)param_3[0xb] * 2 + (uint)param_3[0xc]) >> 2);
  }
  return;
}


