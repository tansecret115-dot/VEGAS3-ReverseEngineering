/* Module: vegas30k.dll
   Function: FUN_011b6d50
   Address: 011b6d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b6d50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_011eb808;
  if ((int *)param_1[4] != (int *)0x0) {
    iVar1 = *(int *)param_1[4];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[4] + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[4]);
    param_1[4] = 0;
  }
  return;
}


