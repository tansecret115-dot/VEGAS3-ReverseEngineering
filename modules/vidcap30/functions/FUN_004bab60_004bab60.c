/* Module: vidcap30.exe
   Function: FUN_004bab60
   Address: 004bab60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bab60(undefined4 param_1,char *param_2)

{
  char cVar1;
  LPCSTR lpsz;
  LPCSTR pCVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_104 [260];
  
  if (*param_2 != '\0') {
    _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
    pCVar2 = local_104;
    pcVar4 = local_104;
    cVar1 = local_104[0];
    while (lpsz = pCVar2, cVar1 != '\0') {
      pCVar2 = CharNextA(lpsz);
      cVar1 = *pCVar2;
      pcVar4 = lpsz;
    }
    if (*pcVar4 == '\\') {
      *pcVar4 = '\0';
    }
    pcVar4 = local_104;
    if (local_104[0] != '\0') {
      uVar3 = _SfGetString2_8(DAT_005c16d8,0x1144);
      SfMEditPrintF(param_1,uVar3,pcVar4);
    }
  }
  return;
}


