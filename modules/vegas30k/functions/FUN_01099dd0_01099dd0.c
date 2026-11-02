/* Module: vegas30k.dll
   Function: FUN_01099dd0
   Address: 01099dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01099dd0(void)

{
  char local_c [12];
  
  GetPrivateProfileStringA("intl","sDecimal",".",local_c,10,s_WIN_INI_01206238);
  s___02lu_0120621d[0] = local_c[0];
  s___02lu_0120622f[0] = local_c[0];
  return;
}


