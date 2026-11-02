/* Module: vegas30k.dll
   Function: SfCDProject_ReadPQListFile
   Address: 01014770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_ReadPQListFile(void *,int *,char *,struct tSFLIST *,int,unsigned long)
    */

long SfCDProject_ReadPQListFile
               (void *param_1,int *param_2,char *param_3,tSFLIST *param_4,int param_5,ulong param_6)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  BOOL BVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  uint nNumberOfBytesToRead;
  uint *puVar7;
  uint local_480;
  uint local_47c;
  uint local_478;
  undefined4 local_474;
  int local_470;
  undefined1 local_46c [4];
  uint local_468;
  LONG local_464 [2];
  undefined4 local_45c;
  undefined4 local_458;
  LONG local_454;
  int local_450;
  LONG local_44c;
  int local_448;
  undefined4 local_444;
  uint local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  char local_430;
  uint local_42c;
  cditemtag local_428 [36];
  uint local_404;
  wchar_t local_400 [255];
  undefined1 local_201;
  wchar_t local_200 [256];
  
                    /* 0x14770  285  ?SfCDProject_ReadPQListFile@@YGJPAXPAHPADPAUtSFLIST@@HK@Z */
  pcVar1 = SetFilePointer_exref;
  local_468 = 0;
  local_464[0] = 0;
  SetFilePointer(param_1,0,local_464,0);
  if (param_5 == 0) {
    iVar3 = riff_ReadFileID(param_1,&local_474);
    if (iVar3 < 0) {
      return iVar3;
    }
    if (local_470 != 0x51504653) {
      return -0x7fffbffb;
    }
  }
  else {
    lVar2 = riff_FindListChunkFromStart(param_1,0x736c7170);
    if (lVar2 < 0) {
      return lVar2;
    }
  }
  riff_SaveLocation(param_1);
  if (param_5 == 0) {
    local_45c = local_474;
    iVar3 = riff_FindChunkHeaderInRIFF(param_1,0x20746d66,local_46c);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    lVar2 = riff_FindChunkHeader(param_1,0x20746d66,local_46c);
    if (lVar2 < 0) {
      return lVar2;
    }
  }
  lVar2 = riff_ReadDataBounded(param_1,&local_440,0x11);
  if (-1 < lVar2) {
    if ((local_440 & 1) == 0) {
      *param_2 = 0;
      *param_3 = '\0';
    }
    else {
      *param_2 = 1;
      *(undefined4 *)param_3 = local_43c;
      *(undefined4 *)(param_3 + 4) = local_438;
      *(undefined4 *)(param_3 + 8) = local_434;
      param_3[0xd] = '\0';
      param_3[0xc] = local_430;
    }
    riff_RestoreLocation(param_1);
    if (param_5 == 0) {
      iVar3 = riff_FindListChunkFromStart(param_1,0x6c786469);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    else {
      lVar2 = riff_FindListChunk(param_1,0x6c786469,&local_480);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    for (; 8 < local_480; local_480 = local_480 - local_478) {
      iVar3 = riff_ReadChunkHeader(param_1,&local_470);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_480 = local_480 - 8;
      if (local_470 == 0x78646e69) {
        puVar7 = &local_42c;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        pwVar6 = local_400;
        for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
          pwVar6[0] = L'\0';
          pwVar6[1] = L'\0';
          pwVar6 = pwVar6 + 2;
        }
        BVar4 = ReadFile(param_1,&local_42c,0x2c,&local_47c,(LPOVERLAPPED)0x0);
        if ((BVar4 == 0) || (local_47c != 0x2c)) {
          return -0x7ffb1ff8;
        }
        if (0x2c < local_42c) {
          local_448 = local_42c - 0x2c;
          local_444 = 0;
          (*pcVar1)(param_1,local_448,&local_444);
        }
        nNumberOfBytesToRead = local_404;
        if (param_6 != 0x10000) {
          nNumberOfBytesToRead = local_404 * 2;
        }
        if (nNumberOfBytesToRead < 0x201) {
          BVar4 = ReadFile(param_1,local_400,nNumberOfBytesToRead,&local_47c,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            return -0x7ffb1ff8;
          }
          if (nNumberOfBytesToRead != local_47c) {
            return -0x7ffb1ff8;
          }
        }
        else {
          BVar4 = ReadFile(param_1,local_400,0x200,&local_47c,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            return -0x7ffb1ff8;
          }
          if (local_47c != 0x200) {
            return -0x7ffb1ff8;
          }
          local_450 = nNumberOfBytesToRead - 0x200;
          local_201 = 0;
          local_44c = 0;
          SetFilePointer(param_1,local_450,&local_44c,1);
        }
        if (param_6 == 0x10000) {
          pwVar6 = local_400;
        }
        else {
          sVar5 = wcslen(local_400);
          if ((&stack0x00000000 == (undefined1 *)0x400) || (local_400[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_400,-1,(LPSTR)local_200,sVar5 + 1,(LPCSTR)0x0,(LPBOOL)0x0)
            ;
          }
          else if (&stack0x00000000 != (undefined1 *)0x200) {
            local_200[0]._0_1_ = 0;
          }
          *(undefined1 *)((int)local_200 + sVar5) = 0;
          pwVar6 = local_200;
        }
        SfPQList_InsertItem(param_4,-1,local_428,(char *)pwVar6);
        if ((nNumberOfBytesToRead & 1) != 0) {
          local_458 = 1;
          local_454 = 0;
          SetFilePointer(param_1,1,&local_454,1);
        }
      }
      else {
        local_468 = local_478;
        local_464[0] = 0;
        (*pcVar1)(param_1,local_478,local_464);
        local_480 = local_480 - local_478;
      }
      if ((local_478 & 1) != 0) {
        local_478 = local_478 + 1;
      }
      pcVar1 = SetFilePointer_exref;
    }
    lVar2 = 0;
  }
  return lVar2;
}


