/* Module: ednt3260.dll
   Function: FUN_630f53f0
   Address: 630f53f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f53f0(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  short *psVar6;
  
  psVar2 = (short *)(param_1 + 0x6408);
  iVar3 = 0xc4f;
  puVar5 = (undefined2 *)(param_1 + 0xa3d2);
  do {
    puVar5[-6] = 1;
    iVar1 = 0;
    *puVar5 = 1;
    psVar6 = psVar2;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        if (*psVar6 == 1) {
          if (*(short *)(param_1 + 0x4aaa + (iVar1 + iVar3) * 2) == 0) {
            puVar5[-6] = 0;
          }
          if ((*psVar6 == 1) && (*(short *)(param_1 + (iVar1 + iVar3) * 2) == 0)) {
            *puVar5 = 0;
          }
        }
        iVar1 = iVar1 + 1;
        psVar6 = psVar6 + 1;
      } while (iVar1 < *(short *)(param_1 + 0x6344));
    }
    iVar3 = iVar3 + 5;
    psVar2 = psVar2 + 5;
    puVar5 = puVar5 + 1;
  } while (iVar3 < 0xc6d);
  psVar2 = (short *)(param_1 + 0xa3c8);
  *(undefined2 *)(param_1 + 0xa3ae) = 1;
  iVar3 = 5;
  iVar1 = 0;
  do {
    psVar2[-0xc] = 0;
    if ((((*psVar2 != 0) || (psVar2[6] != 0)) || (psVar2[-1] != 0)) ||
       (((psVar2[-0x1fe5] != psVar2[-0x1fe6] || (psVar2[-0x1faf] != psVar2[-0x1fb0])) ||
        (psVar2[-0x1fa9] != psVar2[-0x1faa])))) {
      psVar2[-0xc] = 1;
    }
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  psVar2 = (short *)(param_1 + 0xa3de);
  piVar4 = (int *)(param_1 + 0x3fb5a);
  do {
    if (psVar2[-0x1ff1] == 0) {
      *psVar2 = 0x25;
      psVar2[6] = 0x31;
      iVar3 = (int)*psVar2;
      if (iVar3 < 0x31) {
        puVar5 = (undefined2 *)(param_1 + 0xa3f6 + (iVar1 + iVar3) * 2);
        do {
          *puVar5 = 0;
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar3 < psVar2[6]);
      }
    }
    else {
      *psVar2 = psVar2[-0x1fbb];
      psVar2[6] = psVar2[-0x1fb5];
      iVar3 = (int)*psVar2;
      if (iVar3 < psVar2[-0x1fb5]) {
        puVar5 = (undefined2 *)(param_1 + 0xa3f6 + (iVar1 + iVar3) * 2);
        do {
          iVar3 = iVar3 + 1;
          *puVar5 = *(undefined2 *)(*piVar4 + -2 + iVar3 * 2);
          puVar5 = puVar5 + 1;
        } while (iVar3 < psVar2[6]);
      }
    }
    iVar1 = iVar1 + 0xfd;
    psVar2 = psVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 0x5ee);
  return;
}


