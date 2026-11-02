/* Module: sdpp3260.dll
   Function: FUN_10006c70
   Address: 10006c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_10006c70(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_10007c60(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


