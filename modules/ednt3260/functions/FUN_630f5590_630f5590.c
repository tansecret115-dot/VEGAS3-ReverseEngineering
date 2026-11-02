/* Module: ednt3260.dll
   Function: FUN_630f5590
   Address: 630f5590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f5590(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  
  *(undefined2 *)(param_1 + 0xa3ba) = 1;
  *(undefined4 *)(param_1 + 0xa3bc) = 0;
  *(undefined4 *)(param_1 + 0xa3c0) = 0;
  *(undefined2 *)(param_1 + 0xa3c4) = 0;
  iVar3 = 0;
  psVar2 = (short *)(param_1 + 0xa3ea);
  piVar5 = (int *)(param_1 + 0x3fb72);
  do {
    psVar2[-6] = 0;
    *psVar2 = 7;
    iVar1 = (int)psVar2[-6];
    if (iVar1 < 7) {
      puVar4 = (undefined2 *)(param_1 + 0xa3f6 + (iVar1 + iVar3) * 2);
      do {
        iVar1 = iVar1 + 1;
        *puVar4 = *(undefined2 *)(*piVar5 + -2 + iVar1 * 2);
        puVar4 = puVar4 + 1;
      } while (iVar1 < *psVar2);
    }
    iVar3 = iVar3 + 0xfd;
    psVar2 = psVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 0x5ee);
  return;
}


