/* Module: vegas30.exe
   Function: FUN_005f8820
   Address: 005f8820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f8820(GUID *param_1,LPSTR param_2,int param_3,int param_4)

{
  int iVar1;
  OLECHAR local_50;
  WCHAR local_4e [39];
  
  *param_2 = '\0';
  iVar1 = StringFromGUID2(param_1,&local_50,0x28);
  if (iVar1 != 0) {
    if (param_4 != 0) {
      if ((&stack0x00000000 == (undefined1 *)0x50) || (local_50 != L'\0')) {
        WideCharToMultiByte(0,0,&local_50,-1,param_2,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (param_2 != (LPSTR)0x0) {
        *param_2 = '\0';
        param_2[param_3 + -1] = '\0';
        return iVar1 + -1;
      }
      param_2[param_3 + -1] = '\0';
      return iVar1 + -1;
    }
    if ((&stack0x00000000 == (undefined1 *)0x4e) || (local_4e[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_4e,-1,param_2,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (param_2 != (LPSTR)0x0) {
      *param_2 = '\0';
    }
    iVar1 = iVar1 + -3;
    param_2[param_3 + -1] = '\0';
    param_2[iVar1] = '\0';
  }
  return iVar1;
}


