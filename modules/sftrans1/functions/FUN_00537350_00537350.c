/* Module: sftrans1.dll
   Function: FUN_00537350
   Address: 00537350
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00537350(HKEY param_1,LPCSTR param_2)

{
  uint uVar1;
  uint uVar2;
  LSTATUS LVar3;
  LSTATUS LVar4;
  DWORD dwIndex;
  HKEY local_21c;
  DWORD local_218 [2];
  _FILETIME local_210;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  do {
    uVar1 = FUN_005372a0(param_1,param_2,0);
    if (uVar1 != 0) {
      uVar2 = RegOpenKeyA(param_1,param_2,&local_21c);
      if (uVar2 != 0) {
        return uVar2;
      }
      dwIndex = 0;
      if (uVar1 != 0) {
        do {
          local_218[1] = 0x104;
          local_218[0] = 0x104;
          LVar3 = RegEnumKeyExA(local_21c,dwIndex,local_208,local_218,(LPDWORD)0x0,local_104,
                                local_218 + 1,&local_210);
          if (LVar3 != 0) break;
          FUN_00537350(local_21c,local_208);
          dwIndex = dwIndex + 1;
        } while (dwIndex < uVar1);
      }
      RegCloseKey(local_21c);
    }
    LVar3 = RegDeleteKeyA(param_1,param_2);
    LVar4 = RegOpenKeyA(param_1,param_2,&local_21c);
    if (LVar4 != 0) {
      return (uint)(LVar3 == 0);
    }
    RegCloseKey(local_21c);
  } while( true );
}


