/* Module: vegas30k.dll
   Function: cdr_FormatHMSF
   Address: 01099e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_FormatHMSF(char *,struct _cdrhmsf *) */

int cdr_FormatHMSF(char *param_1,_cdrhmsf *param_2)

{
  int iVar1;
  
                    /* 0x99e10  592  ?cdr_FormatHMSF@@YGHPADPAU_cdrhmsf@@@Z */
  if (DAT_0120e8ec == 0) {
    FUN_01099dd0();
  }
  SfPrintF(param_1,&DAT_0120620c,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
           *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  iVar1 = lstrlenA(param_1);
  return iVar1;
}


