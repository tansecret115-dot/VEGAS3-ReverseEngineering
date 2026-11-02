/* Module: vegas30k.dll
   Function: FUN_011a0b30
   Address: 011a0b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a0b30(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_011eac34;
  if ((int *)param_1[0x10e] != (int *)0x0) {
    iVar1 = *(int *)param_1[0x10e];
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(param_1[0x10e] + 8) + iVar3 * 4);
        (**(code **)(*piVar2 + 8))(piVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(param_1[0x10e]);
    param_1[0x10e] = 0;
  }
  piVar2 = (int *)param_1[0x104];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0x10f];
  param_1[0x104] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0xb6];
  param_1[0x10f] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  param_1[0xb6] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x105));
  FUN_011b46b0();
  return;
}


