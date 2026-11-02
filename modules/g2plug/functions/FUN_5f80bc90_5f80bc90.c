/* Module: g2plug.dll
   Function: FUN_5f80bc90
   Address: 5f80bc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80bc90(HANDLE param_1,LPVOID param_2,int param_3)

{
  HANDLE hFile;
  LPVOID pvVar1;
  BOOL BVar2;
  uint local_4;
  
  hFile = param_1;
  BVar2 = ReadFile(param_1,&param_1,2,&local_4,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    FUN_5f80bbf0((undefined2 *)&param_1,local_4);
    pvVar1 = param_2;
    if (param_3 - 1U < ((uint)param_1 & 0xffff)) {
      param_1 = (HANDLE)(param_3 + -1);
    }
    BVar2 = ReadFile(hFile,param_2,(uint)param_1 & 0xffff,&local_4,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      *(undefined1 *)(local_4 + (int)pvVar1) = 0;
      return 1;
    }
  }
  return 0;
}


