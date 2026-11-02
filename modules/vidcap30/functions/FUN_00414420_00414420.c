/* Module: vidcap30.exe
   Function: FUN_00414420
   Address: 00414420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414420(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,UINT *param_4,int *param_5)

{
  uint uVar1;
  DWORD DVar2;
  UINT UVar3;
  short *lpBaseAddress;
  int iVar4;
  uint uVar5;
  uint uVar6;
  tagBITMAPINFOHEADER *local_178;
  UINT local_174;
  tagBITMAPINFOHEADER *local_170;
  DWORD local_16c;
  CHAR local_168 [100];
  char local_104 [260];
  
  local_174 = *param_4;
  if ((*param_3 != '\0') &&
     (DVar2 = GetPrivateProfileStringA(param_1,param_2,(LPCSTR)0x0,local_104,0x104,param_3),
     DVar2 != 0)) {
    if ((DVar2 == 3) &&
       (((('/' < local_104[0] && (local_104[0] < ':')) &&
         (UVar3 = GetPrivateProfileIntA(param_1,param_2,0,param_3), 99 < UVar3)) && (UVar3 < 1000)))
       ) {
      uVar1 = param_5[2];
      uVar5 = (byte)param_4[2] & 1;
      param_5[2] = uVar5 | uVar1 & 0xfffffffe;
      uVar6 = (*(byte *)((int)param_4 + 9) & 1) << 2;
      param_5[2] = uVar6 | uVar5 | uVar1 & 0xfffffffa;
      param_5[2] = (*(byte *)((int)param_4 + 10) & 1) << 3 | uVar6 | uVar5 | uVar1 & 0xfffffff2 | 2;
      local_174 = UVar3;
      if (param_4[1] == 0) {
        iVar4 = FUN_00401250(UVar3 & 0xffff,0);
        *param_5 = iVar4;
      }
      else if (param_4[1] == 1) {
        SfLoadPngDib(DAT_005ba2a0,(char *)(UVar3 & 0xffff),0,&local_178);
        *param_5 = (int)local_178;
        if (local_178 != (tagBITMAPINFOHEADER *)0x0) {
          param_5[2] = param_5[2] | 0x40;
        }
      }
    }
    if (*param_5 == 0) {
      SfLoadPngDib((HSFLANG__ *)0x0,local_104,1,&local_178);
      *param_5 = (int)local_178;
      if (local_178 == (tagBITMAPINFOHEADER *)0x0) {
        local_178 = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                               );
        if ((local_178 != (tagBITMAPINFOHEADER *)0xffffffff) &&
           (local_16c = GetFileSize(local_178,(LPDWORD)0x0), 0x36 < local_16c)) {
          local_170 = CreateFileMappingA(local_178,(LPSECURITY_ATTRIBUTES)0x0,8,0,0,(LPCSTR)0x0);
          if (local_170 != (tagBITMAPINFOHEADER *)0x0) {
            lpBaseAddress = MapViewOfFile(local_170,1,0,0,0);
            if (lpBaseAddress != (short *)0x0) {
              if ((*lpBaseAddress == 0x4d42) && (*(uint *)(lpBaseAddress + 1) <= local_16c)) {
                *param_5 = (int)(lpBaseAddress + 7);
                param_5[2] = param_5[2] & 0xfffffffd;
              }
              else {
                UnmapViewOfFile(lpBaseAddress);
              }
            }
            CloseHandle(local_170);
          }
          CloseHandle(local_178);
        }
      }
      else {
        param_5[2] = param_5[2] & 0xfffffffdU | 0x40;
      }
    }
  }
  if (*param_5 == 0) {
    uVar1 = param_5[2];
    uVar5 = (byte)param_4[2] & 1 | uVar1 & 0xfffffffe;
    param_5[2] = uVar5;
    uVar1 = CONCAT31((int3)((uVar1 & 0xfffffffe) >> 8),(char)uVar5);
    uVar5 = (*(byte *)((int)param_4 + 9) & 1) << 2;
    param_5[2] = uVar5 | uVar1 & 0xfffffffb;
    param_5[2] = (*(byte *)((int)param_4 + 10) & 1) << 3 | uVar5 | uVar1 & 0xfffffff3 | 2;
    if (param_4[1] == 0) {
      if (local_174 == 0) {
        *param_5 = 0;
        return 0;
      }
      iVar4 = FUN_00401250(local_174 & 0xffff,0);
      *param_5 = iVar4;
      return iVar4;
    }
    if (param_4[1] == 1) {
      if (local_174 == 0) {
        local_170 = (tagBITMAPINFOHEADER *)0x0;
      }
      else {
        SfLoadPngDib(DAT_005ba2a0,(char *)(local_174 & 0xffff),0,&local_170);
      }
      *param_5 = (int)local_170;
      if (local_170 != (tagBITMAPINFOHEADER *)0x0) {
        param_5[2] = param_5[2] | 0x40;
        return *param_5;
      }
    }
  }
  else {
    SfPrintF(local_168,"Tile%s",param_2);
    UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)(byte)param_4[2],param_3);
    param_5[2] = ((uint)(UVar3 != 0) ^ param_5[2]) & 1 ^ param_5[2];
    SfPrintF(local_168,"Colorize%s",param_2);
    UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)*(byte *)((int)param_4 + 9),param_3);
    param_5[2] = (uint)(UVar3 != 0) << 2 | param_5[2] & 0xfffffffbU;
    SfPrintF(local_168,"Mask%s",param_2);
    UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)*(byte *)((int)param_4 + 10),param_3);
    param_5[2] = (uint)(UVar3 != 0) << 3 | param_5[2] & 0xfffffff7U;
  }
  return *param_5;
}


