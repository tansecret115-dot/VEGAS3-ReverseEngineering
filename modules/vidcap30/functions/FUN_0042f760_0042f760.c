/* Module: vidcap30.exe
   Function: FUN_0042f760
   Address: 0042f760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f760(int param_1)

{
  LPCSTR lpString2;
  int iVar1;
  undefined1 *puVar2;
  CHAR local_104 [260];
  
  if (DAT_005ba4bc != 0) {
    FUN_0042f4b0(param_1,0);
    lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(param_1 + 0xbc);
    iVar1 = _SfGetFileNameExtensionPtrA_4(param_1 + 0xbc);
    iVar1 = iVar1 + (1 - (int)lpString2);
    lstrcpynA(local_104,lpString2,iVar1);
    local_104[iVar1 + -1] = '\0';
    FUN_0042f5d0(param_1,0);
    iVar1 = FUN_0042e530(param_1);
    puVar2 = &DAT_0058ad50;
    if (iVar1 == 0) {
      puVar2 = &DAT_00586c70;
    }
    SfSetWindowText(DAT_005ba4bc,"$(AppName.Full) - %s%s",local_104,puVar2);
  }
  return;
}


