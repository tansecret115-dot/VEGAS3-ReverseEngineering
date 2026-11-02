/* Module: mcplug.dll
   Function: FUN_0041b0c0
   Address: 0041b0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041b0c0(HMODULE param_1)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  HKEY local_15c;
  int local_158;
  BYTE local_154 [260];
  OLECHAR local_50 [40];
  
  StringFromGUID2((GUID *)&stack0x00000008,local_50,0x28);
  wsprintfA((LPSTR)local_154,"%s\\%ls","Software\\Sonic Foundry\\File Formats 2",local_50);
  uVar1 = RegCreateKeyA((HKEY)0x80000002,(LPCSTR)local_154,&local_15c);
  if (uVar1 != 0) {
    return uVar1 & 0xffff | 0x80070000;
  }
  wsprintfA((LPSTR)local_154,"%s",in_stack_00000018);
  uVar1 = RegSetValueA(local_15c,(LPCSTR)0x0,1,(LPCSTR)local_154,0x104);
  if (uVar1 != 0) {
    RegCloseKey(local_15c);
    return uVar1 & 0xffff | 0x80070000;
  }
  DVar2 = GetModuleFileNameA(param_1,(LPSTR)local_154,0x104);
  if (DVar2 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      return DVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    iVar3 = lstrlenA((LPCSTR)local_154);
    uVar1 = RegSetValueExA(local_15c,"Path",0,1,local_154,iVar3 + 1);
    if (uVar1 != 0) {
      RegCloseKey(local_15c);
      return uVar1 & 0xffff | 0x80070000;
    }
    if (in_stack_00000030 == 0) {
      RegDeleteValueA(local_15c,"BetaBuild");
    }
    else {
      RegSetValueExA(local_15c,"BetaBuild",0,4,(BYTE *)&stack0x00000030,4);
    }
    RegSetValueExA(local_15c,"Flags",0,4,&stack0x00000034,4);
    local_158 = in_stack_00000024;
    RegSetValueExA(local_15c,"Access",0,4,(BYTE *)&local_158,4);
    local_158 = in_stack_00000028;
    RegSetValueExA(local_15c,"StreamType",0,4,(BYTE *)&local_158,4);
    if (in_stack_0000002c != 0) {
      local_158 = in_stack_0000002c;
      RegSetValueExA(local_15c,"AppLevel",0,4,(BYTE *)&local_158,4);
    }
    RegCloseKey(local_15c);
  }
  return 0;
}


