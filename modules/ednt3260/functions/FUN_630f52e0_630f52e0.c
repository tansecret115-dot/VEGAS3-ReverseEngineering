/* Module: ednt3260.dll
   Function: FUN_630f52e0
   Address: 630f52e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f52e0(void *this,int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 5;
  *(undefined2 *)((int)this + param_1 * 0xc + 0xa372) = 1;
  puVar1 = (undefined2 *)((int)this + (param_1 + 0xd9f) * 0xc);
  psVar4 = (short *)((int)this + param_1 * 2 + 0x6352);
  do {
    *puVar1 = 0;
    if ((((*psVar4 != 0) || (psVar4[-0x2555] != 0)) || (psVar4[-5] != 0)) ||
       ((psVar4[0x60] != psVar4[0x5b] || (psVar4[0x2692] != psVar4[0x268d])))) {
      *puVar1 = 1;
    }
    psVar4 = psVar4 + 5;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = (int *)((int)this + param_1 * 4 + 0x3fae2);
  psVar3 = (short *)((int)this + param_1 * 2 + 0xb06c);
  iVar5 = 0;
  psVar4 = (short *)((int)this + 0xa3ea);
  do {
    psVar4[-6] = 0;
    if (*psVar3 < 0x81) {
      *psVar4 = *psVar3;
    }
    else {
      *psVar4 = 0x80;
    }
    iVar2 = (int)psVar4[-6];
    if (iVar2 < *psVar4) {
      puVar1 = (undefined2 *)((int)this + (iVar5 + iVar2) * 2 + 0xa3f6);
      do {
        iVar2 = iVar2 + 1;
        *puVar1 = *(undefined2 *)(*piVar6 + -2 + iVar2 * 2);
        puVar1 = puVar1 + 1;
      } while (iVar2 < *psVar4);
    }
    iVar5 = iVar5 + 0xfd;
    psVar4 = psVar4 + 1;
    psVar3 = psVar3 + 5;
    piVar6 = piVar6 + 5;
  } while (iVar5 < 0x5ee);
  return;
}


