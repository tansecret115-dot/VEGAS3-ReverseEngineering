/* Module: wmfdist2.exe
   Function: FUN_0100278f
   Address: 0100278f
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100278f(BYTE *param_1,BYTE *param_2)

{
  BYTE TestChar;
  BOOL BVar1;
  LPSTR pCVar2;
  int iVar3;
  CHAR local_104 [260];
  
  *param_2 = '\0';
  if ((param_1 != (BYTE *)0x0) && (*param_1 != '\0')) {
    GetModuleFileNameA(DAT_0100b6dc,local_104,0x104);
    TestChar = *param_1;
    while (TestChar != '\0') {
      BVar1 = IsDBCSLeadByte(TestChar);
      *param_2 = *param_1;
      if (BVar1 != 0) {
        param_2[1] = param_1[1];
      }
      if (*param_1 == '#') {
        param_1 = (BYTE *)CharNextA((LPCSTR)param_1);
        pCVar2 = CharUpperA((LPSTR)(int)(char)*param_1);
        if ((char)pCVar2 == 'D') {
          FUN_01005c70(local_104);
          iVar3 = lstrlenA(local_104);
          pCVar2 = CharPrevA(local_104,local_104 + iVar3);
          if ((pCVar2 != (LPSTR)0x0) && (*pCVar2 == '\\')) {
            *pCVar2 = '\0';
          }
        }
        else {
          pCVar2 = CharUpperA((LPSTR)(int)(char)*param_1);
          if ((char)pCVar2 != 'E') {
            if (*param_1 == '#') goto LAB_0100286d;
            goto LAB_01002872;
          }
        }
        lstrcpyA((LPSTR)param_2,local_104);
        iVar3 = lstrlenA(local_104);
        param_2 = param_2 + iVar3;
      }
      else {
LAB_0100286d:
        param_2 = (BYTE *)CharNextA((LPCSTR)param_2);
      }
LAB_01002872:
      param_1 = (BYTE *)CharNextA((LPCSTR)param_1);
      TestChar = *param_1;
    }
    *param_2 = '\0';
  }
  return;
}


