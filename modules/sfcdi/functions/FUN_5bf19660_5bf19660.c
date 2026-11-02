/* Module: sfcdi.dll
   Function: FUN_5bf19660
   Address: 5bf19660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5bf19660(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1fe0) != 0) {
    *(undefined4 *)(param_1 + 0x1ddc) = 1;
    SetEvent(*(HANDLE *)(param_1 + 0x1df4));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x1fe0),10000);
    CloseHandle(*(HANDLE *)(param_1 + 0x1fe0));
    *(undefined4 *)(param_1 + 0x1fe0) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1dc4);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1dc4) = 0;
    }
  }
  return 0;
}


