/* Module: hhupd.exe
   Function: FUN_01004b8a
   Address: 01004b8a
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01004b8a(void)

{
  bool bVar1;
  DWORD DVar2;
  LPCSTR lpString1;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  UINT UVar5;
  BOOL BVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  char local_118 [3];
  undefined1 local_115;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  DVar2 = FUN_01003d7d("RUNPROGRAM",(undefined4 *)0x0,0);
  lpString1 = LocalAlloc(0x40,DVar2 + 1);
  if (lpString1 == (LPCSTR)0x0) {
    FUN_01003c23((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056b9();
  }
  else {
    DVar2 = FUN_01003d7d("RUNPROGRAM",(undefined4 *)lpString1,DVar2);
    if (DVar2 == 0) {
      FUN_01003c23((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      LocalFree(lpString1);
      DAT_0100b704 = 0x80070714;
    }
    else {
      iVar3 = lstrcmpA(lpString1,"<None>");
      uVar4 = 1;
      if (iVar3 == 0) {
        DAT_0100b6d0 = 1;
      }
      LocalFree(lpString1);
      if (DAT_0100abbe == '\0') {
        if ((DAT_0100aaa4 != 0) || (DAT_0100b6d0 != 0)) {
          iVar3 = FUN_010058e6(DAT_0100b6dc,(LPCSTR)0x7d2,(HWND)0x0,FUN_01002c72,0,0);
          return iVar3;
        }
        DVar2 = GetTempPathA(0x104,&DAT_0100ae84);
        if (DVar2 != 0) {
          iVar3 = FUN_01004a8c(&DAT_0100ae84,1,3);
          if (iVar3 != 0) {
            return 1;
          }
          bVar1 = FUN_01002245(&DAT_0100ae84);
          if ((CONCAT31(extraout_var,bVar1) == 0) &&
             (iVar3 = FUN_01004a8c(&DAT_0100ae84,1,1), iVar3 != 0)) {
            return 1;
          }
        }
        do {
          lstrcpyA(local_118,"A:\\");
          while (local_118[0] < '[') {
            UVar5 = GetDriveTypeA(local_118);
            if (((((UVar5 == 6) || (UVar5 == 3)) &&
                 (DVar2 = GetFileAttributesA(local_118), DVar2 != 0xffffffff)) ||
                (((UVar5 == 2 && (local_118[0] != 'A')) &&
                 ((local_118[0] != 'B' &&
                  ((BVar6 = GetDiskFreeSpaceA(local_118,&local_8,&local_10,&local_14,&local_c),
                   BVar6 != 0 && (99999999 < local_c * local_10 * local_8)))))))) &&
               ((bVar1 = FUN_01004f10(local_118,3,0), CONCAT31(extraout_var_00,bVar1) != 0 ||
                ((bVar1 = FUN_01002245(local_118), CONCAT31(extraout_var_01,bVar1) == 0 &&
                 (bVar1 = FUN_01004f10(local_118,1,0), CONCAT31(extraout_var_02,bVar1) != 0)))))) {
              bVar1 = FUN_01002245(local_118);
              if (CONCAT31(extraout_var_03,bVar1) != 0) {
                GetWindowsDirectoryA(local_118,0x104);
              }
              FUN_010059ea(local_118,"msdownld.tmp");
              uVar4 = FUN_01002222(local_118);
              if (uVar4 == 0) {
                local_118[0] = local_118[0] + '\x01';
                local_115 = 0;
              }
              else {
                SetFileAttributesA(local_118,2);
                lstrcpyA(&DAT_0100ae84,local_118);
                iVar3 = FUN_01004a8c(&DAT_0100ae84,1,0);
                if (iVar3 != 0) {
                  return 1;
                }
              }
            }
            else {
              local_118[0] = local_118[0] + '\x01';
            }
          }
          GetWindowsDirectoryA(local_118,0x104);
          bVar1 = FUN_01004f10(local_118,3,4);
        } while (CONCAT31(extraout_var_04,bVar1) != 0);
      }
      else {
        if ((DAT_0100abbe == '\\') && (DAT_0100abbf == '\\')) {
          uVar4 = 0;
        }
        iVar3 = FUN_01004a8c(&DAT_0100abbe,0,uVar4);
        if (iVar3 != 0) {
          return 1;
        }
        FUN_01003c23((HWND)0x0,0x4be,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      }
    }
  }
  return 0;
}


