/* Module: mcplugrw.dll
   Function: FUN_00402bd0
   Address: 00402bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402bd0(int param_1,undefined4 *param_2,int param_3,uchar *param_4)

{
  uchar uVar1;
  undefined4 *puVar2;
  LPSTR lpString1;
  int iVar3;
  uchar *_Dest;
  long lVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 1) {
      puVar2 = (undefined4 *)*param_2;
      if ((void *)*puVar2 != (void *)0x0) {
        free((void *)*puVar2);
        *puVar2 = 0;
      }
      iVar3 = lstrlenA((LPCSTR)param_4);
      _Dest = calloc(1,iVar3 + 1);
      *puVar2 = _Dest;
      if (_Dest != (uchar *)0x0) {
        _mbscpy(_Dest,param_4);
        return;
      }
    }
    else {
      if (param_1 == 2) {
        lpString1 = (LPSTR)*param_2;
        lstrcpynA(lpString1,(LPCSTR)param_4,param_3);
        lpString1[param_3 + -1] = '\0';
        return;
      }
      if ((param_1 == 3) || (param_1 == 5)) {
        lVar4 = atol((char *)param_4);
        *(long *)*param_2 = lVar4;
      }
      else if (param_1 == 4) {
        iVar3 = 0;
        uVar1 = *param_4;
        while (((uVar1 != '\0' && ('/' < (char)uVar1)) && ((char)uVar1 < ':'))) {
          param_4 = param_4 + 1;
          iVar3 = (char)uVar1 + -0x30 + iVar3 * 10;
          uVar1 = *param_4;
        }
        *(int *)*param_2 = iVar3;
        return;
      }
    }
  }
  return;
}


