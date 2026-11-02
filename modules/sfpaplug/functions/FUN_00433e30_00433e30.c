/* Module: sfpaplug.dll
   Function: FUN_00433e30
   Address: 00433e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433e30(LPCVOID param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (*(void **)((int)param_1 + 0x26c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x26c));
  }
  if (*(void **)((int)param_1 + 0x2a8) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x2a8));
  }
  if (*(void **)((int)param_1 + 800) != (void *)0x0) {
    free(*(void **)((int)param_1 + 800));
  }
  if (*(void **)((int)param_1 + 0x2e4) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x2e4));
  }
  if (*(void **)((int)param_1 + 0x224) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x224));
  }
  piVar1 = *(int **)((int)param_1 + 0x264);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0x2a0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0x318);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0x2dc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return;
}


