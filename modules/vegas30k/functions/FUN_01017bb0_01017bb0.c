/* Module: vegas30k.dll
   Function: FUN_01017bb0
   Address: 01017bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_01017bb0(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  BOOL BVar4;
  code *pcVar5;
  tagDIR_ENTRY **unaff_EBP;
  char *pcVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulong uVar11;
  undefined4 *puVar12;
  CHAR *pCVar13;
  HANDLE local_554;
  int local_550;
  undefined4 local_54c;
  _WIN32_FIND_DATAA local_548;
  char local_408 [260];
  CHAR local_304 [260];
  undefined1 local_200 [512];
  
  SfPrintF(local_304,"%s\\*.*",param_3);
  local_554 = FindFirstFileA(local_304,&local_548);
  pcVar5 = lstrlenA_exref;
  if (local_554 == (HANDLE)0xffffffff) {
    pCVar13 = local_304;
    uVar7 = _SfGetString2_8(DAT_0120e5c8,0x107e);
    SfPrintF(local_200,uVar7,pCVar13);
    FUN_01016830(param_1,local_200);
    return 0;
  }
  do {
    if (local_548.cFileName[0] != '.') {
      local_554 = (HANDLE)(*pcVar5)(param_3);
      iVar1 = (*pcVar5)(&local_548.dwReserved1);
      if (0x104 < (uint)(local_550 + 1 + iVar1)) {
        pCVar13 = local_548.cFileName;
        uVar7 = _SfGetString2_8(DAT_0120e5c8,0x1082);
        SfPrintF(local_200,uVar7,param_3,pCVar13);
        FUN_01016830(param_1,local_200);
        break;
      }
      SfPrintF(local_408,"%s\\%s",param_3,local_548.cFileName);
      puVar12 = &local_54c;
      uVar11 = 0;
      uVar7 = 0;
      pcVar6 = local_408;
      DVar8 = local_548.nFileSizeLow;
      DVar9 = local_548.nFileSizeHigh;
      DVar10 = local_548.dwFileAttributes;
      pcVar2 = (char *)_SfGetFileNamePtrA_4(local_408);
      lVar3 = DtAllocateDirectoryEntry
                        (param_1,param_2,(char *)0x0,pcVar2,pcVar6,CONCAT44(DVar8,uVar7),
                         CONCAT44(DVar10,DVar9),uVar11,(int)puVar12,unaff_EBP);
      if ((lVar3 < 0) ||
         ((pcVar5 = lstrlenA_exref, (local_548.dwFileAttributes & 0x10) != 0 &&
          (iVar1 = FUN_01017bb0(param_1,local_54c,local_408), pcVar5 = lstrlenA_exref, iVar1 < 0))))
      break;
    }
    BVar4 = FindNextFileA(local_554,&local_548);
  } while (BVar4 != 0);
  lVar3 = DtSortDirEntry(param_1,param_2);
  FindClose(local_554);
  return lVar3;
}


