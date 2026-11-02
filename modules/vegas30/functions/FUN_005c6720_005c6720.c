/* Module: vegas30.exe
   Function: FUN_005c6720
   Address: 005c6720
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_005c6720(int param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  piVar6 = *(int **)(param_1 + 0x14);
  piVar7 = (int *)0x0;
  if (piVar6 == (int *)0x0) {
LAB_005c6799:
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 != (int *)0x0) {
      do {
        if (piVar6 != *(int **)(param_1 + 0x14)) {
          iVar4 = 0;
          piVar1 = piVar6;
LAB_005c67ac:
          piVar1 = piVar1 + 1;
          if (*piVar1 == -1) goto code_r0x005c67b1;
          iVar2 = iVar4 << 5;
          for (uVar5 = piVar6[iVar4 + 1]; (uVar5 & 1) != 0; uVar5 = uVar5 >> 1) {
            iVar2 = iVar2 + 1;
          }
          if (iVar2 == -1) goto LAB_005c67d7;
          piVar7 = piVar6 + iVar2 * 7 + 5;
          iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
          piVar6[iVar4 + 1] = piVar6[iVar4 + 1] | 1 << ((byte)iVar2 & 0x1f);
          *(int **)(param_1 + 0x14) = piVar6;
          if (piVar7 == (int *)0x0) break;
          goto LAB_005c685c;
        }
LAB_005c67d7:
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)0x0);
    }
    hMem = GlobalAlloc(0x40,0xe14);
    puVar3 = GlobalLock(hMem);
    if (puVar3 != (undefined4 *)0x0) {
      puVar8 = puVar3;
      for (iVar4 = 0x385; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      piVar7 = puVar3 + 5;
      *puVar3 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar3;
      puVar3[1] = puVar3[1] | 1;
      *(undefined4 **)(param_1 + 0x14) = puVar3;
      if (piVar7 != (int *)0x0) {
LAB_005c685c:
        iVar4 = *(int *)(param_1 + 0xc);
        piVar7[3] = iVar4;
        piVar7[4] = iVar4;
        piVar7[5] = iVar4;
        *(byte *)(piVar7 + 6) = *(byte *)(piVar7 + 6) & 0xfc;
      }
    }
    return piVar7;
  }
  iVar4 = 0;
  piVar1 = piVar6;
LAB_005c6734:
  piVar1 = piVar1 + 1;
  if (*piVar1 == -1) goto code_r0x005c6739;
  iVar2 = iVar4 << 5;
  for (uVar5 = piVar6[iVar4 + 1]; (uVar5 & 1) != 0; uVar5 = uVar5 >> 1) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == -1) goto LAB_005c6799;
  piVar7 = piVar6 + iVar2 * 7 + 5;
  iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  piVar6[iVar4 + 1] = piVar6[iVar4 + 1] | 1 << ((byte)iVar2 & 0x1f);
  if (piVar7 == (int *)0x0) goto LAB_005c6799;
  goto LAB_005c685c;
code_r0x005c6739:
  iVar4 = iVar4 + 1;
  if (3 < iVar4) goto LAB_005c6799;
  goto LAB_005c6734;
code_r0x005c67b1:
  iVar4 = iVar4 + 1;
  if (3 < iVar4) goto LAB_005c67d7;
  goto LAB_005c67ac;
}


