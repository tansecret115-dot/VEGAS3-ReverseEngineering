/* Module: vegas30.exe
   Function: FUN_0052e510
   Address: 0052e510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052e510(int param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  uchar *puVar3;
  int *piVar4;
  WCHAR WVar5;
  undefined4 local_c44;
  int *local_c40;
  undefined4 local_c3c;
  CHAR aCStack_a4c [14];
  undefined2 uStack_a3e;
  CHAR aCStack_a3c [12];
  uchar local_a30 [231];
  undefined1 uStack_949;
  undefined4 *puStack_92c;
  int local_924;
  undefined4 *local_920;
  int local_14;
  
  iVar1 = FUN_005fb200();
  if (-1 < iVar1) {
    if (param_3 != 0) {
      iVar1 = FUN_00532360();
      return iVar1;
    }
    if (param_2 == (uchar *)0x0) {
      param_2 = (uchar *)(param_1 + 0xb8);
    }
    puVar3 = local_a30;
    for (iVar1 = 0x28c; iVar1 != 0; iVar1 = iVar1 + -1) {
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
      puVar3 = puVar3 + 4;
    }
    _mbscpy(local_a30,param_2);
    iVar1 = FUN_0052dfc0();
    if (iVar1 < 0) {
      FUN_0052e040();
      return iVar1;
    }
    if (iVar1 == 0x4e001) {
      FUN_0052e040();
      iVar1 = FUN_00532360();
      return iVar1;
    }
    iVar1 = FUN_00530520();
    if (iVar1 == 0) {
      if ((local_14 != 0) && (local_924 == 0x10)) {
        local_c44 = DAT_0064aea4;
        local_c40 = DAT_0064aea8;
        local_c3c = DAT_0064aeac;
        iVar2 = FUN_0052e490();
        if (iVar2 == 0) {
          FUN_0052e040();
          return 1;
        }
        DAT_0064aea4 = local_c44;
        DAT_0064aea8 = local_c40;
        DAT_0064aeac = local_c3c;
      }
      if (local_920 != (undefined4 *)0x0) {
        WVar5 = (WCHAR)&local_c44;
        iVar2 = (**(code **)*local_920)();
        if (iVar2 == 0) {
          MultiByteToWideChar(0,1,aCStack_a3c,-1,(LPWSTR)&local_c44,0x104);
          uStack_a3e = 0;
          InterlockedIncrement(&DAT_0065e144);
          piVar4 = (int *)0x104;
          iVar1 = (**(code **)(*unaff_EDI + 0xc))();
          InterlockedDecrement(&DAT_0065e144);
          if (-1 < iVar1) {
            if ((&stack0x00000000 == (undefined1 *)0xc54) || (WVar5 != L'\0')) {
              WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffff3ac,-1,aCStack_a4c,0x104,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0xa4c) {
              aCStack_a4c[0] = '\0';
            }
            uStack_949 = 0;
          }
          (**(code **)(*piVar4 + 8))();
        }
        else {
          iVar2 = (**(code **)*puStack_92c)();
          if (iVar2 == 0) {
            InterlockedIncrement(&DAT_0065e144);
            iVar1 = (**(code **)(*local_c40 + 0xc))();
            InterlockedDecrement(&DAT_0065e144);
            (**(code **)(*unaff_EDI + 8))();
          }
        }
      }
      if (DAT_00647624 != (HWND)0x0) {
        UpdateWindow(DAT_00647624);
      }
      if (iVar1 == 0) {
        if (local_924 == 0x10) {
          if (DAT_0064b4f0 == 0) {
            iVar1 = FUN_005321b0();
          }
          else {
            FUN_00405540();
          }
        }
        else if (local_924 == 0x20) {
          if (DAT_0064b4f0 == 0) {
            iVar1 = FUN_00436360();
          }
          else {
            FUN_00405540();
          }
        }
        else {
          iVar1 = FUN_00535ff0();
          if (-1 < iVar1) {
            FUN_005785e0();
          }
        }
      }
    }
    FUN_0052e040();
  }
  return iVar1;
}


