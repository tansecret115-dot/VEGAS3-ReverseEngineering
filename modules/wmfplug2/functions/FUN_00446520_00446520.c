/* Module: wmfplug2.dll
   Function: FUN_00446520
   Address: 00446520
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS FUN_00446520(HKEY param_1,LPCSTR param_2)

{
  DWORD DVar1;
  LSTATUS LVar2;
  LSTATUS LVar3;
  DWORD dwIndex;
  HKEY local_21c;
  DWORD local_218 [2];
  _FILETIME local_210;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  do {
    DVar1 = FUN_00446470(param_1,param_2,(int *)0x0);
    if (DVar1 != 0) {
      LVar2 = RegOpenKeyA(param_1,param_2,&local_21c);
      if (LVar2 != 0) {
        return LVar2;
      }
      dwIndex = 0;
      if (DVar1 != 0) {
        do {
          local_218[1] = 0x104;
          local_218[0] = 0x104;
          LVar2 = RegEnumKeyExA(local_21c,dwIndex,local_208,local_218,(LPDWORD)0x0,local_104,
                                local_218 + 1,&local_210);
          if (LVar2 != 0) break;
          FUN_00446520(local_21c,local_208);
          dwIndex = dwIndex + 1;
        } while (dwIndex < DVar1);
      }
      RegCloseKey(local_21c);
    }
    LVar2 = RegDeleteKeyA(param_1,param_2);
    LVar3 = RegOpenKeyA(param_1,param_2,&local_21c);
    if (LVar3 != 0) {
      return LVar2;
    }
    RegCloseKey(local_21c);
  } while( true );
}


