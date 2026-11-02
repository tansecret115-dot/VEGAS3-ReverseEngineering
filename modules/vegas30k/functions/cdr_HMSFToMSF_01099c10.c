/* Module: vegas30k.dll
   Function: cdr_HMSFToMSF
   Address: 01099c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_HMSFToMSF(struct _cdrmsf *,struct _cdrhmsf *) */

long cdr_HMSFToMSF(_cdrmsf *param_1,_cdrhmsf *param_2)

{
                    /* 0x99c10  599  ?cdr_HMSFToMSF@@YGJPAU_cdrmsf@@PAU_cdrhmsf@@@Z */
  if (param_1 == (_cdrmsf *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2 == (_cdrhmsf *)0x0) {
    return -0x7fffbffd;
  }
  *(int *)param_1 = *(int *)(param_2 + 4) + *(int *)param_2 * 0x3c;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  return 0;
}


