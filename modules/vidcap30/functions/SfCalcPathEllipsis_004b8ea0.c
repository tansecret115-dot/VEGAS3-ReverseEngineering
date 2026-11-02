/* Module: vidcap30.exe
   Function: SfCalcPathEllipsis
   Address: 004b8ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCalcPathEllipsis(struct HDC__ *,char *,int) */

int SfCalcPathEllipsis(HDC__ *param_1,char *param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  LPSTR pCVar3;
  uchar *puVar4;
  LPCSTR lpszCurrent;
  tagSIZE *ptVar5;
  tagSIZE local_110;
  undefined4 local_108;
  uchar local_104 [260];
  
                    /* 0xb8ea0  67  ?SfCalcPathEllipsis@@YGHPAUHDC__@@PADH@Z */
  ptVar5 = &local_110;
  iVar1 = lstrlenA(param_2);
  BVar2 = GetTextExtentPoint32A(param_1,param_2,iVar1,ptVar5);
  if (BVar2 == 0) {
    return 0;
  }
  if (param_3 < local_110.cx) {
    _mbscpy(local_104,(uchar *)param_2);
    pCVar3 = CharNextA(param_2);
    pCVar3 = CharNextA(pCVar3);
    puVar4 = (uchar *)CharNextA(pCVar3);
    puVar4 = _mbspbrk(puVar4,"\\/");
    if (puVar4 != (uchar *)0x0) {
      local_108 = (int)&local_108 + 3;
      do {
        pCVar3 = CharPrevA(param_2,(LPCSTR)puVar4);
        pCVar3 = CharPrevA(param_2,pCVar3);
        lpszCurrent = CharPrevA(param_2,pCVar3);
        lstrcpynA((LPSTR)local_104,param_2,(int)(lpszCurrent + (1 - (int)param_2)));
        (lpszCurrent + (1 - (int)param_2))[local_108] = '\0';
        _mbscat(local_104,"...");
        _mbscat(local_104,puVar4);
        ptVar5 = &local_110;
        iVar1 = lstrlenA((LPCSTR)local_104);
        iVar1 = GetTextExtentPoint32A(param_1,(LPCSTR)local_104,iVar1,ptVar5);
        while( true ) {
          if (iVar1 == 0) {
            return 0;
          }
          if (local_110.cx <= param_3) goto LAB_004b9075;
          if (lpszCurrent <= param_2) break;
          lpszCurrent = CharPrevA(param_2,lpszCurrent);
          lstrcpynA((LPSTR)local_104,param_2,(int)(lpszCurrent + (1 - (int)param_2)));
          (lpszCurrent + (1 - (int)param_2))[local_108] = '\0';
          _mbscat(local_104,"...");
          _mbscat(local_104,puVar4);
          ptVar5 = &local_110;
          iVar1 = lstrlenA((LPCSTR)local_104);
          iVar1 = GetTextExtentPoint32A(param_1,(LPCSTR)local_104,iVar1,ptVar5);
        }
        if (local_110.cx <= param_3) break;
        puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
        puVar4 = _mbspbrk(puVar4,"\\/");
      } while (puVar4 != (uchar *)0x0);
    }
LAB_004b9075:
    _mbscpy((uchar *)param_2,local_104);
  }
  return 1;
}


