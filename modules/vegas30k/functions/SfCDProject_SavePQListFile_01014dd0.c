/* Module: vegas30k.dll
   Function: SfCDProject_SavePQListFile
   Address: 01014dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_SavePQListFile(void *,int,char *,struct tSFLIST *,int) */

long SfCDProject_SavePQListFile
               (void *param_1,int param_2,char *param_3,tSFLIST *param_4,int param_5)

{
  void *hFile;
  int iVar1;
  long lVar2;
  BOOL BVar3;
  DWORD local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  LONG local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  char local_4;
  
  iVar1 = param_5;
                    /* 0x14dd0  287  ?SfCDProject_SavePQListFile@@YGJPAXHPADPAUtSFLIST@@H@Z */
  hFile = param_1;
  if (param_5 == 0) {
    lVar2 = riff_WriteFileID(param_1,0x51504653,0x1d);
  }
  else {
    riff_SaveLocation(param_1,&param_5);
    lVar2 = riff_WriteListHeader(hFile,0x736c7170,0x1d);
  }
  if (lVar2 == 0) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = '\0';
    if (param_2 != 0) {
      local_10 = *(undefined4 *)param_3;
      local_c = *(undefined4 *)(param_3 + 4);
      local_8 = *(undefined4 *)(param_3 + 8);
      local_4 = param_3[0xc];
    }
    local_14 = (uint)(param_2 != 0);
    lVar2 = riff_WriteChunk(hFile,0x20746d66,&local_14,0x11,local_20);
    if (lVar2 == 0) {
      lVar2 = FUN_01014b70(hFile,param_4,&param_1);
      if ((lVar2 == 0) && (iVar1 != 0)) {
        riff_RestoreLocation(hFile,param_5);
        local_1c = 4;
        local_18 = 0;
        SetFilePointer(hFile,4,&local_18,1);
        param_1 = (void *)((int)param_1 + 0x1d);
        BVar3 = WriteFile(hFile,&param_1,4,&local_24,(LPOVERLAPPED)0x0);
        if ((BVar3 != 0) && (local_24 == 4)) {
          local_1c = 0;
          local_18 = 0;
          SetFilePointer(hFile,0,&local_18,2);
          lVar2 = riff_UpdateRIFFSize(hFile,0x25);
          return lVar2;
        }
        lVar2 = -0x7ffb1ff7;
      }
    }
  }
  return lVar2;
}


