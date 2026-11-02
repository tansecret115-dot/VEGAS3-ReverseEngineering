/* Module: pngu3266.dll
   Function: FUN_60619500
   Address: 60619500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_60619500(void *this,char *param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_6061bc10(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


