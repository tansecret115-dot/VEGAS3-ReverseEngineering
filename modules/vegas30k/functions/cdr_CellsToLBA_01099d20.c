/* Module: vegas30k.dll
   Function: cdr_CellsToLBA
   Address: 01099d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_CellsToLBA(unsigned long *,unsigned __int64) */

long cdr_CellsToLBA(ulong *param_1,__uint64 param_2)

{
  ulong uVar1;
  undefined4 in_stack_00000008;
  
                    /* 0x99d20  591  ?cdr_CellsToLBA@@YGJPAK_K@Z */
  if (param_1 == (ulong *)0x0) {
    return -0x7fffbffd;
  }
  uVar1 = __aulldiv(in_stack_00000008,(undefined4)param_2,0x24c,0);
  *param_1 = uVar1;
  return 0;
}


