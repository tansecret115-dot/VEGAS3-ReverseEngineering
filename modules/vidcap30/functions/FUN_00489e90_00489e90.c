/* Module: vidcap30.exe
   Function: FUN_00489e90
   Address: 00489e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00489e90(undefined4 param_1,LPCSTR param_2,undefined4 param_3,uint param_4)

{
  LSTATUS LVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  DWORD local_80;
  HKEY local_7c;
  HKEY local_78;
  int local_74;
  DWORD local_70;
  undefined4 *local_6c;
  CHAR local_68 [40];
  CHAR local_40 [64];
  
  iVar4 = 0;
  local_7c = (HKEY)0x0;
  local_74 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,param_2,0,0x20019,&local_7c);
  if (LVar1 == 0) {
    local_70 = 0;
    local_80 = 0x28;
    iVar2 = RegEnumKeyExA(local_7c,0,local_68,&local_80,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    while (iVar2 == 0) {
      LVar1 = RegOpenKeyExA(local_7c,local_68,0,0x20019,&local_78);
      if (LVar1 == 0) {
        local_80 = 0x40;
        LVar1 = RegQueryValueA(local_78,(LPCSTR)0x0,local_40,(PLONG)&local_80);
        if (LVar1 == 0) {
          hMem = GlobalAlloc(0x42,0x344);
          puVar3 = GlobalLock(hMem);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0x344;
            lstrcpynA((LPSTR)(puVar3 + 7),local_40,0x104);
            *(undefined1 *)((int)puVar3 + 0x11f) = 0;
            puVar3[0xd0] = param_3;
            iVar4 = FUN_0048a040(local_78,local_68,puVar3,param_4);
            if ((iVar4 == 0) || ((puVar3[0x8f] & param_4) == 0)) {
              FUN_00487910(puVar3);
            }
            else {
              local_6c = puVar3;
              _SfList_InsertList_16(param_1,0xffffffff,&local_6c,1);
              local_74 = local_74 + 1;
            }
          }
        }
        RegCloseKey(local_78);
      }
      local_70 = local_70 + 1;
      local_80 = 0x28;
      iVar2 = RegEnumKeyExA(local_7c,local_70,local_68,&local_80,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      iVar4 = local_74;
    }
  }
  if (local_7c != (HKEY)0x0) {
    RegCloseKey(local_7c);
  }
  return iVar4;
}


