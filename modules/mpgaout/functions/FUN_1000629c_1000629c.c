/* Module: mpgaout.dll
   Function: FUN_1000629c
   Address: 1000629c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000629c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar2) {
    do {
      iVar1 = iVar5 + 1;
      puVar4 = (undefined8 *)(param_3 + iVar5 * 0x100);
      piVar6 = (int *)(param_1 + iVar5 * 0x180);
      iVar5 = 0x1f;
      do {
        iVar3 = *piVar6;
        piVar6 = piVar6 + 1;
        *puVar4 = (&DAT_1000c100)[iVar3];
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar5 = iVar1;
    } while (iVar1 < iVar2);
  }
  return;
}


