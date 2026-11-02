/* Module: Setup.exe
   Function: GetSizeCreateSEA
   Address: 0040e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeCreateSEA(char const *,__int64 &) */

long CArchive2::GetSizeCreateSEA(char *param_1,__int64 *param_2)

{
  longlong lVar1;
  HANDLE hFile;
  DWORD DVar2;
  long lVar3;
  __int64 _Var4;
  longlong *in_stack_0000000c;
  DWORD local_4;
  
                    /* 0xe1e0  35  ?GetSizeCreateSEA@CArchive2@@QAGJPBDAA_J@Z */
  lVar3 = 0;
  lVar1 = 0;
  hFile = CreateFileA((LPCSTR)param_2,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00410c30(param_1,0xaaaaaaa4,(uchar *)"GetSizeCreateSEA",(uchar *)0x0);
    lVar3 = -0x7ffb1ffa;
  }
  else {
    DVar2 = GetFileSize(hFile,&local_4);
    _Var4 = GetArchiveSize();
    lVar1 = _Var4 + CONCAT44(local_4,DVar2);
    CloseHandle(hFile);
  }
  *in_stack_0000000c = lVar1;
  return lVar3;
}


