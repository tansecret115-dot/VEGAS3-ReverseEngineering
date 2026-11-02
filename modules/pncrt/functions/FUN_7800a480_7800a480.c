/* Module: pncrt.dll
   Function: FUN_7800a480
   Address: 7800a480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_7800a480(void)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  
  DAT_780421cc = 0;
  DAT_780421c0 = (undefined4 *)0x0;
  psVar2 = (short *)*__wargv;
  puVar7 = __wargv;
  while( true ) {
    if (psVar2 == (short *)0x0) {
      iVar5 = 0;
      for (puVar7 = DAT_780421c0; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[1]) {
        iVar5 = iVar5 + 1;
      }
      puVar7 = malloc(iVar5 * 4 + 4);
      puVar4 = puVar7;
      puVar3 = DAT_780421c0;
      if (puVar7 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      for (; __argc = iVar5, __wargv = puVar4, puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        *puVar7 = *puVar3;
        puVar7 = puVar7 + 1;
        puVar4 = __wargv;
        iVar5 = __argc;
      }
      *puVar7 = 0;
      puVar7 = DAT_780421c0;
      while (puVar7 != (undefined4 *)0x0) {
        DAT_780421c0 = (undefined4 *)puVar7[1];
        free(puVar7);
        puVar7 = DAT_780421c0;
      }
      DAT_780421c0 = puVar7;
      return 0;
    }
    sVar1 = *psVar2;
    pwVar6 = psVar2 + 1;
    *puVar7 = pwVar6;
    if (sVar1 == 0x22) {
      iVar5 = FUN_7800a720(pwVar6);
    }
    else {
      pwVar6 = wcspbrk(pwVar6,L"*?");
      if (pwVar6 == (wchar_t *)0x0) {
        iVar5 = FUN_7800a720(*puVar7);
      }
      else {
        iVar5 = FUN_7800a580((wchar_t *)*puVar7,pwVar6);
      }
    }
    if (iVar5 != 0) break;
    psVar2 = (short *)puVar7[1];
    puVar7 = puVar7 + 1;
  }
  return 0xffffffff;
}


