/* Module: enlv3260.dll
   Function: FUN_661d3050
   Address: 661d3050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_661d3050(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_661d40a0(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


