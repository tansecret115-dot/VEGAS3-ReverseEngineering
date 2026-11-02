/* Module: wmfdist2.exe
   Function: FUN_01003e44
   Address: 01003e44
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01003e44(HWND param_1,UINT param_2,LPCSTR param_3,LPCSTR param_4,UINT param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LPSTR lpString1;
  int iVar4;
  char *pcVar5;
  CHAR *pCVar6;
  char local_23c [512];
  CHAR local_3c [56];
  
  pcVar5 = "LoadString() Error.  Could not load string resource.";
  pCVar6 = local_3c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  *pCVar6 = *pcVar5;
  if (((byte)DAT_0100aab8 & 1) != 0) {
    return 1;
  }
  FUN_0100405a(param_2,local_23c,0x200);
  if (local_23c[0] == '\0') {
    iVar4 = FUN_01005dd2();
    if ((iVar4 == 0) || (iVar4 = FUN_01005d84(DAT_0100b6dc,(LPCSTR)0x10,(LPCSTR)0x1), iVar4 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x180000;
    }
    MessageBoxA(param_1,local_3c,&DAT_0100adf4,uVar1 | 0x10010);
  }
  else if (param_4 == (LPCSTR)0x0) {
    if (param_3 == (LPCSTR)0x0) {
      iVar4 = lstrlenA(local_23c);
      lpString1 = LocalAlloc(0x40,iVar4 + 1);
      if (lpString1 != (LPSTR)0x0) {
        lstrcpyA(lpString1,local_23c);
        goto LAB_01003f86;
      }
    }
    else {
      iVar4 = lstrlenA(local_23c);
      iVar2 = lstrlenA(param_3);
      lpString1 = LocalAlloc(0x40,iVar4 + 100 + iVar2);
      if (lpString1 != (LPSTR)0x0) {
        wsprintfA(lpString1,local_23c,param_3);
LAB_01003f86:
        MessageBeep(param_5);
        iVar4 = FUN_01005dd2();
        if ((iVar4 == 0) ||
           (iVar4 = FUN_01005d84(DAT_0100b6dc,(LPCSTR)0x10,(LPCSTR)0x1), iVar4 == 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x180000;
        }
        iVar4 = MessageBoxA(param_1,lpString1,&DAT_0100adf4,param_6 | param_5 | uVar1 | 0x10000);
        LocalFree(lpString1);
        return iVar4;
      }
    }
  }
  else {
    iVar4 = lstrlenA(local_23c);
    iVar2 = lstrlenA(param_3);
    iVar3 = lstrlenA(param_4);
    lpString1 = LocalAlloc(0x40,iVar4 + iVar2 + 100 + iVar3);
    if (lpString1 != (LPSTR)0x0) {
      wsprintfA(lpString1,local_23c,param_3,param_4);
      goto LAB_01003f86;
    }
  }
  return -1;
}


