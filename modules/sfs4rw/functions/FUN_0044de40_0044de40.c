/* Module: sfs4rw.dll
   Function: FUN_0044de40
   Address: 0044de40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0044de40(void *this,LPCWSTR param_1)

{
  LPSTR lpMultiByteStr;
  
  lpMultiByteStr = (LPSTR)((int)this + 0x48);
  if ((param_1 == (LPCWSTR)0x0) || (*param_1 != L'\0')) {
    WideCharToMultiByte(0,0,param_1,-1,lpMultiByteStr,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (lpMultiByteStr != (LPSTR)0x0) {
    *lpMultiByteStr = '\0';
    *(undefined1 *)((int)this + 0x14b) = 0;
    return;
  }
  *(undefined1 *)((int)this + 0x14b) = 0;
  return;
}


