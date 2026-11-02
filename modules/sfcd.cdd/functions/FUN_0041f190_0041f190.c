/* Module: sfcd.cdd
   Function: FUN_0041f190
   Address: 0041f190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f190(void)

{
  char local_c [12];
  
  GetPrivateProfileStringA("intl","sDecimal",".",local_c,10,s_WIN_INI_00441188);
  s___02lu_0044116d[0] = local_c[0];
  s___02lu_0044117f[0] = local_c[0];
  return;
}


