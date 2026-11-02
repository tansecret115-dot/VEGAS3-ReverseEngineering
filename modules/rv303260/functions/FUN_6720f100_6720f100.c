/* Module: rv303260.dll
   Function: FUN_6720f100
   Address: 6720f100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6720f100(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_672121d0(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


