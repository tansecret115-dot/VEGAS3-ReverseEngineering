/* Module: vegas30k.dll
   Function: FUN_01019cf0
   Address: 01019cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01019cf0(int param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  HANDLE hFile;
  int iVar2;
  undefined4 uVar3;
  _FILETIME local_144;
  FILETIME local_13c;
  FILETIME local_134;
  _FILETIME local_12c [5];
  CHAR local_104 [244];
  undefined4 uStack_10;
  
  uVar3 = 0;
  _SfGetPathNameFromFilePath_12(param_3,local_104);
  iVar1 = lstrlenA(local_104);
  if ((iVar1 != 0) && (iVar1 = _SfCreateDirectory_8(local_104), iVar1 == 0)) {
    return 0x8004e006;
  }
  hFile = CreateFileA(param_3,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0x8004e006;
  }
  DosDateTimeToFileTime(*(WORD *)(param_2 + 8),*(WORD *)(param_2 + 6),local_12c);
  LocalFileTimeToFileTime(local_12c,&local_144);
  local_13c.dwLowDateTime = local_144.dwLowDateTime;
  local_134.dwLowDateTime = local_144.dwLowDateTime;
  local_13c.dwHighDateTime = local_144.dwHighDateTime;
  local_134.dwHighDateTime = local_144.dwHighDateTime;
  SetFileTime(hFile,&local_13c,&local_134,&local_144);
  iVar1 = *(int *)(param_1 + 8);
  (**(code **)(*(int *)(param_1 + 0xc) + 4))(iVar1,*(undefined4 *)(param_2 + 0x20),0,0);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 *)(param_1 + 8),&local_134,0x1e,&stack0xfffffea8);
  if (((iVar2 != 0) && (iVar1 == 0x1e)) &&
     ((local_144.dwLowDateTime == 0x4034b50 || (local_144.dwLowDateTime == 0x30304b50)))) {
    (**(code **)(*(int *)(param_1 + 0xc) + 4))
              (*(undefined4 *)(param_1 + 8),
               (uint)(ushort)local_12c[0].dwHighDateTime + (uint)local_12c[0].dwLowDateTime._2_2_ +
               0x1e + *(int *)(param_2 + 0x20),0,0);
    uVar3 = FUN_01019ac0(param_1,hFile,param_2,uStack_10);
  }
  CloseHandle(hFile);
  return uVar3;
}


