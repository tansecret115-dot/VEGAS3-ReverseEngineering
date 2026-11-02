/* Module: sfs4rw.dll
   Function: FUN_00402b90
   Address: 00402b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402b90(int param_1,undefined4 *param_2,int param_3,uchar *param_4)

{
  undefined4 *puVar1;
  LPSTR lpString1;
  int iVar2;
  uchar *_Dest;
  long lVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 1) {
      puVar1 = (undefined4 *)*param_2;
      if ((void *)*puVar1 != (void *)0x0) {
        free((void *)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = lstrlenA((LPCSTR)param_4);
      _Dest = calloc(1,iVar2 + 1);
      *puVar1 = _Dest;
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
        lVar3 = atol((char *)param_4);
        *(long *)*param_2 = lVar3;
      }
      else if (param_1 == 4) {
        iVar2 = atoi((char *)param_4);
        *(int *)*param_2 = iVar2;
        return;
      }
    }
  }
  return;
}


