/* Module: pncrt.dll
   Function: FUN_78009e20
   Address: 78009e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_78009e20(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  DAT_78041fb0 = 0;
  DAT_78041fa4 = (undefined4 *)0x0;
  pcVar2 = (char *)*__argv;
  puVar7 = __argv;
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      iVar6 = 0;
      for (puVar7 = DAT_78041fa4; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[1]) {
        iVar6 = iVar6 + 1;
      }
      puVar7 = malloc(iVar6 * 4 + 4);
      puVar4 = puVar7;
      puVar3 = DAT_78041fa4;
      if (puVar7 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      for (; __argc = iVar6, __argv = puVar4, puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        *puVar7 = *puVar3;
        puVar7 = puVar7 + 1;
        puVar4 = __argv;
        iVar6 = __argc;
      }
      *puVar7 = 0;
      puVar7 = DAT_78041fa4;
      while (puVar7 != (undefined4 *)0x0) {
        DAT_78041fa4 = (undefined4 *)puVar7[1];
        free(puVar7);
        puVar7 = DAT_78041fa4;
      }
      DAT_78041fa4 = puVar7;
      return 0;
    }
    cVar1 = *pcVar2;
    puVar5 = (uchar *)(pcVar2 + 1);
    *puVar7 = puVar5;
    if (cVar1 == '\"') {
      iVar6 = FUN_7800a0d0(puVar5);
    }
    else {
      puVar5 = _mbspbrk(puVar5,"*?");
      if (puVar5 == (uchar *)0x0) {
        iVar6 = FUN_7800a0d0(*puVar7);
      }
      else {
        iVar6 = FUN_78009f20((uchar *)*puVar7,puVar5);
      }
    }
    if (iVar6 != 0) break;
    pcVar2 = (char *)puVar7[1];
    puVar7 = puVar7 + 1;
  }
  return 0xffffffff;
}


