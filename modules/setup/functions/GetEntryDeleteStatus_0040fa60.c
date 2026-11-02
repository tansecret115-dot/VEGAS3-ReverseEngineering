/* Module: Setup.exe
   Function: GetEntryDeleteStatus
   Address: 0040fa60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::GetEntryDeleteStatus(int) */

int CArchive2::GetEntryDeleteStatus(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  
                    /* 0xfa60  24  ?GetEntryDeleteStatus@CArchive2@@QAGHH@Z */
  iVar2 = 0;
  if (*(int *)(param_1 + 0x24) == 3) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((in_stack_00000008 < iVar3) &&
       (piVar1 = *(int **)(piVar1[2] + in_stack_00000008 * 4), piVar1 != (int *)0x0)) {
      iVar2 = *piVar1;
    }
  }
  return iVar2;
}


