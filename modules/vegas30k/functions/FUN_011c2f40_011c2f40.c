/* Module: vegas30k.dll
   Function: FUN_011c2f40
   Address: 011c2f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c2f40(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_011ec104;
  if ((int *)param_1[0x46] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x46];
    if ((*(byte *)(param_1 + 0x44) & 0x20) == 0) {
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          piVar2 = *(int **)(*(int *)(param_1[0x46] + 8) + iVar3 * 4);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          piVar2 = *(int **)(*(int *)(param_1[0x46] + 8) + iVar3 * 4);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    _SfList_Destroy_4(param_1[0x46]);
    param_1[0x46] = 0;
  }
  if ((int *)param_1[0x48] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x48];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[0x48] + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[0x48]);
    param_1[0x48] = 0;
  }
  if ((int *)param_1[0x49] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x49];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[0x49] + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[0x49]);
    param_1[0x49] = 0;
  }
  return;
}


