/* Module: wavplug.dll
   Function: FUN_5f382870
   Address: 5f382870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f382870(int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (*(LPCVOID *)(param_1 + 0x4c) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x30));
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28));
  piVar1 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}


