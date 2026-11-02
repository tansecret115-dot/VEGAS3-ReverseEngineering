/* Module: vegas30k.dll
   Function: cdr_LBAToMSF
   Address: 01099b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_LBAToMSF(struct _cdrmsf *,unsigned long) */

long cdr_LBAToMSF(_cdrmsf *param_1,ulong param_2)

{
                    /* 0x99b00  603  ?cdr_LBAToMSF@@YGJPAU_cdrmsf@@K@Z */
  if (param_1 == (_cdrmsf *)0x0) {
    return -0x7fffbffd;
  }
  *(uint *)param_1 = param_2 / 0x1194;
  *(uint *)(param_1 + 4) = (param_2 % 0x1194) / 0x4b;
  *(uint *)(param_1 + 8) = (param_2 % 0x1194) % 0x4b;
  return 0;
}


