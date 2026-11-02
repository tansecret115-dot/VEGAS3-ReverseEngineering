/* Module: sfxpfx2.dll
   Function: FUN_5c8ce860
   Address: 5c8ce860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

uint __thiscall FUN_5c8ce860(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  LSTATUS LVar3;
  int iVar4;
  uint local_40;
  HKEY local_3c;
  HKEY local_38;
  DWORD local_34;
  DWORD local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  DWORD local_28;
  uchar local_24 [5];
  undefined1 local_1f;
  undefined1 local_1e;
  uint local_1c;
  int local_18;
  _SYSTEMTIME local_14;
  
  local_34 = 4;
  uVar2 = FUN_5c8d2e10(this,(char *)0x0,"5",&local_28,(byte *)&local_40,&local_34);
  if (-1 < (int)uVar2) {
    local_2a = 0;
    FUN_5c8d6f50(local_40,(uchar *)&local_30);
    *param_1 = local_2b;
    param_1[1] = local_2a;
    param_1[2] = 0;
    return uVar2;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_38);
  puVar1 = param_1;
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_38,"License",0,0x2001f,&local_3c);
    if (LVar3 == 0) {
      local_30 = 8;
      LVar3 = RegQueryValueExA(local_3c,(LPCSTR)((int)this + 0xa04),(LPDWORD)0x0,&local_28,
                               (LPBYTE)&local_1c,&local_30);
      if (LVar3 == 0) {
        iVar4 = FUN_5c8d5ed0(local_1c,-0x65748393);
        if (local_18 == iVar4) {
          local_40 = *(uint *)((int)this + 0x30) ^ local_1c;
          local_1e = 0;
          FUN_5c8d6f50(local_40,local_24);
          *puVar1 = local_1f;
          puVar1[1] = local_1e;
          puVar1[2] = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x80070057;
        }
      }
      else {
        GetSystemTime(&local_14);
        srand((uint)local_14.wDayOfWeek + (uint)local_14.wMilliseconds + (uint)local_14.wSecond +
              (uint)local_14.wMinute + (uint)local_14.wDay + (uint)local_14.wMonth +
              (uint)local_14.wYear);
        iVar4 = rand();
        param_1 = (undefined1 *)(iVar4 % 0x3ff);
        uVar2 = FUN_5c8d2f80(this,(HKEY)0x0,"5",4,(byte *)&param_1,4,1,1);
        if (-1 < (int)uVar2) {
          local_1e = 0;
          FUN_5c8d6f50((uint)param_1,local_24);
          *puVar1 = local_1f;
          puVar1[1] = local_1e;
          puVar1[2] = 0;
        }
      }
      RegCloseKey(local_3c);
    }
    RegCloseKey(local_38);
  }
  if ((int)uVar2 < 0) {
    *puVar1 = 0;
  }
  return uVar2;
}


