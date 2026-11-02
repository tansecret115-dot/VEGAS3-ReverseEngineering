/* Module: sfmarket2.dll
   Function: FUN_004291b0
   Address: 004291b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004291b0(int param_1,uint param_2,LPBYTE param_3,uint param_4,uint *param_5)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  LPBYTE pBVar5;
  DWORD local_24;
  CHAR local_20 [32];
  
  uVar4 = 0;
  if (param_5 == (uint *)0x0) {
    return 0x80070057;
  }
  hKey = (HKEY)FUN_00428e00(param_1,param_2,3,local_20);
  uVar2 = param_4;
  if (hKey != (HKEY)0x0) {
    local_24 = 3;
    LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_4);
    if (LVar1 == 0xea) {
      uVar4 = 0x8004e03c;
    }
    else if ((LVar1 != 0) || (local_24 != 3)) {
      uVar4 = 1;
      param_4 = 0;
    }
    if (param_4 < uVar2) {
      uVar2 = uVar2 - param_4;
      pBVar5 = param_3 + param_4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        pBVar5[0] = '\0';
        pBVar5[1] = '\0';
        pBVar5[2] = '\0';
        pBVar5[3] = '\0';
        pBVar5 = pBVar5 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pBVar5 = '\0';
        pBVar5 = pBVar5 + 1;
      }
    }
    *param_5 = param_4;
    FUN_00428ea0();
    return uVar4;
  }
  return 0x8004e00a;
}


