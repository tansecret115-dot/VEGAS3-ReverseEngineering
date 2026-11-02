/* Module: stl2plg.dll
   Function: FUN_00405780
   Address: 00405780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405780(int param_1,LPCSTR param_2)

{
  HANDLE hObject;
  int iVar1;
  
  hObject = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = FUN_00417c00(hObject);
    *(int *)(param_1 + 0x1d8) = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
    CloseHandle(hObject);
  }
  return 0x8004e007;
}


