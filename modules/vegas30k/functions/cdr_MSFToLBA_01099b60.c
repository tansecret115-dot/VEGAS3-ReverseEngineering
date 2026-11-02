/* Module: vegas30k.dll
   Function: cdr_MSFToLBA
   Address: 01099b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_MSFToLBA(unsigned long *,struct _cdrmsf *) */

long cdr_MSFToLBA(ulong *param_1,_cdrmsf *param_2)

{
  int iVar1;
  ulong uVar2;
  
                    /* 0x99b60  605  ?cdr_MSFToLBA@@YGJPAKPAU_cdrmsf@@@Z */
  if (param_1 == (ulong *)0x0) {
    return -0x7fffbffd;
  }
  if (param_2 == (_cdrmsf *)0x0) {
    return -0x7fffbffd;
  }
  iVar1 = *(int *)param_2;
  *param_1 = iVar1 * 0x1194;
  uVar2 = iVar1 * 0x1194 + *(int *)(param_2 + 4) * 0x4b;
  *param_1 = uVar2;
  *param_1 = *(int *)(param_2 + 8) + uVar2;
  return 0;
}


