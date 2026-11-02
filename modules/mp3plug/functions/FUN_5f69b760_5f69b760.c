/* Module: mp3plug.dll
   Function: FUN_5f69b760
   Address: 5f69b760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69b760(void *this,LPCSTR param_1)

{
  undefined4 *hObject;
  int iVar1;
  
  hObject = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject != (undefined4 *)0xffffffff) {
    iVar1 = FUN_5f69b7b0(this,hObject);
    CloseHandle(hObject);
    return iVar1;
  }
  return -0x7ffb1ff6;
}


