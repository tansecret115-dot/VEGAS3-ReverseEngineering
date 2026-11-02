/* Module: vegas30.exe
   Function: FUN_004417b0
   Address: 004417b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004417b0(HANDLE param_1,undefined4 *param_2,undefined4 *param_3,tSFLIST *param_4,int param_5
                ,int param_6)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  char *pcVar4;
  uint nNumberOfBytesToRead;
  uint *puVar5;
  uint local_280;
  undefined4 local_27c;
  uint local_278;
  int local_274;
  DWORD local_270;
  undefined4 local_26c;
  uint local_268;
  LONG local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  LONG local_254;
  int local_250;
  LONG local_24c;
  int local_248;
  undefined4 local_244;
  uint local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230;
  uint local_22c;
  cditemtag local_228 [36];
  uint local_204;
  char local_200 [511];
  undefined1 local_1;
  
  pcVar1 = SetFilePointer_exref;
  local_268 = 0;
  local_264 = 0;
  SetFilePointer(param_1,0,&local_264,0);
  if (param_5 == 0) {
    iVar2 = riff_ReadFileID(param_1,&local_27c,&local_274);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_274 != 0x51504653) {
      return -0x7fffbffb;
    }
  }
  else {
    iVar2 = riff_FindListChunkFromStart(param_1,0x736c7170,&local_27c);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  riff_SaveLocation(param_1,&local_260);
  if (param_5 == 0) {
    local_25c = local_27c;
    iVar2 = riff_FindChunkHeaderInRIFF(param_1,0x20746d66,&local_26c,&local_25c);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = riff_FindChunkHeader(param_1,0x20746d66,&local_26c,&local_27c);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar2 = riff_ReadDataBounded(param_1,&local_240,0x11,local_26c);
  if (iVar2 == 0) {
    if ((local_240 & 1) == 0) {
      *param_2 = 0;
      *(undefined1 *)param_3 = 0;
    }
    else {
      *param_2 = 1;
      *param_3 = local_23c;
      param_3[1] = local_238;
      param_3[2] = local_234;
      *(undefined1 *)((int)param_3 + 0xd) = 0;
      *(undefined1 *)(param_3 + 3) = local_230;
    }
    riff_RestoreLocation(param_1,local_260);
    if (param_5 == 0) {
      iVar2 = riff_FindListChunkFromStart(param_1,0x6c786469,&local_280);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      iVar2 = riff_FindListChunk(param_1,0x6c786469,&local_280,&local_27c);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    for (; 8 < local_280; local_280 = local_280 - local_278) {
      iVar2 = riff_ReadChunkHeader(param_1,&local_274,&local_278);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_280 = local_280 - 8;
      if (local_274 == 0x78646e69) {
        puVar5 = &local_22c;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        pcVar4 = local_200;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + 4;
        }
        BVar3 = ReadFile(param_1,&local_22c,0x2c,&local_270,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          return -0x7ffb1ff8;
        }
        if (0x2c < local_22c) {
          local_248 = local_22c - 0x2c;
          local_244 = 0;
          (*pcVar1)(param_1,local_248,&local_244,1);
        }
        nNumberOfBytesToRead = local_204;
        if (param_6 != 0x10000) {
          nNumberOfBytesToRead = local_204 * 2;
        }
        if (nNumberOfBytesToRead < 0x201) {
          BVar3 = ReadFile(param_1,local_200,nNumberOfBytesToRead,&local_270,(LPOVERLAPPED)0x0);
          if (BVar3 == 0) {
            return -0x7ffb1ff8;
          }
        }
        else {
          BVar3 = ReadFile(param_1,local_200,0x200,&local_270,(LPOVERLAPPED)0x0);
          if (BVar3 == 0) {
            return -0x7ffb1ff8;
          }
          local_250 = nNumberOfBytesToRead - 0x200;
          local_1 = 0;
          local_24c = 0;
          SetFilePointer(param_1,local_250,&local_24c,1);
        }
        if (param_6 == 0x10000) {
          pcVar4 = local_200;
        }
        else {
          pcVar4 = (char *)_SfGetPrintFromWideString_8(DAT_00647204,local_200);
        }
        SfPQList_InsertItem(param_4,-1,local_228,pcVar4);
        if ((nNumberOfBytesToRead & 1) != 0) {
          local_258 = 1;
          local_254 = 0;
          SetFilePointer(param_1,1,&local_254,1);
        }
      }
      else {
        local_268 = local_278;
        local_264 = 0;
        (*pcVar1)(param_1,local_278,&local_264,1);
        local_280 = local_280 - local_278;
      }
      if ((local_278 & 1) != 0) {
        local_278 = local_278 + 1;
      }
      pcVar1 = SetFilePointer_exref;
    }
    iVar2 = 0;
  }
  return iVar2;
}


