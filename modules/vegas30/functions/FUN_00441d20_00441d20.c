/* Module: vegas30.exe
   Function: FUN_00441d20
   Address: 00441d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441d20(HANDLE param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  undefined1 local_24 [4];
  DWORD local_20 [3];
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  iVar1 = param_5;
  hFile = param_1;
  if (param_5 == 0) {
    iVar2 = riff_WriteFileID(param_1,0x51504653,0x1d);
  }
  else {
    riff_SaveLocation(param_1,&param_5);
    iVar2 = riff_WriteListHeader(hFile,0x736c7170,0x1d);
  }
  if (iVar2 == 0) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    if (param_2 != 0) {
      local_10 = *param_3;
      local_c = param_3[1];
      local_8 = param_3[2];
      local_4 = *(undefined1 *)(param_3 + 3);
    }
    local_14 = (uint)(param_2 != 0);
    iVar2 = riff_WriteChunk(hFile,0x20746d66,&local_14,0x11,local_24);
    if (iVar2 == 0) {
      iVar2 = FUN_00441b30(hFile,param_4,&param_1);
      if ((iVar2 == 0) && (iVar1 != 0)) {
        riff_RestoreLocation(hFile,param_5);
        local_20[1] = 4;
        local_20[2] = 0;
        SetFilePointer(hFile,4,(PLONG)(local_20 + 2),1);
        param_1 = (HANDLE)((int)param_1 + 0x1d);
        WriteFile(hFile,&param_1,4,local_20,(LPOVERLAPPED)0x0);
        local_20[1] = 0;
        local_20[2] = 0;
        SetFilePointer(hFile,0,(PLONG)(local_20 + 2),2);
        riff_UpdateRIFFSize(hFile,0x25);
      }
    }
  }
  return;
}


