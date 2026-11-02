/* Module: vegas30.exe
   Function: FUN_00501af0
   Address: 00501af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501af0(uchar *param_1,uchar *param_2)

{
  LPCSTR lpString2;
  int iVar1;
  undefined **local_10;
  int local_8;
  
  if (*param_2 == '\0') {
    *param_1 = '\0';
    return 0;
  }
  do {
    local_8 = 0;
    local_10 = &PTR_s__amp__006432dc;
    do {
      if (*param_2 == *(uchar *)(local_10 + -1)) {
        iVar1 = lstrlenA(*local_10);
        lpString2 = *local_10;
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xffffffe0,(LPCSTR)param_2,iVar1 + 1);
        (&stack0xffffffe0)[iVar1] = 0;
        (&stack0xffffffe0)[iVar1] = 0;
        lstrcpynA(&stack0xffffffe0,lpString2,iVar1 + 1);
        (&stack0xffffffe0)[iVar1] = 0;
        (&stack0xffffffe0)[iVar1] = 0;
        iVar1 = lstrcmpA(&stack0xffffffe0,&stack0xffffffe0);
        if (iVar1 != 0) {
          _mbscpy(param_1,(&PTR_s__amp__006432dc)[local_8 * 2]);
          iVar1 = lstrlenA((&PTR_s__amp__006432dc)[local_8 * 2]);
          param_1 = param_1 + iVar1 + -1;
          break;
        }
      }
      local_10 = local_10 + 2;
      local_8 = local_8 + 1;
    } while (local_10 < &DAT_006432f4);
    if (local_8 == 3) {
      *param_1 = *param_2;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (*param_2 == '\0') {
      *param_1 = '\0';
      return 0;
    }
  } while( true );
}


