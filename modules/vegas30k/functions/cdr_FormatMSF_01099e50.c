/* Module: vegas30k.dll
   Function: cdr_FormatMSF
   Address: 01099e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_FormatMSF(char *,struct _cdrmsf *) */

int cdr_FormatMSF(char *param_1,_cdrmsf *param_2)

{
  int iVar1;
  
                    /* 0x99e50  596  ?cdr_FormatMSF@@YGHPADPAU_cdrmsf@@@Z */
  if (DAT_0120e8ec == 0) {
    FUN_01099dd0();
  }
  SfPrintF(param_1,&DAT_01206224,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
           *(undefined4 *)(param_2 + 8));
  iVar1 = lstrlenA(param_1);
  return iVar1;
}


