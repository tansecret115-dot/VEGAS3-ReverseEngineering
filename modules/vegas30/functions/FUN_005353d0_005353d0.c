/* Module: vegas30.exe
   Function: FUN_005353d0
   Address: 005353d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005353d0(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  LPCSTR lpString1;
  BOOL BVar4;
  uchar local_354 [260];
  _WIN32_FIND_DATAA local_250;
  uchar local_110 [259];
  undefined1 local_d;
  HANDLE local_c;
  uint local_8;
  
  lstrcpynA((LPSTR)local_110,param_2,0x104);
  local_d = 0;
  iVar1 = lstrlenA((LPCSTR)local_110);
  if (iVar1 == 0) {
    GetTempPathA(0x104,(LPSTR)local_110);
  }
  _SfAddSlashToPathName_8(local_110,0x104);
  _mbscpy(local_354,local_110);
  _mbscat(local_110,"*.*");
  pvVar2 = FindFirstFileA((LPCSTR)local_110,&local_250);
  local_c = pvVar2;
  iVar1 = lstrlenA(param_1);
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      if ((local_250.dwFileAttributes & 0x10) == 0) {
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xfffffca0,local_250.cFileName,iVar1 + 1);
        local_354[iVar1 + -0xc] = '\0';
        local_354[iVar1 + -0xc] = '\0';
        lstrcpynA(&stack0xfffffca0,param_1,iVar1 + 1);
        local_354[iVar1 + -0xc] = '\0';
        local_354[iVar1 + -0xc] = '\0';
        iVar3 = lstrcmpiA(&stack0xfffffca0,&stack0xfffffca0);
        local_8 = (uint)(iVar3 == 0);
        if (local_8 == 0) {
          lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_250.cFileName);
          if ((lpString1 != (LPCSTR)0x0) && (*lpString1 != '\0')) {
            iVar3 = lstrcmpiA(lpString1,".class");
            local_8 = (uint)(iVar3 == 0);
            if (local_8 != 0) goto LAB_0053551d;
          }
        }
        else {
LAB_0053551d:
          _mbscpy(local_110,local_354);
          _mbscat(local_110,(uchar *)local_250.cFileName);
          if ((local_250.dwFileAttributes & 1) != 0) {
            local_250.dwFileAttributes = local_250.dwFileAttributes & 0xfffffffe;
            SetFileAttributesA((LPCSTR)local_110,local_250.dwFileAttributes);
          }
          DeleteFileA((LPCSTR)local_110);
        }
      }
      pvVar2 = local_c;
      BVar4 = FindNextFileA(local_c,&local_250);
    } while (BVar4 != 0);
    FindClose(pvVar2);
  }
  return 0;
}


