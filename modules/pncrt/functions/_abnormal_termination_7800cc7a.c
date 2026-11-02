/* Module: pncrt.dll
   Function: _abnormal_termination
   Address: 7800cc7a
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _abnormal_termination(void)

{
  int iVar1;
  
                    /* 0xcc7a  152  _abnormal_termination */
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_7800cbf0) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}


