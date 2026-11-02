/* Module: sfconfigmgr.dll
   Function: FUN_00403500
   Address: 00403500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00403500(int param_1)

{
  int *piVar1;
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  uVar5 = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 8);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) break;
      _Str2 = *(wchar_t **)(piVar1[2] + iVar4 * 4);
      if (_Str2 != (wchar_t *)0x0) {
        iVar3 = 0;
        if (*(int **)(param_1 + 0xc) != (int *)0x0) {
          iVar3 = **(int **)(param_1 + 0xc);
        }
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          _Str1 = *(wchar_t **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + iVar3 * 4);
          uVar5 = local_4;
          if ((_Str1 != (wchar_t *)0x0) && (iVar2 = _wcsicmp(_Str1,_Str2), iVar2 == 0)) {
            wcscpy(_Str2 + 0x2e8,_Str1 + 0x68);
            wcscpy(_Str2 + 0x2a8,_Str1 + 0x28);
            *(undefined4 *)(_Str2 + 0x328) = *(undefined4 *)(_Str1 + 0xa8);
            *(undefined4 *)(_Str2 + 0x32a) = *(undefined4 *)(_Str1 + 0xaa);
            *(undefined4 *)(_Str2 + 0x32c) = *(undefined4 *)(_Str1 + 0xac);
            *(wchar_t **)(*(int *)(*(int *)(param_1 + 8) + 8) + iVar4 * 4) = _Str2;
            uVar5 = FUN_0040b320(*(int **)(param_1 + 0xc),iVar3,1,0);
            local_4 = uVar5;
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
    return uVar5;
  }
  return 0;
}


