/* Module: vegas30.exe
   Function: FUN_00507aa0
   Address: 00507aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00507aa0(HMENU param_1,undefined4 param_2)

{
  uchar uVar1;
  int iVar2;
  uchar *lpsz;
  uint uIDItem;
  byte *pbVar3;
  int local_310;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  iVar2 = FUN_00507bd0(param_2);
  pbVar3 = (byte *)(iVar2 + 10);
  local_310 = 0;
  do {
    uIDItem = (uint)*(ushort *)(pbVar3 + -10);
    if (uIDItem == 0) {
      return 1;
    }
    if ((*pbVar3 & 0x60) == 0) {
      local_208[0] = '\0';
      if (pbVar3[1] != 0) {
        FUN_005071a0(*pbVar3,pbVar3[1],local_208);
      }
      GetMenuStringA(param_1,uIDItem,(LPSTR)local_104,0x104,0);
      _mbscpy(local_30c,local_104);
      lpsz = local_30c;
      uVar1 = local_30c[0];
      while ((uVar1 != '\0' && (uVar1 != '\b'))) {
        lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
        uVar1 = *lpsz;
      }
      *lpsz = '\0';
      if (local_208[0] != '\0') {
        _mbscat(local_30c,"\b");
        _mbscat(local_30c,local_208);
      }
      iVar2 = lstrcmpA((LPCSTR)local_30c,(LPCSTR)local_104);
      if (iVar2 != 0) {
        ModifyMenuA(param_1,uIDItem,0,uIDItem,(LPCSTR)local_30c);
      }
    }
    pbVar3 = pbVar3 + 0x14;
    local_310 = local_310 + 1;
  } while (local_310 < 200);
  return 1;
}


