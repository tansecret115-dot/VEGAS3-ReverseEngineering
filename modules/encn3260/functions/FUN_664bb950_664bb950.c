/* Module: encn3260.dll
   Function: FUN_664bb950
   Address: 664bb950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664bb950(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_664d1ce0(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


