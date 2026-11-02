/* Module: rv103260.dll
   Function: FUN_636a6490
   Address: 636a6490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a6490(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_636a6950(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


