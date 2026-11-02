/* Module: erv13260.dll
   Function: FUN_636035c0
   Address: 636035c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636035c0(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_63603cb0(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


