/* Module: vidpcore.dll
   Function: FUN_5deb6a10
   Address: 5deb6a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deb6a10(HWND param_1,CHAR *param_2)

{
  char cVar1;
  LPCSTR lpsz;
  int iVar2;
  BOOL BVar3;
  CHAR local_800 [2048];
  
  cVar1 = *param_2;
  lpsz = param_2;
  do {
    if (cVar1 == '\0') {
      iVar2 = lstrlenA(param_2);
LAB_5deb6a4f:
      BVar3 = SetWindowTextA(param_1,param_2);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      iVar2 = FUN_5deb46d0(local_800,param_2,&stack0x0000000c);
      param_2 = local_800;
      goto LAB_5deb6a4f;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


