/* Module: vegas30.exe
   Function: FUN_004f0910
   Address: 004f0910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f0910(int param_1)

{
  LPSTR lpData;
  int iVar1;
  LSTATUS LVar2;
  LPCSTR lpString1;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  LONG local_108;
  CHAR local_104 [260];
  
  lpData = (LPSTR)(param_1 + 0x474);
  if (*lpData != '\0') {
    iVar1 = _SfDoesFileExist_4(lpData);
    if (iVar1 != 0) goto LAB_004f098d;
  }
  pcVar4 = "{2B4E8DE5-2E55-11CF-9DD2-00AA006BA2BA}";
  do {
    local_108 = 0x104;
    SfPrintF(local_104,"CLSID\\%s\\LocalServer32",pcVar4);
    LVar2 = RegQueryValueA((HKEY)&DAT_80000000,local_104,lpData,&local_108);
    if (LVar2 == 0) {
      *(undefined1 *)(param_1 + 0x577) = 0;
      iVar1 = _SfDoesFileExist_4(lpData);
      if (iVar1 != 0) break;
      *lpData = '\0';
    }
    pcVar4 = pcVar4 + 0x28;
  } while (pcVar4 < "{70A38600-EAC8-11D3-A570-0080296727A1}");
LAB_004f098d:
  uVar5 = 0;
  uVar3 = 0;
  if (*lpData != '\0') {
    lpString1 = (LPCSTR)_SfGetFileNamePtrA_4(lpData);
    iVar1 = lstrcmpiA(lpString1,"FORGE32.EXE");
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else {
      iVar1 = lstrcmpiA(lpString1,"FORGE.EXE");
      if (iVar1 == 0) {
        uVar5 = 1;
        uVar3 = 1;
      }
      else {
        iVar1 = lstrcmpiA(lpString1,"FORGXP32.EXE");
        if (iVar1 == 0) {
          uVar5 = 2;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x57c) = uVar3;
  return uVar5;
}


