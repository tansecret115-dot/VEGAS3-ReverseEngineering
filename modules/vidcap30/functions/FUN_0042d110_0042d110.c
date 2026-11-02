/* Module: vidcap30.exe
   Function: FUN_0042d110
   Address: 0042d110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d110(int param_1,char *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HANDLE hFile;
  BOOL BVar5;
  long lVar6;
  DWORD DVar7;
  DWORD local_228;
  tagBITMAPINFOHEADER *local_224;
  tagBITMAPINFOHEADER *local_220;
  WORD *local_21c;
  undefined2 local_218;
  int local_216;
  undefined2 uStack_212;
  undefined2 local_210;
  undefined2 uStack_20e;
  undefined2 local_20c;
  undefined2 uStack_20a;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  lVar6 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7fffbffd;
  }
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  iVar2 = _SfCreateDirectory_8(local_104,0);
  if (iVar2 == 0) {
    return -0x7ffb1ff7;
  }
  local_21c = *(WORD **)(param_1 + 0x24);
  local_224 = (tagBITMAPINFOHEADER *)(param_1 + 0x28);
  DVar7 = *(DWORD *)(param_1 + 0x20);
  local_220 = (tagBITMAPINFOHEADER *)0x0;
  if ((param_4 != 0) &&
     ((*(int *)(param_1 + 0x68) != 0 || (*(int *)(param_1 + 0x6c) != 0x3ff00000)))) {
    local_210 = 0;
    uStack_20e = 0;
    local_20c = 0;
    uStack_20a = 0;
    uVar3 = ftol();
    lVar6 = _SfDibAlloc_28(&local_220,0x1c,uVar3,*(undefined4 *)(param_1 + 0x30),0,0,0);
    if (-1 < lVar6) {
      lVar6 = _SfDibCopy_36(local_220,0,0,0,local_224,*(undefined4 *)(param_1 + 0x24),0,0,0x1000020)
      ;
      if (-1 < lVar6) {
        local_224 = local_220;
        if (local_220->biCompression == 0) {
          if (((local_220->biClrUsed != 0) || (uVar1 = local_220->biBitCount, uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_0042d22c;
          DVar7 = 1 << ((byte)uVar1 & 0x1f);
LAB_0042d232:
          local_21c = (WORD *)((int)&local_220->biSize + local_220->biSize + DVar7 * 4);
        }
        else {
          if (local_220->biCompression != 3) {
LAB_0042d22c:
            DVar7 = local_220->biClrUsed;
            goto LAB_0042d232;
          }
          local_21c = &local_220[1].biPlanes;
        }
        uVar4 = (uint)local_220->biBitCount * local_220->biWidth + 0x1f;
        DVar7 = ((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) * local_220->biHeight
        ;
      }
    }
  }
  if (param_3 != 0) {
    lVar6 = SfSaveDiskJpegDib(param_2,local_224,local_21c,(SFJPEGFILEOPTIONS *)0x0);
    goto LAB_0042d37a;
  }
  hFile = CreateFileA(param_2,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    lVar6 = -0x7ff8fffa;
    goto LAB_0042d37a;
  }
  uStack_212 = 0;
  local_210 = 0;
  local_216 = DVar7 + 0x36;
  local_228 = 0;
  local_218 = 0x4d42;
  uStack_20e = 0x36;
  local_20c = 0;
  BVar5 = WriteFile(hFile,&local_218,0xe,&local_228,(LPOVERLAPPED)0x0);
  if (BVar5 == 0) {
LAB_0042d367:
    lVar6 = -0x7ffb1ff7;
  }
  else {
    local_228 = 0;
    BVar5 = WriteFile(hFile,local_224,0x28,&local_228,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_0042d367;
    local_228 = 0;
    BVar5 = WriteFile(hFile,local_21c,DVar7,&local_228,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_0042d367;
    if (DAT_005bb4c0 != 0) {
      GetWindowsDirectoryA((LPSTR)local_208,0x104);
      _mbscat(local_208,(uchar *)"\\media\\click.wav");
      sndPlaySoundA((LPCSTR)local_208,1);
      CloseHandle(hFile);
      goto LAB_0042d37a;
    }
  }
  CloseHandle(hFile);
LAB_0042d37a:
  if (local_220 != (tagBITMAPINFOHEADER *)0x0) {
    _SfDibFree_8(local_220,0);
  }
  return lVar6;
}


