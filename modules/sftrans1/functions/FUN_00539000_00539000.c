/* Module: sftrans1.dll
   Function: FUN_00539000
   Address: 00539000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00539000(undefined4 param_1,undefined4 *param_2,uchar *param_3)

{
  uchar *lpSubKey;
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  HKEY local_10c;
  int local_108;
  uchar local_104 [260];
  
  lpSubKey = param_3;
  iVar2 = local_108;
  if (*param_3 == '\0') {
    iVar2 = FUN_00537d40(1);
    FUN_00538af0(param_1,iVar2,local_104,0x104);
    lpSubKey = local_104;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)lpSubKey,0,0x2001f,&local_10c);
  if (LVar1 != 0) {
    if (((*param_3 == '\0') && (iVar3 = FUN_00538cb0(param_1,&local_108), -1 < iVar3)) &&
       (local_108 != iVar2)) {
      FUN_00538af0(param_1,local_108,local_104,0x104);
      LVar1 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_104,0,0x2001f,&local_10c);
      if (LVar1 == 0) {
        iVar2 = FUN_00537250();
        if (iVar2 != 0) {
          FUN_00537430(local_10c);
        }
        *param_2 = local_10c;
        _mbscpy(param_3,local_104);
        return 0;
      }
    }
    return 0x80070005;
  }
  if (*param_3 == '\0') {
    _mbscpy(param_3,local_104);
    FUN_00537430(local_10c);
  }
  iVar2 = FUN_00537250();
  if ((iVar2 != 0) && (*param_3 == '\0')) {
    FUN_00537430(local_10c);
  }
  *param_2 = local_10c;
  return 0;
}


