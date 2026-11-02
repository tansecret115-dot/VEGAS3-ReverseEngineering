/* Module: vegas30k.dll
   Function: FUN_011be1a0
   Address: 011be1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011be1a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (*(uint *)(param_1 + 0x800) != 0) {
    if (((*(uint *)(param_1 + 0x7ec) & 0x20000) != 0) && ((*(uint *)(param_1 + 0x800) & 10) != 0)) {
      if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(param_1 + 0x7f4);
      }
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x7f4) + 8) + iVar5 * 4);
          (**(code **)(*piVar1 + 0x20))(piVar1,&param_1);
          if ((param_1 == 3) && (iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1), iVar3 == 0)) {
            FUN_011a12c0();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
    *(undefined4 *)(iVar2 + 0x800) = 0;
    return 1;
  }
  return 0;
}


