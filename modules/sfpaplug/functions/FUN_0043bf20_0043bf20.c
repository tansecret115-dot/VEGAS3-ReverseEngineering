/* Module: sfpaplug.dll
   Function: FUN_0043bf20
   Address: 0043bf20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043bf20(int param_1,uint param_2,LPWSTR param_3,uint param_4,wchar_t *param_5,int param_6)

{
  size_t _Size;
  uint _Size_00;
  LPBYTE lpMultiByteStr;
  size_t sVar1;
  LPSTR lpMultiByteStr_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  LPWSTR pWVar5;
  
  _Size_00 = param_4 * 2;
  pWVar5 = param_3;
  for (uVar4 = (param_4 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pWVar5[0] = L'\0';
    pWVar5[1] = L'\0';
    pWVar5 = pWVar5 + 2;
  }
  for (uVar4 = _Size_00 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (LPWSTR)((int)pWVar5 + 1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lpMultiByteStr = calloc(1,_Size_00);
    sVar1 = wcslen(param_5);
    _Size = sVar1 * 2 + 2;
    lpMultiByteStr_00 = calloc(1,_Size);
    if ((param_5 == (wchar_t *)0x0) || (*param_5 != L'\0')) {
      WideCharToMultiByte(0,0,param_5,-1,lpMultiByteStr_00,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr_00 != (LPSTR)0x0) {
      *lpMultiByteStr_00 = '\0';
    }
    lpMultiByteStr_00[sVar1 * 2 + 1] = '\0';
    iVar2 = FUN_004461a0(*(int *)(param_1 + 0x34),param_2,lpMultiByteStr,_Size_00,lpMultiByteStr_00,
                         param_6);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_3,param_4);
      param_3[param_4 - 1] = L'\0';
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -1;
      }
    }
    free(lpMultiByteStr);
    free(lpMultiByteStr_00);
    return iVar3;
  }
  return 0;
}


