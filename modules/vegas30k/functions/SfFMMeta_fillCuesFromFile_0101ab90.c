/* Module: vegas30k.dll
   Function: SfFMMeta_fillCuesFromFile
   Address: 0101ab90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_fillCuesFromFile(void *,unsigned long,struct tSFLIST *) */

long SfFMMeta_fillCuesFromFile(void *param_1,ulong param_2,tSFLIST *param_3)

{
  long lVar1;
  int iVar2;
  BOOL BVar3;
  LPCVOID pMem;
  size_t sVar4;
  HGLOBAL pvVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint local_c84;
  uint local_c80;
  undefined4 local_c7c;
  undefined1 local_c78 [4];
  DWORD local_c74;
  undefined4 local_c70;
  undefined4 uStack_c6c;
  ulong local_c68;
  undefined4 uStack_c64;
  undefined4 local_c60;
  undefined4 uStack_c5c;
  ulong local_c58;
  undefined4 uStack_c54;
  undefined1 local_c50 [4];
  undefined1 local_c4c [4];
  undefined4 local_c48 [5];
  undefined4 local_c34;
  undefined1 local_c30 [4];
  undefined4 local_c2c;
  undefined4 local_c1c;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined4 local_c08;
  int local_c04;
  WCHAR local_c00 [1023];
  undefined2 local_402;
  CHAR local_400 [1024];
  
                    /* 0x1ab90  391  ?SfFMMeta_fillCuesFromFile@@YGJPAXKPAUtSFLIST@@@Z */
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  lVar1 = riff_ReadFileID(param_1,local_c78,local_c4c);
  if (lVar1 < 0) {
    return lVar1;
  }
  iVar2 = riff_FindChunkHeader(param_1,0x20657563,local_c50,local_c78);
  if (iVar2 < 0) {
    return 0;
  }
  BVar3 = ReadFile(param_1,&local_c84,4,&local_c74,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return -0x7ffb1ff8;
  }
  if (local_c84 == 0) {
    return 0;
  }
  pMem = (LPCVOID)FUN_0101af50(param_1,&local_c7c);
  local_c80 = 0;
  if (local_c84 != 0) {
    while( true ) {
      puVar6 = &local_c1c;
      for (iVar2 = 0x207; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      BVar3 = ReadFile(param_1,local_c48,0x18,&local_c74,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) break;
      if (param_2 == 0) {
        uVar7 = 0;
      }
      else {
        uStack_c6c = 0;
        local_c70 = local_c34;
        local_c58 = param_2;
        uStack_c54 = 0;
        uVar7 = ftol();
      }
      local_c18 = uVar7;
      iVar2 = FUN_0101ae40(pMem,local_c7c,0x6c62616c,local_c48[0],local_400,0x400,0);
      local_400[iVar2] = '\0';
      MultiByteToWideChar(0,1,local_400,-1,local_c00,0x400);
      local_402 = 0;
      sVar4 = wcslen(local_c00);
      local_c04 = sVar4 * 2 + 2;
      local_c1c = 0x1c;
      local_c08 = 0;
      iVar2 = FUN_0101ae40(pMem,local_c7c,0x7478746c,local_c48[0],0,0,local_c30);
      uVar7 = local_c10;
      if (iVar2 == 0) {
        local_c08 = 1;
        if (param_2 == 0) {
          uVar7 = 0;
        }
        else {
          uStack_c5c = 0;
          local_c60 = local_c2c;
          local_c68 = param_2;
          uStack_c64 = 0;
          uVar7 = ftol();
        }
      }
      local_c10 = uVar7;
      lVar1 = _SfList_AllocAndInsertItem_20(param_3,&local_c1c,sVar4 * 2 + 0x1e,0xffffffff,0);
      if ((lVar1 < 0) || (local_c80 = local_c80 + 1, local_c84 <= local_c80)) goto LAB_0101ae0e;
    }
    lVar1 = -0x7ffb1ff8;
  }
LAB_0101ae0e:
  if (pMem != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(pMem);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pMem);
    GlobalFree(pvVar5);
  }
  return lVar1;
}


