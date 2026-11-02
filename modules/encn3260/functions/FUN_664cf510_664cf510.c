/* Module: encn3260.dll
   Function: FUN_664cf510
   Address: 664cf510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cf510(int param_1)

{
  int *piVar1;
  
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  return;
}


