/* Module: vegas30k.dll
   Function: SfFMMeta_IsMetaFile
   Address: 0101c040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfFMMeta_IsMetaFile(char const *,char const *) */

int SfFMMeta_IsMetaFile(char *param_1,char *param_2)

{
  HANDLE hFile;
  int iVar1;
  uint nNumberOfBytesToRead;
  BOOL BVar2;
  LPCSTR lpString2;
  uint local_214;
  DWORD local_210;
  undefined1 local_20c [3];
  uchar auStack_209 [261];
  uchar local_104 [260];
  
                    /* 0x1c040  385  ?SfFMMeta_IsMetaFile@@YGHPBD0@Z */
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    iVar1 = riff_FindChunkHeaderInRIFF(hFile,0x49504653,&local_214,local_20c);
    if (-1 < iVar1) {
      nNumberOfBytesToRead = local_214;
      if (0x103 < local_214) {
        nNumberOfBytesToRead = 0x104;
      }
      BVar2 = ReadFile(hFile,auStack_209 + 1,nNumberOfBytesToRead,&local_210,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(param_1);
        auStack_209[local_214] = '\0';
        _mbscpy(local_104,auStack_209 + 1);
        iVar1 = lstrcmpA((LPCSTR)local_104,lpString2);
        if (iVar1 == 0) {
          CloseHandle(hFile);
          return 1;
        }
      }
    }
    CloseHandle(hFile);
  }
  return 0;
}


