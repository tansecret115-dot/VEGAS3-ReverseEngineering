/* Module: 50comupd.exe
   Function: FUN_01004c46
   Address: 01004c46
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01004c46(void)

{
  bool bVar1;
  DWORD DVar2;
  LPCSTR lpString1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  UINT UVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  char local_108 [3];
  undefined1 local_105;
  
  DVar2 = FUN_01003e3b("RUNPROGRAM",(undefined4 *)0x0,0);
  lpString1 = LocalAlloc(0x40,DVar2 + 1);
  if (lpString1 == (LPCSTR)0x0) {
    FUN_01003ce8((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = FUN_01005735();
  }
  else {
    DVar2 = FUN_01003e3b("RUNPROGRAM",(undefined4 *)lpString1,DVar2);
    if (DVar2 == 0) {
      FUN_01003ce8((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      LocalFree(lpString1);
      DAT_0100b704 = 0x80070714;
    }
    else {
      iVar4 = lstrcmpA(lpString1,"<None>");
      uVar3 = 1;
      if (iVar4 == 0) {
        DAT_0100b6d0 = 1;
      }
      LocalFree(lpString1);
      if (DAT_0100abbe == '\0') {
        if ((DAT_0100aaa4 != 0) || (DAT_0100b6d0 != 0)) {
          iVar4 = FUN_01005962(DAT_0100b6dc,(LPCSTR)0x7d2,(HWND)0x0,FUN_01002cd1,0,0);
          uVar3 = (uint)(iVar4 != 0);
          goto LAB_01004f15;
        }
        DVar2 = GetTempPathA(0x104,&DAT_0100ae84);
        if ((DVar2 != 0) &&
           ((iVar4 = FUN_01004b48(&DAT_0100ae84,1,3), iVar4 != 0 ||
            ((bVar1 = FUN_0100225d(&DAT_0100ae84), CONCAT31(extraout_var,bVar1) == 0 &&
             (iVar4 = FUN_01004b48(&DAT_0100ae84,1,1), iVar4 != 0)))))) goto LAB_01004f15;
        do {
          lstrcpyA(local_108,"A:\\");
          while (local_108[0] < '[') {
            UVar6 = GetDriveTypeA(local_108);
            if (((((UVar6 == 6) || (UVar6 == 3)) &&
                 (DVar2 = GetFileAttributesA(local_108), DVar2 != 0xffffffff)) ||
                (((UVar6 == 2 && (local_108[0] != 'A')) &&
                 ((local_108[0] != 'B' &&
                  ((uVar3 = FUN_01005b1c(local_108), uVar3 != 0 && (0x18fff < uVar3)))))))) &&
               ((bVar1 = FUN_01004fb9(local_108,3,0), CONCAT31(extraout_var_00,bVar1) != 0 ||
                ((bVar1 = FUN_0100225d(local_108), CONCAT31(extraout_var_01,bVar1) == 0 &&
                 (bVar1 = FUN_01004fb9(local_108,1,0), CONCAT31(extraout_var_02,bVar1) != 0)))))) {
              bVar1 = FUN_0100225d(local_108);
              if (CONCAT31(extraout_var_03,bVar1) != 0) {
                GetWindowsDirectoryA(local_108,0x104);
              }
              FUN_01005a84(local_108,"msdownld.tmp");
              uVar3 = FUN_0100223a(local_108);
              if (uVar3 == 0) {
                local_108[0] = local_108[0] + '\x01';
                local_105 = 0;
              }
              else {
                SetFileAttributesA(local_108,2);
                lstrcpyA(&DAT_0100ae84,local_108);
                iVar4 = FUN_01004b48(&DAT_0100ae84,1,0);
                if (iVar4 != 0) {
                  uVar3 = 1;
                  goto LAB_01004f15;
                }
              }
            }
            else {
              local_108[0] = local_108[0] + '\x01';
            }
          }
          GetWindowsDirectoryA(local_108,0x104);
          bVar1 = FUN_01004fb9(local_108,3,4);
        } while (CONCAT31(extraout_var_04,bVar1) != 0);
      }
      else {
        uVar5 = uVar3;
        if ((DAT_0100abbe == '\\') && (DAT_0100abbf == '\\')) {
          uVar5 = 0;
        }
        iVar4 = FUN_01004b48(&DAT_0100abbe,0,uVar5);
        if (iVar4 != 0) goto LAB_01004f15;
        FUN_01003ce8((HWND)0x0,0x4be,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      }
    }
  }
  uVar3 = 0;
LAB_01004f15:
  return SUB41(uVar3,0);
}


