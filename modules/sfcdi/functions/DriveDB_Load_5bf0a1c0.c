/* Module: sfcdi.dll
   Function: DriveDB_Load
   Address: 5bf0a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_Load(struct tSFLIST * *) */

long DriveDB_Load(tSFLIST **param_1)

{
  char *pcVar1;
  LPCSTR pCVar2;
  uchar local_104 [260];
  
                    /* 0xa1c0  14  ?DriveDB_Load@@YGJPAPAUtSFLIST@@@Z */
  *param_1 = (tSFLIST *)0x0;
  GetModuleFileNameA(DAT_5bf65eb8,(LPSTR)local_104,0x104);
  pcVar1 = FUN_5bf230b0((LPCSTR)local_104);
  *pcVar1 = '\0';
  _mbscat(local_104,(uchar *)"sfcdi.cfg");
  FUN_5bf2b110((int *)param_1,4,-1,-1,0x40000002);
  pCVar2 = FUN_5bf09370((LPCSTR)local_104,(int *)*param_1);
  FUN_5bf2a970((int *)*param_1,0,FUN_5bf092d0);
  return (long)pCVar2;
}


