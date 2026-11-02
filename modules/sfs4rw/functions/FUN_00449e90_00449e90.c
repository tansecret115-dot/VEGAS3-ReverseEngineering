/* Module: sfs4rw.dll
   Function: FUN_00449e90
   Address: 00449e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00449e90(uint *param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  uVar1 = *param_1;
  uVar6 = param_3 >> 8;
  bVar5 = (byte)(param_3 >> 8);
  uVar4 = (undefined1)param_3;
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar7 = (undefined1 *)(uVar1 + param_2);
      puVar2 = puVar7 + uVar1;
      uVar6 = uVar1;
      if ((param_4 & 0x80) == 0) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar8 = puVar7 + -1;
          puVar7 = puVar7 + -1;
          puVar2[-1] = *puVar8;
          puVar2 = puVar2 + -2;
          *puVar2 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x10;
        param_1[1] = uVar1 * 2;
        return;
      }
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar7 = puVar7 + -1;
          puVar2[-1] = uVar4;
          puVar2 = puVar2 + -2;
          iVar3 = iVar3 + -1;
          *puVar2 = *puVar7;
        } while (iVar3 != 0);
      }
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar1 * 2;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      if ((param_4 & 0x80) == 0) {
        puVar7 = (undefined1 *)(uVar1 + param_2);
        puVar2 = puVar7 + uVar1;
        for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar8 = puVar7 + -1;
          puVar7 = puVar7 + -2;
          puVar2[-1] = *puVar8;
          puVar2[-2] = *puVar7;
          puVar2[-3] = bVar5;
          puVar2 = puVar2 + -4;
          *puVar2 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 2;
        *(undefined1 *)((int)param_1 + 0xb) = 0x10;
        param_1[1] = uVar1 * 2;
        return;
      }
      puVar7 = (undefined1 *)(uVar1 + param_2);
      puVar2 = puVar7 + uVar1;
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar2[-1] = bVar5;
          puVar8 = puVar7 + -1;
          puVar2[-2] = uVar4;
          puVar7 = puVar7 + -2;
          puVar2[-3] = *puVar8;
          puVar2 = puVar2 + -4;
          iVar3 = iVar3 + -1;
          *puVar2 = *puVar7;
        } while (iVar3 != 0);
      }
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      param_1[1] = uVar1 * 2;
      return;
    }
  }
  else if ((char)param_1[2] == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      iVar3 = param_2 + uVar1 * 2;
      if ((param_4 & 0x80) == 0) {
        puVar2 = (undefined1 *)(uVar1 + iVar3);
        puVar7 = puVar2 + uVar1;
        for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar8 = puVar2 + -2;
          puVar7[-1] = puVar2[-1];
          puVar2 = puVar2 + -3;
          puVar7[-2] = *puVar8;
          puVar7[-3] = *puVar2;
          puVar7 = puVar7 + -4;
          *puVar7 = uVar4;
        }
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        param_1[1] = uVar1 * 4;
        return;
      }
      puVar2 = (undefined1 *)(uVar1 + iVar3);
      puVar7 = puVar2 + uVar1;
      if (1 < uVar1) {
        iVar3 = uVar1 - 1;
        do {
          puVar7[-1] = uVar4;
          puVar8 = puVar2 + -2;
          puVar7[-2] = puVar2[-1];
          puVar2 = puVar2 + -3;
          puVar7[-3] = *puVar8;
          puVar7 = puVar7 + -4;
          iVar3 = iVar3 + -1;
          *puVar7 = *puVar2;
        } while (iVar3 != 0);
      }
      *(undefined1 *)((int)param_1 + 10) = 4;
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      param_1[1] = uVar1 * 4;
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\x10') {
      iVar3 = param_2 + uVar1 * 2;
      if ((param_4 & 0x80) == 0) {
        puVar2 = (undefined1 *)(uVar1 + iVar3);
        puVar7 = puVar2 + uVar1;
        for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar7[-1] = puVar2[-1];
          puVar7[-2] = puVar2[-2];
          puVar7[-3] = puVar2[-3];
          puVar8 = puVar2 + -5;
          puVar7[-4] = puVar2[-4];
          puVar2 = puVar2 + -6;
          puVar7[-5] = *puVar8;
          puVar7[-6] = *puVar2;
          puVar7[-7] = bVar5;
          puVar7 = puVar7 + -8;
          *puVar7 = uVar4;
        }
      }
      else {
        puVar2 = (undefined1 *)(uVar1 + iVar3);
        puVar7 = puVar2 + uVar1;
        if (1 < uVar1) {
          iVar3 = uVar1 - 1;
          while( true ) {
            puVar7[-1] = (char)uVar6;
            puVar7[-2] = uVar4;
            puVar7[-3] = puVar2[-1];
            puVar7[-4] = puVar2[-2];
            puVar7[-5] = puVar2[-3];
            puVar8 = puVar2 + -5;
            puVar7[-6] = puVar2[-4];
            puVar2 = puVar2 + -6;
            puVar7[-7] = *puVar8;
            puVar7 = puVar7 + -8;
            iVar3 = iVar3 + -1;
            *puVar7 = *puVar2;
            if (iVar3 == 0) break;
            uVar6 = (uint)bVar5;
          }
        }
      }
      *(undefined1 *)((int)param_1 + 10) = 4;
      *(undefined1 *)((int)param_1 + 0xb) = 0x40;
      param_1[1] = uVar1 * 4;
    }
  }
  return;
}


