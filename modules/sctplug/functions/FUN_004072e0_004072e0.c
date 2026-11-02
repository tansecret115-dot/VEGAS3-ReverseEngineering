/* Module: sctplug.dll
   Function: FUN_004072e0
   Address: 004072e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004072e0(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hFile;
  undefined4 *lpBuffer;
  uint uVar1;
  HANDLE nNumberOfBytesToRead;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  DWORD local_4;
  
  lpBuffer = param_2;
  hFile = param_1;
  puVar4 = param_2;
  for (iVar3 = 0x6a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar3 = FUN_00414450(hFile,(int *)&param_2,&local_8);
  if (iVar3 < 0) {
    return 0;
  }
  uVar1 = FUN_00414500(hFile,0x746f6373,&param_1,(int *)&param_2);
  if (uVar1 != 0) {
    nNumberOfBytesToRead = param_1;
    if ((HANDLE)0x1a7 < param_1) {
      nNumberOfBytesToRead = (HANDLE)0x1a8;
    }
    iVar3 = -(int)nNumberOfBytesToRead + 0x1a8;
    if (((uint)param_1 & 1) != 0) {
      iVar3 = -(int)nNumberOfBytesToRead + 0x1a9;
    }
    BVar2 = ReadFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return -0x7ffb1ff8;
    }
    if (iVar3 != 0) {
      SetFilePointer(hFile,iVar3,(PLONG)0x0,1);
    }
    iVar3 = 0;
  }
  return iVar3;
}


