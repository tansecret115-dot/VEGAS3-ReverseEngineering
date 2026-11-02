/* Module: vegas30k.dll
   Function: FUN_01015930
   Address: 01015930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015930(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  WCHAR *pWVar4;
  uint local_324;
  uint local_320;
  uint local_31c;
  uchar local_30c [260];
  WCHAR local_208 [260];
  
  riff_SaveLocation();
  iVar1 = riff_GetNumListEntries();
  if (iVar1 == 0) {
    if (local_324 != 0) {
      iVar1 = _SfList_CreateExZ_32(param_2,4,0xffffffff,0xffffffff,2);
      if (iVar1 != 0) {
        return iVar1;
      }
      riff_RestoreLocation();
      local_320 = 0;
      if (local_324 != 0) {
        do {
          iVar1 = riff_ReadChunkHeader();
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = *param_2;
          puVar3 = local_30c;
          for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar3[0] = '\0';
            puVar3[1] = '\0';
            puVar3[2] = '\0';
            puVar3[3] = '\0';
            puVar3 = puVar3 + 4;
          }
          pWVar4 = local_208;
          for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
            pWVar4[0] = L'\0';
            pWVar4[1] = L'\0';
            pWVar4 = pWVar4 + 2;
          }
          iVar1 = _SfList_AllocAndInsertItem_20(iVar1,0);
          if (iVar1 != 0) {
            return iVar1;
          }
          puVar3 = *(uchar **)(*(int *)(*param_2 + 8) + local_320 * 4);
          if (param_4 == 0x10000) {
            iVar1 = riff_ReadData();
            if (iVar1 < 0) {
              return iVar1;
            }
            _mbscpy(puVar3,local_30c);
          }
          else {
            iVar1 = riff_ReadData();
            if (iVar1 < 0) {
              return iVar1;
            }
            if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
              WideCharToMultiByte(0,0,local_208,-1,(LPSTR)puVar3,(local_31c >> 1) + 1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (puVar3 != (uchar *)0x0) {
              *puVar3 = '\0';
            }
            puVar3[local_31c >> 1] = '\0';
          }
          local_320 = local_320 + 1;
        } while (local_320 < local_324);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


