/* Module: sipr3260.dll
   Function: FUN_632a3180
   Address: 632a3180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_632a3180(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_632a3640(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


