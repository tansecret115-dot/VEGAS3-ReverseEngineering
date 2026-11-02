/* Module: sfcdi.dll
   Function: FUN_5bf2b8b0
   Address: 5bf2b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf2b8b0(void)

{
  char local_c [12];
  
  GetPrivateProfileStringA("intl","sDecimal",".",local_c,10,s_WIN_INI_5bf65740);
  s___02lu_5bf65725[0] = local_c[0];
  s___02lu_5bf65737[0] = local_c[0];
  return;
}


