/* Module: InstMsi-x86w.exe
   Function: FUN_01003cb8
   Address: 01003cb8
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01003cb8(HWND param_1,UINT param_2,LPCSTR param_3,LPCSTR param_4,UINT param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  LPSTR lpString1;
  int iVar3;
  char *pcVar4;
  CHAR *pCVar5;
  char local_23c [512];
  CHAR local_3c [56];
  
  pcVar4 = "LoadString() Error.  Could not load string resource.";
  pCVar5 = local_3c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = *pcVar4;
  if (((byte)DAT_0100aab8 & 1) != 0) {
    return 1;
  }
  FUN_01003e7d(param_2,local_23c,0x200);
  if (local_23c[0] == '\0') {
    MessageBoxA(param_1,local_3c,&DAT_0100adf4,0x10010);
  }
  else if (param_4 == (LPCSTR)0x0) {
    if (param_3 == (LPCSTR)0x0) {
      iVar3 = lstrlenA(local_23c);
      lpString1 = LocalAlloc(0x40,iVar3 + 1);
      if (lpString1 != (LPSTR)0x0) {
        lstrcpyA(lpString1,local_23c);
        goto LAB_01003dd6;
      }
    }
    else {
      iVar3 = lstrlenA(local_23c);
      iVar1 = lstrlenA(param_3);
      lpString1 = LocalAlloc(0x40,iVar3 + 100 + iVar1);
      if (lpString1 != (LPSTR)0x0) {
        wsprintfA(lpString1,local_23c,param_3);
LAB_01003dd6:
        MessageBeep(param_5);
        iVar3 = MessageBoxA(param_1,lpString1,&DAT_0100adf4,param_6 | param_5 | 0x10000);
        LocalFree(lpString1);
        return iVar3;
      }
    }
  }
  else {
    iVar3 = lstrlenA(local_23c);
    iVar1 = lstrlenA(param_3);
    iVar2 = lstrlenA(param_4);
    lpString1 = LocalAlloc(0x40,iVar3 + iVar1 + 100 + iVar2);
    if (lpString1 != (LPSTR)0x0) {
      wsprintfA(lpString1,local_23c,param_3,param_4);
      goto LAB_01003dd6;
    }
  }
  return -1;
}


