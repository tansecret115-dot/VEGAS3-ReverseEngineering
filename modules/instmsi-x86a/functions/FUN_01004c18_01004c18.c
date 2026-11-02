/* Module: InstMsi-x86a.exe
   Function: FUN_01004c18
   Address: 01004c18
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01004c18(void)

{
  bool bVar1;
  DWORD DVar2;
  LPCSTR lpString1;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  UINT UVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  char local_108 [3];
  undefined1 local_105;
  
  DVar2 = FUN_01003e0b("RUNPROGRAM",(undefined4 *)0x0,0);
  lpString1 = LocalAlloc(0x40,DVar2 + 1);
  if (lpString1 == (LPCSTR)0x0) {
    FUN_01003cb8((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_010056fe();
  }
  else {
    DVar2 = FUN_01003e0b("RUNPROGRAM",(undefined4 *)lpString1,DVar2);
    if (DVar2 == 0) {
      FUN_01003cb8((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
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
          iVar3 = FUN_0100592b(DAT_0100b6dc,(LPCSTR)0x7d2,(HWND)0x0,FUN_01002ca1,0,0);
          return iVar3;
        }
        DVar2 = GetTempPathA(0x104,&DAT_0100ae84);
        if (DVar2 != 0) {
          iVar3 = FUN_01004b1a(&DAT_0100ae84,1,3);
          if (iVar3 != 0) {
            return 1;
          }
          bVar1 = FUN_0100226b(&DAT_0100ae84);
          if ((CONCAT31(extraout_var,bVar1) == 0) &&
             (iVar3 = FUN_01004b1a(&DAT_0100ae84,1,1), iVar3 != 0)) {
            return 1;
          }
        }
        do {
          lstrcpyA(local_108,"A:\\");
          while (local_108[0] < '[') {
            UVar5 = GetDriveTypeA(local_108);
            if (((((UVar5 == 6) || (UVar5 == 3)) &&
                 (DVar2 = GetFileAttributesA(local_108), DVar2 != 0xffffffff)) ||
                (((UVar5 == 2 && (local_108[0] != 'A')) &&
                 ((local_108[0] != 'B' &&
                  ((uVar4 = FUN_01005ae5(local_108), uVar4 != 0 && (0x18fff < uVar4)))))))) &&
               ((bVar1 = FUN_01004f82(local_108,3,0), CONCAT31(extraout_var_00,bVar1) != 0 ||
                ((bVar1 = FUN_0100226b(local_108), CONCAT31(extraout_var_01,bVar1) == 0 &&
                 (bVar1 = FUN_01004f82(local_108,1,0), CONCAT31(extraout_var_02,bVar1) != 0)))))) {
              bVar1 = FUN_0100226b(local_108);
              if (CONCAT31(extraout_var_03,bVar1) != 0) {
                GetWindowsDirectoryA(local_108,0x104);
              }
              FUN_01005a4d(local_108,"msdownld.tmp");
              uVar4 = FUN_01002248(local_108);
              if (uVar4 == 0) {
                local_108[0] = local_108[0] + '\x01';
                local_105 = 0;
              }
              else {
                SetFileAttributesA(local_108,2);
                lstrcpyA(&DAT_0100ae84,local_108);
                iVar3 = FUN_01004b1a(&DAT_0100ae84,1,0);
                if (iVar3 != 0) {
                  return 1;
                }
              }
            }
            else {
              local_108[0] = local_108[0] + '\x01';
            }
          }
          GetWindowsDirectoryA(local_108,0x104);
          bVar1 = FUN_01004f82(local_108,3,4);
        } while (CONCAT31(extraout_var_04,bVar1) != 0);
      }
      else {
        if ((DAT_0100abbe == '\\') && (DAT_0100abbf == '\\')) {
          uVar4 = 0;
        }
        iVar3 = FUN_01004b1a(&DAT_0100abbe,0,uVar4);
        if (iVar3 != 0) {
          return 1;
        }
        FUN_01003cb8((HWND)0x0,0x4be,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      }
    }
  }
  return 0;
}


