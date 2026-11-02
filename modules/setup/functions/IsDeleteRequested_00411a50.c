/* Module: Setup.exe
   Function: IsDeleteRequested
   Address: 00411a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::IsDeleteRequested(void) */

int CArchive2::IsDeleteRequested(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
                    /* 0x11a50  41  ?IsDeleteRequested@CArchive2@@QAGHXZ */
  iVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x24) == 3) {
    piVar1 = *(int **)(in_stack_00000004 + 0x10);
    iVar3 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar3) {
        return 0;
      }
      piVar2 = *(int **)(piVar1[2] + iVar3 * 4);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) break;
      iVar3 = iVar3 + 1;
    }
    iVar3 = 1;
  }
  return iVar3;
}


