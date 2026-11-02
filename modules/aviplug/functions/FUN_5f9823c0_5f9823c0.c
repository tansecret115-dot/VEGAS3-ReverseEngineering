/* Module: aviplug.dll
   Function: FUN_5f9823c0
   Address: 5f9823c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LCID FUN_5f9823c0(void)

{
  LSTATUS LVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  LCID Locale;
  CHAR *pCVar5;
  undefined4 *puVar6;
  HKEY local_214;
  DWORD local_210;
  DWORD local_20c;
  CHAR local_208 [44];
  undefined4 local_1dc [54];
  BYTE local_104 [260];
  
  pcVar4 = "System\\CurrentControlSet\\Control\\Nls\\Locale";
  pCVar5 = local_208;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pCVar5 = pCVar5 + 4;
  }
  puVar6 = local_1dc;
  for (iVar3 = 0x36; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  Locale = 0;
  local_210 = 0x104;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_208,0,0x20019,&local_214);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_214,(LPCSTR)0x0,(LPDWORD)0x0,&local_20c,local_104,&local_210);
    if ((LVar1 == 0) ||
       (LVar1 = RegQueryValueExA(local_214,"(Default)",(LPDWORD)0x0,&local_20c,local_104,&local_210)
       , LVar1 == 0)) {
      Locale = FUN_5f9a00e0((LPCSTR)local_104,(undefined4 *)0x0);
      BVar2 = IsValidLocale(Locale,1);
      if (BVar2 == 0) {
        Locale = 0;
      }
    }
    RegCloseKey(local_214);
    return Locale;
  }
  return 0;
}


