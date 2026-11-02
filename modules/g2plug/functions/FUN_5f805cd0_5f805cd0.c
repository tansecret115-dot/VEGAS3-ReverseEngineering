/* Module: g2plug.dll
   Function: FUN_5f805cd0
   Address: 5f805cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f805cd0(int param_1,uchar *param_2,int param_3)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  HANDLE hFile;
  DWORD DVar2;
  tm *_Tm;
  uchar *_Source;
  DWORD *pDVar3;
  LPOVERLAPPED p_Var4;
  DWORD local_22c;
  undefined8 local_228;
  undefined1 local_20c;
  uchar local_208 [260];
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (((param_1 != 0) && (param_2 != (uchar *)0x0)) && (param_3 != 0)) {
    iVar1 = lstrlenA((LPCSTR)param_2);
    _mbsncat(param_2,".txt",3 - iVar1);
    hFile = CreateFileA((LPCSTR)param_2,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      pDVar3 = &local_22c;
      p_Var4 = (LPOVERLAPPED)0x0;
      DVar2 = lstrlenA((LPCSTR)param_2);
      WriteFile(hFile,param_2,DVar2,pDVar3,p_Var4);
      time(&local_228);
      _Tm = localtime(&local_228);
      _Source = (uchar *)asctime(_Tm);
      _mbscpy((uchar *)((int)&local_228 + 4),_Source);
      local_20c = 0;
      FUN_5f825e30(local_208,(BYTE *)" encoded: %s\r\n");
      pDVar3 = &local_22c;
      p_Var4 = (LPOVERLAPPED)0x0;
      DVar2 = lstrlenA((LPCSTR)local_208);
      WriteFile(hFile,local_208,DVar2,pDVar3,p_Var4);
      lpWideCharStr = (LPCWSTR)(param_3 + 0x14);
      if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x104) {
        local_104[0] = '\0';
      }
      local_1 = 0;
      FUN_5f825e30(local_208,(BYTE *)"Template name:%s\r\n\r\n");
      pDVar3 = &local_22c;
      p_Var4 = (LPOVERLAPPED)0x0;
      DVar2 = lstrlenA((LPCSTR)local_208);
      WriteFile(hFile,local_208,DVar2,pDVar3,p_Var4);
      FUN_5f805e60(hFile);
      CloseHandle(hFile);
    }
  }
  return;
}


