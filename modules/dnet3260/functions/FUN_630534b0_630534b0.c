/* Module: dnet3260.dll
   Function: FUN_630534b0
   Address: 630534b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_630534b0(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_63053b70(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


