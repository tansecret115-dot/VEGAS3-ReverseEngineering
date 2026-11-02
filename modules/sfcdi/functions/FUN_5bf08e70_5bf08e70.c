/* Module: sfcdi.dll
   Function: FUN_5bf08e70
   Address: 5bf08e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf08e70(LPSTR param_1,LPCSTR param_2,DWORD param_3)

{
  char *pcVar1;
  uchar local_104 [260];
  
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_104,0x104);
  pcVar1 = FUN_5bf230b0((LPCSTR)local_104);
  *pcVar1 = '\0';
  _mbscat(local_104,(uchar *)"sfcdi.txt");
  GetPrivateProfileSectionA(param_2,param_1,param_3,(LPCSTR)local_104);
  return;
}


