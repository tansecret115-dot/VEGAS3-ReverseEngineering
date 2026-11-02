/* Module: vegas30.exe
   Function: FUN_00546ba0
   Address: 00546ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546ba0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0x80070057;
  }
  if (*(HANDLE *)(param_1 + 0xa8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    DrawDibClose(*(int *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0xc0),0);
  }
  puVar3 = (undefined4 *)(param_1 + 0x48);
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


