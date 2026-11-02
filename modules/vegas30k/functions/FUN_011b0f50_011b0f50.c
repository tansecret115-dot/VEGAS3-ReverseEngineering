/* Module: vegas30k.dll
   Function: FUN_011b0f50
   Address: 011b0f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b0f50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)param_1[0x31c];
  *param_1 = &PTR_LAB_011eb4e4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0);
    (**(code **)(*(int *)param_1[0x31c] + 8))((int *)param_1[0x31c]);
  }
  param_1[0x31c] = 0;
  if ((int *)param_1[0x31b] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x31b];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = *(int *)(param_1[0x31b] + 4) * iVar3 + *(int *)(param_1[0x31b] + 8);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
          piVar1 = (int *)param_1[7];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x1c))(piVar1,*(int *)(iVar4 + 0xc));
          }
          (**(code **)(**(int **)(iVar4 + 0xc) + 8))(*(int **)(iVar4 + 0xc));
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    _SfList_Destroy_4(param_1[0x31b]);
    param_1[0x31b] = 0;
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[6];
  param_1[7] = 0;
  param_1[8] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[6] = 0;
  if ((void *)param_1[0x67] != (void *)0x0) {
    free((void *)param_1[0x67]);
  }
  param_1[0x67] = 0;
  return;
}


