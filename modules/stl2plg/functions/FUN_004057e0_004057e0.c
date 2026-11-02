/* Module: stl2plg.dll
   Function: FUN_004057e0
   Address: 004057e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004057e0(int param_1)

{
  HANDLE hObject;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_00417fd0(param_1);
    hObject = (HANDLE)FUN_00417c30(*(int **)(param_1 + 0x1d8));
    FUN_00417b60(*(int **)(param_1 + 0x1d8));
    CloseHandle(hObject);
    return 0;
  }
  return 0;
}


