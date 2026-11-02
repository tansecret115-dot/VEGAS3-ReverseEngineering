/* Module: mcplug.dll
   Function: FUN_004689c0
   Address: 004689c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004689c0(void *this,HKEY param_1)

{
  HKEY pHVar1;
  uint uVar2;
  LSTATUS LVar3;
  int iVar4;
  HKEY local_18;
  DWORD local_14 [3];
  uint local_8;
  int local_4;
  
  pHVar1 = param_1;
  local_14[0] = 4;
  uVar2 = FUN_0046bf60(this,(char *)0x0,"4",local_14 + 2,(byte *)param_1,local_14);
  if (-1 < (int)uVar2) {
    return uVar2;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_18);
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_18,"License",0,0x20019,&param_1);
    if (LVar3 == 0) {
      local_14[1] = 8;
      LVar3 = RegQueryValueExA(param_1,(LPCSTR)((int)this + 0x804),(LPDWORD)0x0,local_14 + 2,
                               (LPBYTE)&local_8,local_14 + 1);
      if (LVar3 == 0) {
        iVar4 = FUN_0046f8e0(local_8,-0x65748393);
        if (local_4 == iVar4) {
          uVar2 = 0;
          pHVar1->unused = *(uint *)((int)this + 0x30) ^ local_8;
        }
        else {
          uVar2 = 0x80070057;
        }
      }
      RegCloseKey(param_1);
    }
    RegCloseKey(local_18);
  }
  return uVar2;
}


