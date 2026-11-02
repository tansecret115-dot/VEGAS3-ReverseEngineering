/* Module: vegas30k.dll
   Function: _SfGetFileWfx@12
   Address: 010f9ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort * _SfGetFileWfx_12(LPCSTR param_1,uint *param_2,DWORD *param_3)

{
  ushort uVar1;
  DWORD *pDVar2;
  HANDLE hFile;
  ushort *_Memory;
  int iVar3;
  DWORD DVar4;
  uint local_10;
  undefined1 local_c [4];
  uint local_8;
  undefined1 local_4 [4];
  
                    /* 0xf9ad0  952  _SfGetFileWfx@12 */
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return (ushort *)0x0;
  }
  _Memory = (ushort *)FUN_010f9c50(hFile,0);
  if (_Memory != (ushort *)0x0) {
    uVar1 = *_Memory;
    if (uVar1 < 4) {
      if ((uVar1 != 3) && (uVar1 != 1)) goto LAB_010f9bdf;
    }
    else if ((uVar1 < 0xfe00) || (0xfe02 < uVar1)) goto LAB_010f9bdf;
    if ((uint)_Memory[6] == (uint)(_Memory[7] >> 3) * (uint)_Memory[1]) {
      SetFilePointer(hFile,0,(PLONG)0x0,0);
      riff_ReadFileID(hFile,local_c,local_4);
      iVar3 = riff_FindChunkHeader(hFile,0x61746164,&local_8,local_c);
      pDVar2 = param_3;
      if (iVar3 == 0) {
        if (param_3 != (DWORD *)0x0) {
          DVar4 = SetFilePointer(hFile,0,(PLONG)0x0,1);
          *pDVar2 = DVar4;
          pDVar2[1] = 0;
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = local_8 / _Memory[6];
          param_2[1] = 0;
        }
        goto LAB_010f9c33;
      }
    }
LAB_010f9bdf:
    if (_Memory != (ushort *)0x0) {
      free(_Memory);
    }
    CloseHandle(hFile);
    return (ushort *)0x0;
  }
  local_10 = 0;
  param_1 = (LPCSTR)0x0;
  _Memory = calloc(1,0x12);
  iVar3 = iff_GetAIFFWfx(hFile,_Memory,&local_10,&param_1);
  if (param_3 != (DWORD *)0x0) {
    *param_3 = (DWORD)param_1;
    param_3[1] = 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_10;
    param_2[1] = 0;
  }
  if (iVar3 != 0) goto LAB_010f9bdf;
LAB_010f9c33:
  CloseHandle(hFile);
  return _Memory;
}


