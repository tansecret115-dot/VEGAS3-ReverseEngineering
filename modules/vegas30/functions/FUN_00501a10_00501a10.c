/* Module: vegas30.exe
   Function: FUN_00501a10
   Address: 00501a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501a10(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpString2;
  int iVar2;
  undefined **local_c;
  
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      return 0;
    }
    local_c = &PTR_s__amp__006432dc;
    do {
      if (*param_1 == *(char *)(local_c + -1)) {
        iVar2 = lstrlenA(*local_c);
        lpString2 = *local_c;
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xffffffe4,param_1,iVar2 + 1);
        (&stack0xffffffe4)[iVar2] = 0;
        (&stack0xffffffe4)[iVar2] = 0;
        lstrcpynA(&stack0xffffffe4,lpString2,iVar2 + 1);
        (&stack0xffffffe4)[iVar2] = 0;
        (&stack0xffffffe4)[iVar2] = 0;
        iVar2 = lstrcmpA(&stack0xffffffe4,&stack0xffffffe4);
        if (iVar2 != 0) {
          return 1;
        }
      }
      local_c = local_c + 2;
    } while (local_c < &DAT_006432f4);
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}


