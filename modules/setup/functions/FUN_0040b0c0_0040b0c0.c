/* Module: Setup.exe
   Function: FUN_0040b0c0
   Address: 0040b0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040b0c0(void *this,LPCSTR param_1,LPCSTR param_2,uchar *param_3)

{
  undefined4 uVar1;
  uchar *puVar2;
  int iVar3;
  HANDLE hFile;
  BOOL BVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  DWORD local_588;
  int local_584;
  HANDLE local_580;
  int local_57c;
  DWORD local_578;
  _FILETIME local_574;
  _FILETIME local_56c;
  _FILETIME local_564;
  int local_55c [4];
  undefined4 local_54c;
  DWORD local_548;
  DWORD local_544;
  undefined1 local_540 [4];
  undefined1 local_53c [4];
  undefined1 local_538 [8];
  DWORD local_530;
  DWORD local_52c;
  DWORD local_528;
  int local_524;
  uint local_51c;
  int local_518;
  CHAR local_514 [260];
  undefined1 local_410;
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  pcVar6 = _mbscpy_exref;
  if ((param_3 == (uchar *)0x0) || (*param_3 == '\0')) {
    puVar2 = (uchar *)FUN_0040adc0(param_2,param_1);
    pcVar6 = _mbscpy_exref;
    _mbscpy(local_30c,puVar2);
  }
  else {
    _mbscpy(local_30c,param_3);
    _SfAddSlashToPathName_8(local_30c,0x104);
    puVar2 = (uchar *)_SfGetFileNamePtrA_4(param_1);
    _mbscat(local_30c,puVar2);
  }
  if (local_30c[0] == '\0') {
    return 0;
  }
  if ((((*(int *)((int)this + 0x24) == 2) && ((*(uint *)((int)this + 0x884) & 4) == 0)) &&
      (*(int *)((int)this + 0x20) != 0)) && (iVar3 = CArchive2::IsEntryInArchive(this), iVar3 != 0))
  {
    iVar3 = FUN_0040ae00(this,(LPCSTR)local_30c);
    local_580 = (HANDLE)(uint)(iVar3 == 1);
    if (local_580 != (HANDLE)0x0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)((int)this + 0x28);
  piVar7 = local_55c;
  for (iVar3 = 0x94; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_54c = *(undefined4 *)((int)this + 0x2c);
  local_55c[0] = 0xa034d55;
  local_55c[2] = 0;
  local_55c[3] = uVar1;
  local_528 = GetFileAttributesA(param_1);
  if ((*(byte *)((int)this + 0x884) & 8) != 0) {
    local_528 = local_528 & 0xfffffffe;
  }
  hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  local_580 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00410c30(this,0xaaaaaaa4,(uchar *)"AddFile",(uchar *)0x0);
    return -0x7ffb1ffa;
  }
  local_530 = GetFileSize(hFile,&local_578);
  local_52c = local_578;
  BVar4 = GetFileTime(hFile,&local_56c,&local_564,&local_574);
  if (BVar4 == 0) {
    FUN_00410c30(this,0xaaaaaaab,(uchar *)"AddFile",(uchar *)0x0);
    iVar3 = -0x7ffb1ff5;
LAB_0040b4b1:
    CloseHandle(hFile);
    return iVar3;
  }
  local_548 = local_574.dwLowDateTime;
  local_544 = local_574.dwHighDateTime;
  local_524 = lstrlenA((LPCSTR)local_30c);
  local_518 = *(int *)((int)this + 0x1c);
  local_51c = *(uint *)((int)this + 0x18);
  local_588 = 0;
  (*pcVar6)(local_514,local_30c);
  local_410 = 0;
  BVar4 = WriteFile(*(HANDLE *)((int)this + 0xc),local_55c,0x40,&local_588,(LPOVERLAPPED)0x0);
  uVar5 = *(uint *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar5 + local_588;
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar5,local_588);
  if (BVar4 != 0) {
    MultiByteToWideChar(0,1,local_514,-1,local_208,0x104);
    local_2 = 0;
    BVar4 = WriteFile(*(HANDLE *)((int)this + 0xc),local_208,local_524 * 2,&local_588,
                      (LPOVERLAPPED)0x0);
    if (BVar4 != 0) {
      uVar5 = *(uint *)((int)this + 0x18);
      *(uint *)((int)this + 0x18) = uVar5 + local_588;
      *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar5,local_588);
      if (*(int *)((int)this + 0x28) == 0) {
        iVar3 = FUN_0040b710(this,hFile,(int)local_55c);
      }
      else {
        if (*(int *)((int)this + 0x28) != 1) {
          CloseHandle(hFile);
          return -0x7fffbfff;
        }
        iVar3 = FUN_0040b9c0(this,hFile,(int)local_55c);
      }
      if (-1 < iVar3) {
        uVar5 = *(uint *)((int)this + 0x890) + local_51c;
        local_584 = *(int *)((int)this + 0x894) + local_518 +
                    (uint)CARRY4(*(uint *)((int)this + 0x890),local_51c) +
                    (uint)(0xffffffe3 < uVar5);
        local_57c = 0;
        SetFilePointer(*(HANDLE *)((int)this + 0xc),uVar5 + 0x1c,&local_584,0);
        WriteFile(*(HANDLE *)((int)this + 0xc),local_540,4,&local_588,(LPOVERLAPPED)0x0);
        WriteFile(*(HANDLE *)((int)this + 0xc),local_53c,4,&local_588,(LPOVERLAPPED)0x0);
        WriteFile(*(HANDLE *)((int)this + 0xc),local_538,8,&local_588,(LPOVERLAPPED)0x0);
        local_584 = *(int *)((int)this + 0x894) + *(int *)((int)this + 0x1c) +
                    (uint)CARRY4(*(uint *)((int)this + 0x890),*(uint *)((int)this + 0x18));
        SetFilePointer(*(HANDLE *)((int)this + 0xc),
                       *(uint *)((int)this + 0x890) + *(uint *)((int)this + 0x18),&local_584,0);
        _SfList_AllocAndInsertItem_20(*(int **)((int)this + 0x10),local_55c,0x250,-1,&local_57c);
        *(int *)((int)this + 0x89c) = *(int *)((int)this + 0x89c) + 1;
        CloseHandle(local_580);
        return iVar3;
      }
      goto LAB_0040b4b1;
    }
  }
  FUN_00410c30(this,0xaaaaaaa9,(uchar *)"AddFile",(uchar *)0x0);
  CloseHandle(hFile);
  return -0x7ffb1ff7;
}


