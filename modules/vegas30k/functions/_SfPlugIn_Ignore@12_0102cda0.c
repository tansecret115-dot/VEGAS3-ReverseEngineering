/* Module: vegas30k.dll
   Function: _SfPlugIn_Ignore@12
   Address: 0102cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfPlugIn_Ignore_12(undefined4 param_1,int param_2,undefined4 param_3)

{
  LSTATUS LVar1;
  byte bVar2;
  HKEY local_9c;
  int local_98;
  HKEY local_94;
  DWORD local_90;
  DWORD local_8c [4];
  uint local_7c [21];
  CHAR local_28 [40];
  
                    /* 0x2cda0  1160  _SfPlugIn_Ignore@12 */
  LVar1 = RegOpenKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",&local_94);
  if (LVar1 != 0) {
    return 0x80004005;
  }
  FUN_0102aeb0(param_1,local_28,0x28,1);
  LVar1 = RegCreateKeyA(local_94,local_28,&local_9c);
  if (LVar1 == 0) {
    local_90 = 0;
    local_8c[0] = 4;
    LVar1 = RegQueryValueExA(local_9c,"Flags",(LPDWORD)0x0,&local_90,(LPBYTE)local_7c,local_8c);
    if (((LVar1 != 0) || (local_8c[0] != 4)) || (local_90 != 4)) {
      local_7c[0] = 3;
    }
    bVar2 = (byte)((uint)param_3 >> 0x18);
    local_98 = CONCAT31(local_98._1_3_,bVar2);
    if (param_2 == 0) {
      local_7c[0] = local_7c[0] & (~(uint)bVar2 << 0x18 | 0xffffff);
    }
    else {
      local_7c[0] = local_7c[0] | local_98 << 0x18;
    }
    LVar1 = RegSetValueExA(local_9c,"Flags",0,4,(BYTE *)local_7c,4);
    RegCloseKey(local_9c);
  }
  RegCloseKey(local_94);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


