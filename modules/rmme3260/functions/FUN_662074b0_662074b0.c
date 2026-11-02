/* Module: rmme3260.dll
   Function: FUN_662074b0
   Address: 662074b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662074b0(int param_1,short param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  bVar1 = false;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar4 = *(int **)(param_1 + 0x18);
    do {
      if (*(short *)(*piVar4 + 4) == param_2) {
        bVar1 = true;
        goto LAB_662074ed;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
    bVar1 = false;
  }
LAB_662074ed:
  if (!bVar1) {
    puVar2 = operator_new(0xe);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_6626b59c;
      *(undefined2 *)(puVar2 + 1) = 0;
      *(undefined4 *)((int)puVar2 + 6) = 0;
      *(undefined4 *)((int)puVar2 + 10) = 0;
    }
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    *(short *)(puVar2 + 1) = param_2;
    FUN_6624ff10((void *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),puVar2);
  }
  return 0;
}


