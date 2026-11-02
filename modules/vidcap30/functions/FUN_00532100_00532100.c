/* Module: vidcap30.exe
   Function: FUN_00532100
   Address: 00532100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00532100(char *param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uchar *_Source;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  DWORD local_56c;
  uint local_568;
  _FILETIME local_564;
  undefined4 local_55c [4];
  undefined4 local_54c;
  DWORD local_548;
  DWORD local_544;
  DWORD local_528;
  int local_524;
  undefined4 local_51c;
  undefined4 local_518;
  uchar local_514 [260];
  undefined1 local_410;
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  _Source = (uchar *)FUN_00531000(param_3,param_2);
  if ((_Source == (uchar *)0x0) || (*_Source == '\0')) {
    FUN_00536e70(0xaaaaaaa0,"AddDirectory",0);
    return 1;
  }
  _mbscpy(local_30c,_Source);
  _SfAddSlashToPathName_8(local_30c,0x104);
  if ((((*(int *)(param_1 + 0x24) == 2) && ((*(uint *)(param_1 + 0x884) & 4) == 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (iVar3 = CArchive2::IsEntryInArchive(param_1), iVar3 != 0)
     ) {
    iVar3 = FUN_00531040(local_30c);
    local_568 = (uint)(iVar3 == 1);
    if (local_568 != 0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  puVar5 = local_55c;
  for (iVar3 = 0x94; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_55c[3] = *(undefined4 *)(param_1 + 0x28);
  local_55c[0] = 0xa034d55;
  local_54c = uVar1;
  local_528 = GetFileAttributesA(param_2);
  GetSystemTimeAsFileTime(&local_564);
  local_548 = local_564.dwLowDateTime;
  local_544 = local_564.dwHighDateTime;
  local_524 = lstrlenA((LPCSTR)local_30c);
  local_51c = *(undefined4 *)(param_1 + 0x18);
  local_518 = *(undefined4 *)(param_1 + 0x1c);
  local_56c = 0;
  local_568 = 0;
  _mbscpy(local_514,local_30c);
  local_410 = 0;
  iVar3 = _SfList_AllocAndInsertItem_20
                    (*(undefined4 *)(param_1 + 0x10),local_55c,0x250,0xffffffff,&local_568);
  if (iVar3 < 0) {
    return iVar3;
  }
  BVar4 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_55c,0x40,&local_56c,(LPOVERLAPPED)0x0);
  uVar2 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar2 + local_56c;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,local_56c);
  if (BVar4 != 0) {
    MultiByteToWideChar(0,1,(LPCSTR)local_514,-1,local_208,0x104);
    local_2 = 0;
    BVar4 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_208,local_524 * 2,&local_56c,
                      (LPOVERLAPPED)0x0);
    if (BVar4 != 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + local_56c;
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,local_56c);
      *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 1;
      return iVar3;
    }
  }
  FUN_00536e70(0xaaaaaaa9,"AddDirectory",0);
  return -0x7ffb1ff7;
}


