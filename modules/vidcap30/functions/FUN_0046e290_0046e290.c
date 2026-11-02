/* Module: vidcap30.exe
   Function: FUN_0046e290
   Address: 0046e290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046e290(char *param_1)

{
  byte bVar1;
  int *pMem;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  HGLOBAL pvVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_1 == DAT_005bc418) {
    DAT_005bc418 = *(char **)(param_1 + 0x20);
  }
  else {
    pcVar6 = *(char **)(DAT_005bc418 + 0x20);
    pcVar4 = DAT_005bc418;
    while (pcVar3 = pcVar6, param_1 != pcVar3) {
      pcVar4 = pcVar3;
      pcVar6 = *(char **)(pcVar3 + 0x20);
    }
    *(undefined4 *)(pcVar4 + 0x20) = *(undefined4 *)(*(int *)(pcVar4 + 0x20) + 0x20);
  }
  if (*param_1 != '\0') {
    bVar1 = *(byte *)(*(int **)(param_1 + 8) + 6);
    piVar10 = *(int **)(param_1 + 8);
    while ((bVar1 & 2) != 2) {
      piVar11 = (int *)piVar10[4];
      if (((*(byte *)(piVar11 + 6) & 2) == 2) &&
         (piVar11 = (int *)piVar10[5], (*(byte *)(piVar11 + 6) & 2) == 2)) {
        piVar11 = (int *)piVar10[3];
        if ((int *)piVar11[4] == piVar10) {
          piVar11[4] = *(int *)(param_1 + 0xc);
        }
        else {
          piVar11[5] = *(int *)(param_1 + 0xc);
        }
        piVar10[3] = 0;
        piVar10[4] = 0;
        piVar10[5] = 0;
        for (pMem = *(int **)(param_1 + 0x10);
            (pMem != (int *)0x0 && ((piVar10 < pMem + 5 || (pMem + 0x37e < piVar10))));
            pMem = (int *)*pMem) {
        }
        iVar7 = ((int)piVar10 + (-0x14 - (int)pMem)) / 0x1c;
        iVar9 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        pMem[iVar9 + 1] = pMem[iVar9 + 1] & ~(1 << ((byte)iVar7 & 0x1f));
        *(int **)(param_1 + 0x14) = pMem;
        iVar7 = 0;
        piVar10 = pMem;
        do {
          piVar10 = piVar10 + 1;
          if (*piVar10 != 0) goto LAB_0046e3ea;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 4);
        piVar10 = *(int **)(param_1 + 0x10);
        if (pMem == piVar10) {
          *(int *)(param_1 + 0x10) = *pMem;
        }
        else {
          for (piVar5 = (int *)*piVar10; piVar5 != pMem; piVar5 = (int *)*piVar5) {
            piVar10 = piVar5;
          }
          *piVar10 = *pMem;
        }
        if (*(int **)(param_1 + 0x14) == pMem) {
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
        }
        pvVar8 = GlobalHandle(pMem);
        GlobalUnlock(pvVar8);
        pvVar8 = GlobalHandle(pMem);
        GlobalFree(pvVar8);
LAB_0046e3ea:
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      }
      piVar10 = piVar11;
      bVar1 = *(byte *)(piVar11 + 6);
    }
    piVar10[3] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    for (puVar2 = *(undefined4 **)(param_1 + 0x10);
        (puVar2 != (undefined4 *)0x0 && ((piVar10 < puVar2 + 5 || (puVar2 + 0x37e < piVar10))));
        puVar2 = (undefined4 *)*puVar2) {
    }
    iVar7 = ((int)piVar10 + (-0x14 - (int)puVar2)) / 0x1c;
    iVar9 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
    puVar2[iVar9 + 1] = puVar2[iVar9 + 1] & ~(1 << ((byte)iVar7 & 0x1f));
    *(undefined4 **)(param_1 + 0x14) = puVar2;
    FUN_00470c20(puVar2);
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\0';
  }
  return;
}


