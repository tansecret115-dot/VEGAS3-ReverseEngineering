/* Module: sfnetmedia.dll
   Function: FUN_004266a0
   Address: 004266a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004266a0(int param_1,int param_2,uchar *param_3)

{
  int iVar1;
  BOOL BVar2;
  HANDLE hFile;
  int iVar3;
  int iVar4;
  _FILETIME local_144;
  FILETIME local_13c;
  FILETIME local_134;
  _FILETIME local_12c [5];
  uchar local_104 [244];
  int *piStack_10;
  
  iVar4 = 0;
  FUN_00413410(param_3,local_104,0x104);
  iVar1 = lstrlenA((LPCSTR)local_104);
  if ((iVar1 != 0) && (BVar2 = FUN_00413f20(local_104,(LPSECURITY_ATTRIBUTES)0x0), BVar2 == 0)) {
    return -0x7ffb1ffa;
  }
  hFile = CreateFileA((LPCSTR)param_3,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ffa;
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
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 *)(param_1 + 8),&local_134,0x1e,&stack0xfffffea8);
  if (((iVar3 != 0) && (iVar1 == 0x1e)) &&
     ((local_144.dwLowDateTime == 0x4034b50 || (local_144.dwLowDateTime == 0x30304b50)))) {
    (**(code **)(*(int *)(param_1 + 0xc) + 4))
              (*(undefined4 *)(param_1 + 8),
               (uint)(ushort)local_12c[0].dwHighDateTime + (uint)local_12c[0].dwLowDateTime._2_2_ +
               0x1e + *(int *)(param_2 + 0x20),0,0);
    iVar4 = FUN_00426470(param_1,hFile,param_2,piStack_10);
  }
  CloseHandle(hFile);
  return iVar4;
}


