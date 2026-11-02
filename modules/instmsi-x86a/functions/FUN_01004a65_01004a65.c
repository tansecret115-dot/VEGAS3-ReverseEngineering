/* Module: InstMsi-x86a.exe
   Function: FUN_01004a65
   Address: 01004a65
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01004a65(LPCSTR param_1,LPSTR param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  UINT UVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CHAR local_104 [260];
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    wsprintfA(local_104,"IXP%03d.TMP",iVar5);
    lstrcpyA(param_2,param_1);
    FUN_01005a4d(param_2,local_104);
    RemoveDirectoryA(param_2);
    DVar1 = GetFileAttributesA(param_2);
    if (DVar1 == 0xffffffff) {
      iVar4 = 0;
      BVar2 = CreateDirectoryA(param_2,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar2 != 0) {
        iVar4 = 1;
        DAT_0100aaa0 = 1;
      }
      break;
    }
    iVar5 = iVar6;
  } while (iVar6 < 400);
  if ((iVar4 == 0) && (UVar3 = GetTempFileNameA(param_1,"IXP",0,param_2), UVar3 != 0)) {
    iVar4 = 1;
    DeleteFileA(param_2);
    CreateDirectoryA(param_2,(LPSECURITY_ATTRIBUTES)0x0);
  }
  return iVar4;
}


