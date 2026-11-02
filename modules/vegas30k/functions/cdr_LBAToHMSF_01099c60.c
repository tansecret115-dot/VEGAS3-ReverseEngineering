/* Module: vegas30k.dll
   Function: cdr_LBAToHMSF
   Address: 01099c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_LBAToHMSF(struct _cdrhmsf *,unsigned long) */

long cdr_LBAToHMSF(_cdrhmsf *param_1,ulong param_2)

{
  _cdrmsf local_c [12];
  
                    /* 0x99c60  602  ?cdr_LBAToHMSF@@YGJPAU_cdrhmsf@@K@Z */
  if (param_1 == (_cdrhmsf *)0x0) {
    return -0x7fffbffd;
  }
  cdr_LBAToMSF(local_c,param_2);
  cdr_MSFToHMSF(param_1,local_c);
  return 0;
}


