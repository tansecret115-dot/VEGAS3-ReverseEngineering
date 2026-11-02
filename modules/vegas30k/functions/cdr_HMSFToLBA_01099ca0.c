/* Module: vegas30k.dll
   Function: cdr_HMSFToLBA
   Address: 01099ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_HMSFToLBA(unsigned long *,struct _cdrhmsf *) */

long cdr_HMSFToLBA(ulong *param_1,_cdrhmsf *param_2)

{
  _cdrmsf local_c [12];
  
                    /* 0x99ca0  598  ?cdr_HMSFToLBA@@YGJPAKPAU_cdrhmsf@@@Z */
  if (param_1 == (ulong *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2 == (_cdrhmsf *)0x0) {
    return -0x7fffbffd;
  }
  cdr_HMSFToMSF(local_c,param_2);
  cdr_MSFToLBA(param_1,local_c);
  return 0;
}


