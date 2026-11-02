/* Module: mcplugrw.dll
   Function: FUN_00419ef0
   Address: 00419ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419ef0(uint param_1,int *param_2,uchar *param_3)

{
  uint uVar1;
  uchar *lpSubKey;
  LSTATUS LVar2;
  int iVar3;
  HKEY local_10c;
  uint local_108;
  uchar local_104 [260];
  
  lpSubKey = param_3;
  uVar1 = local_108;
  if (*param_3 == '\0') {
    uVar1 = FUN_00418c30();
    FUN_004199e0(param_1,uVar1,(LPSTR)local_104,0x104);
    lpSubKey = local_104;
  }
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)lpSubKey,0,0x2001f,&local_10c);
  if (LVar2 != 0) {
    if (((*param_3 == '\0') && (iVar3 = FUN_00419ba0(param_1,&local_108), -1 < iVar3)) &&
       (local_108 != uVar1)) {
      FUN_004199e0(param_1,local_108,(LPSTR)local_104,0x104);
      LVar2 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_104,0,0x2001f,&local_10c);
      if (LVar2 == 0) {
        iVar3 = FUN_00418140();
        if (iVar3 != 0) {
          FUN_00418320((int)local_10c);
        }
        *param_2 = (int)local_10c;
        _mbscpy(param_3,local_104);
        return 0;
      }
    }
    return 0x80070005;
  }
  if (*param_3 == '\0') {
    _mbscpy(param_3,local_104);
    FUN_00418320((int)local_10c);
  }
  iVar3 = FUN_00418140();
  if ((iVar3 != 0) && (*param_3 == '\0')) {
    FUN_00418320((int)local_10c);
  }
  *param_2 = (int)local_10c;
  return 0;
}


