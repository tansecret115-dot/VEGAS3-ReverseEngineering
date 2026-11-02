/* Module: sfmarket2.dll
   Function: FUN_004527f0
   Address: 004527f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004527f0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  
  bVar4 = *(byte *)((int)param_1 + 9);
  iVar3 = *param_1;
  if ((7 < bVar4) && (bVar2 = *(byte *)(param_1 + 2), (bVar2 & 2) == 0)) {
    if (bVar2 == 0) {
      if (bVar4 == 8) {
        puVar7 = (undefined1 *)(iVar3 + -1 + param_2);
        puVar5 = puVar7 + iVar3 * 2;
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *puVar7;
          puVar5[-1] = *puVar7;
          puVar5[-2] = *puVar7;
          puVar5 = puVar5 + -3;
          puVar7 = puVar7 + -1;
        }
      }
      else {
        puVar7 = (undefined1 *)(param_2 + -1 + iVar3 * 2);
        puVar5 = puVar7 + iVar3 * 4;
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *puVar7;
          puVar5[-1] = puVar7[-1];
          puVar5[-2] = *puVar7;
          puVar5[-3] = puVar7[-1];
          puVar5[-4] = *puVar7;
          puVar1 = puVar7 + -1;
          puVar7 = puVar7 + -2;
          puVar5[-5] = *puVar1;
          puVar5 = puVar5 + -6;
        }
      }
    }
    else if (bVar2 == 4) {
      if (bVar4 == 8) {
        puVar7 = (undefined1 *)(param_2 + -1 + iVar3 * 2);
        puVar5 = puVar7 + iVar3 * 2;
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *puVar7;
          puVar5[-1] = puVar7[-1];
          puVar5[-2] = puVar7[-1];
          puVar5[-3] = puVar7[-1];
          puVar5 = puVar5 + -4;
          puVar7 = puVar7 + -2;
        }
      }
      else {
        puVar7 = (undefined1 *)(param_2 + -1 + iVar3 * 4);
        puVar5 = puVar7 + iVar3 * 4;
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = *puVar7;
          puVar5[-1] = puVar7[-1];
          puVar5[-2] = puVar7[-2];
          puVar5[-3] = puVar7[-3];
          puVar5[-4] = puVar7[-2];
          puVar5[-5] = puVar7[-3];
          puVar5[-6] = puVar7[-2];
          puVar1 = puVar7 + -3;
          puVar7 = puVar7 + -4;
          puVar5[-7] = *puVar1;
          puVar5 = puVar5 + -8;
        }
      }
    }
    cVar6 = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    bVar4 = *(char *)((int)param_1 + 9) * cVar6;
    *(byte *)((int)param_1 + 0xb) = bVar4;
    *(char *)((int)param_1 + 10) = cVar6;
    param_1[1] = (uint)bVar4 * iVar3 + 7 >> 3;
  }
  return;
}


