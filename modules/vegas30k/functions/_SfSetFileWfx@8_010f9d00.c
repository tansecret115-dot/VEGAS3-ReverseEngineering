/* Module: vegas30k.dll
   Function: _SfSetFileWfx@8
   Address: 010f9d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSetFileWfx_8(LPCSTR param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  HANDLE hObject;
  DWORD local_44;
  void *local_40;
  short local_3c;
  void *local_3a;
  short local_36;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  short local_18;
  undefined1 local_14 [20];
  
                    /* 0xf9d00  1193  _SfSetFileWfx@8 */
  psVar1 = param_2;
  local_28 = *(undefined4 *)param_2;
  local_24 = *(undefined4 *)(param_2 + 2);
  local_20 = *(undefined4 *)(param_2 + 4);
  local_1c = *(undefined4 *)(param_2 + 6);
  local_18 = param_2[8];
  iVar2 = _SfAudio_FixBadWfx_4(&local_28);
  if (iVar2 != 0) {
    return -0x7ffb2000;
  }
  hObject = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  local_40 = (void *)FUN_010f9c50(hObject,0);
  if (local_40 != (void *)0x0) {
    free(local_40);
    iVar2 = riff_WriteChunk(hObject,0x20746d66,psVar1,0x12,0);
    CloseHandle(hObject);
    return iVar2;
  }
  param_2 = local_40;
  iVar2 = iff_GetAIFFWfx(hObject,local_14,&param_2,&local_40);
  if (-1 < iVar2) {
    if (*psVar1 != 1) {
      return -0x7ffb1fea;
    }
    local_3c = psVar1[1];
    local_36 = psVar1[7];
    local_3a = param_2;
    aiff_CreateRate(*(undefined4 *)(psVar1 + 2),local_34);
    aiff_WriteByteSwap16(&local_3c,1);
    aiff_WriteByteSwap32(&local_3a,1);
    aiff_WriteByteSwap16(&local_36,1);
    aiff_WriteByteSwap16(local_34,5);
    iVar2 = iff_FindChunkHeader(hObject,0x434f4d4d,&local_44,0);
    if (-1 < iVar2) {
      WriteFile(hObject,&local_3c,0x12,&local_44,(LPOVERLAPPED)0x0);
      if (local_44 != 0x12) {
        return -0x7ffb1ff7;
      }
      CloseHandle(hObject);
    }
  }
  return iVar2;
}


