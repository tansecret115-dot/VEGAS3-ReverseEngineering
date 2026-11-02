/* Module: sfcdi.dll
   Function: DriveDB_Wizard
   Address: 5bf0a310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DriveDB_Wizard(struct HWND__ *) */

long DriveDB_Wizard(HWND__ *param_1)

{
                    /* 0xa310  16  ?DriveDB_Wizard@@YGJPAUHWND__@@@Z */
  FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0xef,param_1,(DLGPROC)&LAB_5bf0a250,0);
  return 0;
}


