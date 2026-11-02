/* Module: sftrans1.dll
   Function: FUN_00530a60
   Address: 00530a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00530a60(int param_1,HKEY param_2)

{
  HKEY pHVar1;
  int iVar2;
  LSTATUS LVar3;
  HKEY local_18;
  undefined4 local_14;
  DWORD local_10;
  DWORD local_c;
  uint local_8;
  int local_4;
  
  pHVar1 = param_2;
  local_14 = 4;
  iVar2 = FUN_00534000(0,&DAT_0056dbc8,&local_c,param_2,&local_14);
  if (-1 < iVar2) {
    return iVar2;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_18);
  if (LVar3 == 0) {
    LVar3 = RegOpenKeyExA(local_18,"License",0,0x20019,&param_2);
    if (LVar3 == 0) {
      local_10 = 8;
      LVar3 = RegQueryValueExA(param_2,(LPCSTR)(param_1 + 0x804),(LPDWORD)0x0,&local_c,
                               (LPBYTE)&local_8,&local_10);
      if (LVar3 == 0) {
        iVar2 = FUN_00537090(local_8,0x9a8b7c6d);
        if (local_4 == iVar2) {
          iVar2 = 0;
          pHVar1->unused = *(uint *)(param_1 + 0x30) ^ local_8;
        }
        else {
          iVar2 = -0x7ff8ffa9;
        }
      }
      RegCloseKey(param_2);
    }
    RegCloseKey(local_18);
  }
  return iVar2;
}


