/* Module: vidcap30.exe
   Function: FUN_00555170
   Address: 00555170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00555170(int param_1,LPCWSTR param_2)

{
  LPSTR lpMultiByteStr;
  
  lpMultiByteStr = (LPSTR)(param_1 + 0x48);
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
    WideCharToMultiByte(0,0,param_2,-1,lpMultiByteStr,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (lpMultiByteStr != (LPSTR)0x0) {
    *lpMultiByteStr = '\0';
    *(undefined1 *)(param_1 + 0x14b) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x14b) = 0;
  return;
}


