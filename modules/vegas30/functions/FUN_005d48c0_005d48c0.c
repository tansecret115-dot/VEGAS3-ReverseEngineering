/* Module: vegas30.exe
   Function: FUN_005d48c0
   Address: 005d48c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d48c0(LPCSTR param_1,uchar *param_2,int param_3)

{
  char *_Source;
  int iVar1;
  int iVar2;
  int iVar3;
  uchar local_14 [20];
  
  _Source = s___0_0_0000_00000_0_0_00646bce + 2;
  if (param_3 == 0) {
    _Source = s_0000000000000_00646be4;
  }
  _mbscpy(local_14,(uchar *)_Source);
  iVar1 = lstrlenA((LPCSTR)local_14);
  iVar1 = iVar1 + -1;
  iVar2 = lstrlenA(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    *param_2 = '\0';
    return;
  }
LAB_005d491a:
  if (-1 < iVar1) {
    do {
      iVar3 = isdigit((int)(char)local_14[iVar1]);
      if (iVar3 != 0) break;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    do {
      iVar3 = isdigit((int)param_1[iVar2]);
      if (iVar3 != 0) goto LAB_005d4943;
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) break;
    } while( true );
  }
  goto LAB_005d4958;
LAB_005d4943:
  if (iVar2 < 0) goto LAB_005d4958;
  if (-1 < iVar1) {
    local_14[iVar1] = param_1[iVar2];
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + -1;
  }
  if (iVar2 < 0) {
LAB_005d4958:
    _mbscpy(param_2,local_14);
    return;
  }
  goto LAB_005d491a;
}


