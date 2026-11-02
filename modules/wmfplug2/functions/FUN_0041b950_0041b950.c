/* Module: wmfplug2.dll
   Function: FUN_0041b950
   Address: 0041b950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0041b950(int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (piVar1 = *(int **)(param_1 + 100), piVar1 != (int *)0x0))
  {
    (**(code **)(*piVar1 + 0x40))(piVar1,*(int *)(param_1 + 0x40));
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 8);
  *(undefined4 *)(param_1 + 100) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(LPCVOID *)(param_1 + 0x44) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x44));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x44));
    GlobalFree(pvVar2);
  }
  if (*(LPCVOID *)(param_1 + 0x80) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalFree(pvVar2);
  }
  if (*(LPCVOID *)(param_1 + 0x60) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x60));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x60));
    GlobalFree(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


