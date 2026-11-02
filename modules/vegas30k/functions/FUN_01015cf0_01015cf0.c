/* Module: vegas30k.dll
   Function: FUN_01015cf0
   Address: 01015cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015cf0(HANDLE param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  HANDLE hFile;
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_18;
  DWORD local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  LONG local_4;
  
  puVar1 = param_2;
  hFile = param_1;
  local_18 = *param_3;
  puVar4 = param_2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_2[9] = 0;
  iVar3 = riff_FindListChunk(param_1,0x206e6772,&param_2,&local_18);
  puVar4 = param_2;
  if (-1 < iVar3) {
    while( true ) {
      if (puVar4 < (undefined4 *)0x8) {
        *param_3 = local_18;
        return 0;
      }
      iVar3 = riff_ReadChunkHeader(hFile,&param_1,&param_2);
      if (iVar3 < 0) break;
      local_18 = local_18 + -8;
      if (param_1 == (HANDLE)0x5453494c) {
        BVar2 = ReadFile(hFile,&local_10,4,&local_14,(LPOVERLAPPED)0x0);
        if ((BVar2 != 0) && (local_14 == 4)) {
          if (local_10 == 0x74736c78) {
            riff_SaveLocation(hFile,&local_c);
            iVar3 = FUN_01015ad0(hFile,puVar1 + 9,param_2);
            if (iVar3 != 0) break;
            riff_RestoreLocation(hFile,local_c);
          }
          local_8 = 0xfffffffc;
          local_4 = -1;
          SetFilePointer(hFile,-4,&local_4,1);
          goto LAB_01015e29;
        }
        iVar3 = -0x7ffb1ff8;
        break;
      }
      if (param_1 == (HANDLE)0x686e6772) {
        iVar3 = FUN_01015bd0(hFile,puVar1,param_2,param_4);
        if (iVar3 < 0) break;
        if (((uint)param_2 & 1) != 0) {
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
      else {
LAB_01015e29:
        param_2 = (undefined4 *)riff_SkipChunk(hFile,param_2);
      }
      local_18 = local_18 - (int)param_2;
      puVar4 = (undefined4 *)((int)puVar4 + (-8 - (int)param_2));
    }
    FUN_01014f30(puVar1);
  }
  return iVar3;
}


