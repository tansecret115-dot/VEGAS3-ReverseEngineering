/* Module: mp3rw.dll
   Function: FUN_00435dc0
   Address: 00435dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00435dc0(void *this,uchar *param_1,uchar *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar local_104 [260];
  
  *param_3 = 0;
  _mbscpy(param_2,param_1);
  iVar1 = lstrcmpiA((LPCSTR)param_1,"*.*");
  if (iVar1 == 0) {
    *param_3 = 2;
    return 0;
  }
  uVar2 = lstrlenA((LPCSTR)param_1);
  if (uVar2 < 2) {
    FUN_0043c480(this,0xaaaaaaa7,(uchar *)"CheckForWildcards",(uchar *)0x0);
    return 0x8004e03c;
  }
  uVar2 = 0;
  iVar1 = lstrlenA((LPCSTR)param_1);
  if (iVar1 != 0) {
    do {
      if (param_1[uVar2] == '*') {
        if (uVar2 != 0) {
          iVar1 = lstrlenA((LPCSTR)param_1);
          if (iVar1 - 1U != uVar2) goto LAB_00435e41;
          if (uVar2 != 0) {
            lstrcpynA((LPSTR)local_104,(LPCSTR)param_1,uVar2 + 1);
            local_104[uVar2] = '\0';
            *param_3 = 3;
            goto LAB_00435e8f;
          }
        }
        _mbscpy(local_104,param_1 + 1);
        *param_3 = 1;
LAB_00435e8f:
        _mbscpy(param_2,local_104);
        return 0;
      }
LAB_00435e41:
      uVar2 = uVar2 + 1;
      uVar3 = lstrlenA((LPCSTR)param_1);
    } while (uVar2 < uVar3);
  }
  return 0;
}


