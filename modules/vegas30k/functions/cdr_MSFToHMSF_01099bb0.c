/* Module: vegas30k.dll
   Function: cdr_MSFToHMSF
   Address: 01099bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_MSFToHMSF(struct _cdrhmsf *,struct _cdrmsf *) */

long cdr_MSFToHMSF(_cdrhmsf *param_1,_cdrmsf *param_2)

{
  uint uVar1;
  
                    /* 0x99bb0  604  ?cdr_MSFToHMSF@@YGJPAU_cdrhmsf@@PAU_cdrmsf@@@Z */
  if (param_1 == (_cdrhmsf *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2 == (_cdrmsf *)0x0) {
    return -0x7fffbffd;
  }
  uVar1 = *(uint *)param_2;
  *(uint *)param_1 = uVar1 / 0x3c;
  *(uint *)(param_1 + 4) = *(int *)param_2 + (uVar1 / 0x3c) * -0x3c;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  return 0;
}


