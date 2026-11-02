/* Module: vegas30k.dll
   Function: FUN_01015480
   Address: 01015480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015480(HANDLE param_1,int param_2,int *param_3)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int local_10;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
  hFile = param_1;
  local_10 = 4;
  local_c = 0;
  iVar2 = riff_WriteListHeader(param_1,0x6b617274,0);
  if (-1 < iVar2) {
    riff_SaveLocation(hFile,&param_1);
    iVar1 = param_2;
    param_1 = (HANDLE)((int)param_1 + -8);
    iVar2 = riff_WriteChunk(hFile,0x686b7274,param_2,0xc,&local_c);
    if (-1 < iVar2) {
      local_10 = local_10 + local_c;
      iVar2 = FUN_01015390(hFile,*(undefined4 *)(iVar1 + 0xc),&local_c);
      if (-1 < iVar2) {
        local_10 = local_10 + local_c;
        iVar2 = FUN_01015070(hFile,*(undefined4 *)(iVar1 + 0x10),&local_c);
        if (-1 < iVar2) {
          local_10 = local_10 + local_c;
          riff_SaveLocation(hFile,&local_4);
          riff_RestoreLocation(hFile,param_1);
          BVar3 = WriteFile(hFile,&local_10,4,&local_8,(LPOVERLAPPED)0x0);
          if ((BVar3 == 0) || (local_8 != 4)) {
            iVar2 = -0x7ffb1ff7;
          }
          else {
            riff_RestoreLocation(hFile,local_4);
            local_10 = local_10 + 8;
          }
        }
      }
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_10;
  }
  return iVar2;
}


