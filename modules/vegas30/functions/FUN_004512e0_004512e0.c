/* Module: vegas30.exe
   Function: FUN_004512e0
   Address: 004512e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004512e0(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,UINT *param_4,int *param_5)

{
  uint uVar1;
  DWORD DVar2;
  UINT UVar3;
  int iVar4;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  short *lpBaseAddress;
  uint uVar5;
  uint uVar6;
  UINT local_174;
  CHAR local_168 [100];
  char local_104 [260];
  
  local_174 = *param_4;
  if (*param_3 != '\0') {
    DVar2 = GetPrivateProfileStringA(param_1,param_2,(LPCSTR)0x0,local_104,0x104,param_3);
    if (DVar2 != 0) {
      if (((DVar2 == 3) && ('/' < local_104[0])) && (local_104[0] < ':')) {
        UVar3 = GetPrivateProfileIntA(param_1,param_2,0,param_3);
        if ((99 < UVar3) && (UVar3 < 1000)) {
          uVar1 = param_5[2];
          uVar5 = (byte)param_4[1] & 1;
          param_5[2] = uVar5 | uVar1 & 0xfffffffe;
          uVar6 = (*(byte *)((int)param_4 + 5) & 1) << 2;
          param_5[2] = uVar6 | uVar5 | uVar1 & 0xfffffffa;
          param_5[2] = (*(byte *)((int)param_4 + 6) & 1) << 3 | uVar6 | uVar5 | uVar1 & 0xfffffff2 |
                       2;
          iVar4 = FUN_004014b0(UVar3 & 0xffff,0);
          *param_5 = iVar4;
          local_174 = UVar3;
        }
      }
      if (*param_5 != 0) goto LAB_004514dd;
      hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
        if (0x36 < DVar2) {
          hFileMappingObject =
               CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,8,0,0,(LPCSTR)0x0);
          if (hFileMappingObject != (HANDLE)0x0) {
            lpBaseAddress = MapViewOfFile(hFileMappingObject,1,0,0,0);
            if (lpBaseAddress != (short *)0x0) {
              if ((*lpBaseAddress == 0x4d42) && (*(uint *)(lpBaseAddress + 1) <= DVar2)) {
                *param_5 = (int)(lpBaseAddress + 7);
                param_5[2] = param_5[2] & 0xfffffffd;
              }
              else {
                UnmapViewOfFile(lpBaseAddress);
              }
            }
            CloseHandle(hFileMappingObject);
          }
          CloseHandle(hFile);
        }
      }
    }
  }
  if (*param_5 == 0) {
    uVar1 = param_5[2];
    uVar5 = (byte)param_4[1] & 1 | uVar1 & 0xfffffffe;
    param_5[2] = uVar5;
    uVar1 = CONCAT31((int3)((uVar1 & 0xfffffffe) >> 8),(char)uVar5);
    uVar5 = (*(byte *)((int)param_4 + 5) & 1) << 2;
    param_5[2] = uVar5 | uVar1 & 0xfffffffb;
    param_5[2] = (*(byte *)((int)param_4 + 6) & 1) << 3 | uVar5 | uVar1 & 0xfffffff3 | 2;
    if (local_174 != 0) {
      iVar4 = FUN_004014b0(local_174 & 0xffff,0);
      *param_5 = iVar4;
      return iVar4;
    }
    *param_5 = 0;
    return 0;
  }
LAB_004514dd:
  SfPrintF(local_168,"Tile%s",param_2);
  UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)(byte)param_4[1],param_3);
  param_5[2] = ((uint)(UVar3 != 0) ^ param_5[2]) & 1 ^ param_5[2];
  SfPrintF(local_168,"Colorize%s",param_2);
  UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)*(byte *)((int)param_4 + 5),param_3);
  param_5[2] = (uint)(UVar3 != 0) << 2 | param_5[2] & 0xfffffffbU;
  SfPrintF(local_168,"Mask%s",param_2);
  UVar3 = GetPrivateProfileIntA(param_1,local_168,(uint)*(byte *)((int)param_4 + 6),param_3);
  param_5[2] = (uint)(UVar3 != 0) << 3 | param_5[2] & 0xfffffff7U;
  return *param_5;
}


