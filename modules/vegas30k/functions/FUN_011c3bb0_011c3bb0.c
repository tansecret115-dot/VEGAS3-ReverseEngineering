/* Module: vegas30k.dll
   Function: FUN_011c3bb0
   Address: 011c3bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c3bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1cc) != 0) {
    if ((*(byte *)(param_1 + 0x228) & 2) == 0) {
      iVar2 = *(int *)(param_1 + 0x1cc) + -1;
      *(int *)(param_1 + 0x1cc) = iVar2;
      if (iVar2 == 0) {
        if (*(int **)(param_1 + 0x118) != (int *)0x0) {
          iVar2 = **(int **)(param_1 + 0x118);
          if ((*(byte *)(param_1 + 0x110) & 0x20) == 0) {
            iVar3 = 0;
            if (0 < iVar2) {
              do {
                piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x118) + 8) + iVar3 * 4);
                if (piVar1 != (int *)0x0) {
                  (**(code **)(*piVar1 + 8))(piVar1);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar2);
            }
          }
          else {
            iVar3 = 0;
            if (0 < iVar2) {
              do {
                piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x118) + 8) + iVar3 * 4);
                if (piVar1 != (int *)0x0) {
                  (**(code **)(*piVar1 + 8))(piVar1);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar2);
            }
          }
          _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x118));
          *(undefined4 *)(param_1 + 0x118) = 0;
        }
        if (*(int **)(param_1 + 0x120) != (int *)0x0) {
          iVar2 = **(int **)(param_1 + 0x120);
          iVar3 = 0;
          if (0 < iVar2) {
            do {
              piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x120) + 8) + iVar3 * 4);
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 8))(piVar1);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
          }
          _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x120));
          *(undefined4 *)(param_1 + 0x120) = 0;
        }
        *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xfffffffe;
        return 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1cc) = 1;
    }
  }
  return 0;
}


