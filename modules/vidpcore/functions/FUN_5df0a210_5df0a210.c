/* Module: vidpcore.dll
   Function: FUN_5df0a210
   Address: 5df0a210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5df0a210(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  LSTATUS LVar3;
  uint local_40;
  HKEY local_3c;
  HKEY local_38;
  undefined4 local_34;
  DWORD local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  DWORD local_28;
  undefined1 local_24 [5];
  undefined1 local_1f;
  undefined1 local_1e;
  uint local_1c;
  int local_18;
  _SYSTEMTIME local_14;
  
  local_34 = 4;
  iVar2 = FUN_5df0e7c0(0,&DAT_5df374fc,&local_28,&local_40,&local_34);
  if (-1 < iVar2) {
    local_2a = 0;
    FUN_5df12900(local_40,&local_30,7);
    *param_2 = local_2b;
    param_2[1] = local_2a;
    param_2[2] = 0;
    return iVar2;
  }
  LVar3 = RegOpenKeyExA((HKEY)&DAT_80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_38);
  puVar1 = param_2;
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_38,"License",0,0x2001f,&local_3c);
    if (LVar3 == 0) {
      local_30 = 8;
      LVar3 = RegQueryValueExA(local_3c,(LPCSTR)(param_1 + 0xa04),(LPDWORD)0x0,&local_28,
                               (LPBYTE)&local_1c,&local_30);
      if (LVar3 == 0) {
        iVar2 = FUN_5df11880(local_1c,0x9a8b7c6d);
        if (local_18 == iVar2) {
          local_40 = *(uint *)(param_1 + 0x30) ^ local_1c;
          local_1e = 0;
          FUN_5df12900(local_40,local_24,7);
          *puVar1 = local_1f;
          puVar1[1] = local_1e;
          puVar1[2] = 0;
          iVar2 = 0;
        }
        else {
          iVar2 = -0x7ff8ffa9;
        }
      }
      else {
        GetSystemTime(&local_14);
        srand((uint)local_14.wDayOfWeek + (uint)local_14.wMilliseconds + (uint)local_14.wSecond +
              (uint)local_14.wMinute + (uint)local_14.wDay + (uint)local_14.wMonth +
              (uint)local_14.wYear);
        iVar2 = rand();
        param_2 = (undefined1 *)(iVar2 % 0x3ff);
        iVar2 = FUN_5df0e930(0,&DAT_5df374fc,4,&param_2,4,1,1);
        if (-1 < iVar2) {
          local_1e = 0;
          FUN_5df12900(param_2,local_24,7);
          *puVar1 = local_1f;
          puVar1[1] = local_1e;
          puVar1[2] = 0;
        }
      }
      RegCloseKey(local_3c);
    }
    RegCloseKey(local_38);
  }
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  return iVar2;
}


