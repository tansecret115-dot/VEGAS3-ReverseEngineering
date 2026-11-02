/* Module: vegas30.exe
   Function: FUN_00582dd0
   Address: 00582dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00582dd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 4);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 8) + iVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


