/* Module: qt4plug.dll
   Function: FUN_5f519e50
   Address: 5f519e50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f519e50(LPCSTR param_1)

{
  HANDLE hObject;
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  hObject = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = FUN_5f525f30((uint)hObject);
    bVar2 = -1 < iVar1;
    CloseHandle(hObject);
  }
  return bVar2;
}


