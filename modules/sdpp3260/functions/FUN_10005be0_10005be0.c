/* Module: sdpp3260.dll
   Function: FUN_10005be0
   Address: 10005be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_10005be0(void *this,char *param_1)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_8 = *(int *)this;
  local_c = *(int *)(local_8 + 4);
  if (local_c == 0) {
    return 0;
  }
  if (local_c != 0) goto LAB_10005c11;
  iVar3 = 0;
  while( true ) {
    _Str1 = (char *)FUN_100059c0(iVar3);
    iVar2 = _stricmp(_Str1,param_1);
    if (iVar2 == 0) {
      return iVar3;
    }
    FUN_10002800(&local_c);
    if (local_c == 0) break;
LAB_10005c11:
    piVar1 = (int *)FUN_10002820(local_c);
    iVar3 = *piVar1;
  }
  return 0;
}


