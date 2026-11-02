/* Module: vegas30k.dll
   Function: FUN_011b8af0
   Address: 011b8af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b8af0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_011eb984;
  if (param_1[5] != 0) {
    iVar3 = 0;
    if (0 < (int)param_1[4]) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[5] + 8) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    _SfList_Destroy_4(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    iVar3 = 0;
    if (0 < (int)param_1[2]) {
      do {
        iVar2 = *(int *)(*(int *)(param_1[3] + 8) + iVar3 * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x220) != 0)) {
          piVar1 = (int *)param_1[6];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x34))(piVar1,*(int *)(iVar2 + 0x220));
            (**(code **)(*(int *)param_1[6] + 0x30))((int *)param_1[6]);
          }
          (**(code **)(**(int **)(iVar2 + 0x220) + 8))(*(int **)(iVar2 + 0x220));
          *(undefined4 *)(iVar2 + 0x220) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[2]);
    }
    _SfList_Destroy_4(param_1[3]);
    param_1[3] = 0;
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,&DAT_011ef120);
    (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
  }
  param_1[6] = 0;
  return;
}


