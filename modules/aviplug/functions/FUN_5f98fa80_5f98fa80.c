/* Module: aviplug.dll
   Function: FUN_5f98fa80
   Address: 5f98fa80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f98fa80(HANDLE param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  BOOL BVar3;
  uint *puVar4;
  uint nNumberOfBytesToWrite;
  uint local_8;
  int local_4;
  
  hFile = param_1;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (*param_2 != 0) {
    uVar1 = param_2[1];
    local_4 = 0;
    local_8 = 0;
    puVar4 = param_2;
    if (*param_2 != 0) {
      do {
        if ((*(int *)(uVar1 + 8 + local_8 * 0xc) != 0) &&
           (nNumberOfBytesToWrite = *(uint *)(uVar1 + local_8 * 0xc + 4), nNumberOfBytesToWrite != 0
           )) {
          iVar2 = FUN_5f98e5d0(hFile);
          if (iVar2 < 0) {
            return iVar2;
          }
          BVar3 = WriteFile(hFile,(LPCVOID)(uVar1 + local_8 * 0xc),4,(LPDWORD)&param_1,
                            (LPOVERLAPPED)0x0);
          if ((BVar3 == 0) ||
             (BVar3 = WriteFile(hFile,*(LPCVOID *)(uVar1 + 8 + local_8 * 0xc),nNumberOfBytesToWrite,
                                (LPDWORD)&param_1,(LPOVERLAPPED)0x0), BVar3 == 0)) {
            return -0x7ffb1ff7;
          }
          if ((nNumberOfBytesToWrite & 1) != 0) {
            BVar3 = WriteFile(hFile,&local_8,1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if (BVar3 == 0) {
              return -0x7ffb1ff7;
            }
            nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
          }
          local_4 = local_4 + 0xc + nNumberOfBytesToWrite;
          puVar4 = param_2;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *puVar4);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_4;
    }
  }
  return 0;
}


