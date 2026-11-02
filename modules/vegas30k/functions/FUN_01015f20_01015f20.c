/* Module: vegas30k.dll
   Function: FUN_01015f20
   Address: 01015f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015f20(HANDLE param_1,tagSFCDPRJ_TRACK_PROJECT *param_2,int *param_3,undefined4 param_4)

{
  tagSFCDPRJ_TRACK_PROJECT *ptVar1;
  HANDLE hFile;
  tagSFCDPRJ_TRACK_PROJECT *ptVar2;
  tagSFCDPRJ_TRACK_PROJECT *ptVar3;
  int iVar4;
  BOOL BVar5;
  tagSFCDPRJ_TRACK_PROJECT *local_20;
  tagSFCDPRJ_TRACK_PROJECT *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  DWORD local_c [3];
  
  ptVar2 = param_2;
  hFile = param_1;
  local_20 = (tagSFCDPRJ_TRACK_PROJECT *)*param_3;
  ptVar1 = param_2 + 0xc;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)ptVar1 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  local_1c = local_20;
  iVar4 = riff_FindListChunk(param_1,0x6b617274,&param_2,&local_1c);
  ptVar3 = param_2;
  if (-1 < iVar4) {
    local_20 = param_2;
    riff_SaveLocation(hFile,&local_14);
    iVar4 = riff_FindChunkHeader(hFile,0x686b7274,&param_2,&local_20);
    if (-1 < iVar4) {
      *(undefined4 *)ptVar2 = 0;
      *(undefined4 *)(ptVar2 + 4) = 0;
      *(undefined4 *)(ptVar2 + 8) = 0;
      iVar4 = riff_ReadDataBounded(hFile,ptVar2,0xc,param_2);
      if (-1 < iVar4) {
        if (((uint)param_2 & 1) != 0) {
          param_2 = param_2 + 1;
        }
        riff_RestoreLocation(hFile,local_14);
        local_20 = ptVar3;
        while( true ) {
          if (local_20 < (tagSFCDPRJ_TRACK_PROJECT *)0x8) {
            *param_3 = (int)local_1c;
            return 0;
          }
          iVar4 = riff_ReadChunkHeader(hFile,&local_10,&param_2);
          if (iVar4 < 0) break;
          local_1c = local_1c + -8;
          local_20 = local_20 + -8;
          if (local_10 == 0x5453494c) {
            BVar5 = ReadFile(hFile,&local_18,4,local_c,(LPOVERLAPPED)0x0);
            if ((BVar5 == 0) || (local_c[0] != 4)) {
              iVar4 = -0x7ffb1ff8;
              break;
            }
            if (local_18 == 0x74736c78) {
              riff_SaveLocation(hFile,&param_1);
              iVar4 = FUN_01015ad0(hFile,ptVar2 + 0x10,param_2);
              if (iVar4 != 0) break;
              riff_RestoreLocation(hFile,param_1);
            }
            if (local_18 == 0x74736c72) {
              riff_SaveLocation(hFile,&param_1);
              iVar4 = FUN_01015e80(hFile,ptVar1,param_2 + -4,param_4);
              if (iVar4 != 0) break;
              riff_RestoreLocation(hFile,param_1);
            }
            local_c[1] = 0xfffffffc;
            local_c[2] = 0xffffffff;
            SetFilePointer(hFile,-4,(PLONG)(local_c + 2),1);
          }
          param_2 = (tagSFCDPRJ_TRACK_PROJECT *)riff_SkipChunk(hFile,param_2);
          local_1c = local_1c + -(int)param_2;
          local_20 = local_20 + -(int)param_2;
        }
        SfCDProject_FreeTrack(ptVar2);
      }
    }
  }
  return iVar4;
}


