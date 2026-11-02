/* Module: sfcdi.dll
   Function: SfOpenFile_GetExtensionFromComboBoxType
   Address: 5bf1cce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfOpenFile_GetExtensionFromComboBoxType(char *,struct HWND__ *) */

void SfOpenFile_GetExtensionFromComboBoxType(char *param_1,HWND__ *param_2)

{
  char cVar1;
  WPARAM wParam;
  LRESULT LVar2;
  LPCSTR lpsz;
  LPSTR pCVar3;
  LPSTR pCVar4;
  CHAR *pCVar5;
  CHAR local_104 [260];
  
                    /* 0x1cce0  91  ?SfOpenFile_GetExtensionFromComboBoxType@@YGXPADPAUHWND__@@@Z */
  *param_1 = '\0';
  wParam = SendMessageA(param_2,0x147,0,0);
  if (wParam != 0xffffffff) {
    local_104[0] = '\0';
    LVar2 = SendMessageA(param_2,0x148,wParam,(LPARAM)local_104);
    if (LVar2 != -1) {
      lpsz = local_104;
      cVar1 = local_104[0];
      while ((cVar1 != '\0' && (cVar1 != '('))) {
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      }
      cVar1 = *lpsz;
      if (cVar1 != '\0') {
        do {
          if (cVar1 == '.') break;
          lpsz = CharNextA(lpsz);
          cVar1 = *lpsz;
        } while (cVar1 != '\0');
        cVar1 = *lpsz;
        pCVar5 = param_1;
        if (cVar1 != '\0') {
          do {
            if ((cVar1 == ')') || (cVar1 == ';')) break;
            pCVar3 = CharNextA(lpsz);
            for (pCVar4 = lpsz; pCVar4 != pCVar3; pCVar4 = pCVar4 + 1) {
              *pCVar5 = *pCVar4;
              pCVar5 = pCVar5 + 1;
            }
            lpsz = CharNextA(lpsz);
            cVar1 = *lpsz;
          } while (cVar1 != '\0');
          *pCVar5 = '\0';
          pCVar4 = CharNextA(param_1);
          if (*pCVar4 == '*') {
            *param_1 = '\0';
          }
        }
      }
    }
  }
  return;
}


