/* Module: vegas30k.dll
   Function: FUN_0105fd80
   Address: 0105fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0105fd80(int *param_1)

{
  int *lpFileName;
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,0);
  if (-1 < iVar1) {
    lpFileName = param_1 + 0xe;
    pvVar2 = CreateFileA((LPCSTR)lpFileName,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x8000080,
                         (HANDLE)0x0);
    param_1[0x96] = (int)pvVar2;
    if ((pvVar2 == (HANDLE)0xffffffff) && (param_1[8] == 0)) {
      param_1[8] = 1;
      *(CHAR *)lpFileName = '\0';
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,0);
      if (-1 < iVar1) {
        pvVar2 = CreateFileA((LPCSTR)lpFileName,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x8000080,
                             (HANDLE)0x0);
        param_1[0x96] = (int)pvVar2;
        if (pvVar2 == (HANDLE)0xffffffff) {
          iVar1 = -0x7ffb1ffa;
        }
      }
    }
  }
  return iVar1;
}


