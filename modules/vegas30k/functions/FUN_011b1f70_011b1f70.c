/* Module: vegas30k.dll
   Function: FUN_011b1f70
   Address: 011b1f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b1f70(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0xc6c) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0xc6c);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0xc6c) + 4) * iVar3 +
                *(int *)(*(int *)(param_1 + 0xc6c) + 8);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))
                    (*(int **)(param_1 + 0x1c),*(int *)(iVar4 + 0xc));
          (**(code **)(**(int **)(iVar4 + 0xc) + 8))(*(int **)(iVar4 + 0xc));
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xc6c),0,0xffffffff,1);
    piVar2 = *(int **)(param_1 + 0x1c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(piVar2);
    }
    return 0;
  }
  return 0x8000ffff;
}


