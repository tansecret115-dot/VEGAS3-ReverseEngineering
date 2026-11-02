/* Module: vfplugs.dll
   Function: FUN_00411130
   Address: 00411130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411130(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 4);
      (**(code **)(*(int *)(param_1 + 4) + 0x50))(*(int *)(param_1 + 0xe0));
      *(int *)(param_1 + 0xe0) = iVar1;
    } while (iVar1 != 0);
  }
  piVar2 = *(int **)(param_1 + 0xd28);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  if (*(HANDLE *)(param_1 + 0xd4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xd4));
  }
  FUN_00411090(param_1);
  return 0;
}


