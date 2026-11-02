/* Module: vegas30k.dll
   Function: FUN_011c5990
   Address: 011c5990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c5990(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_011ec268;
  if ((int *)param_1[0x84] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x84];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[0x84] + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[0x84]);
    param_1[0x84] = 0;
  }
  if ((int *)param_1[0x86] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x86];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[0x86] + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[0x86]);
    param_1[0x86] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  return;
}


