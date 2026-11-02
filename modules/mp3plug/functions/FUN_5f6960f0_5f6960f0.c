/* Module: mp3plug.dll
   Function: FUN_5f6960f0
   Address: 5f6960f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6960f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = 0;
  if (0 < *param_1) {
    puVar3 = (undefined4 *)param_1[2];
    do {
      if ((int *)*puVar3 != (int *)0x0) {
        iVar2 = 3;
        bVar6 = true;
        piVar4 = (int *)*puVar3;
        piVar5 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return 1;
        }
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < *param_1);
  }
  return 0;
}


