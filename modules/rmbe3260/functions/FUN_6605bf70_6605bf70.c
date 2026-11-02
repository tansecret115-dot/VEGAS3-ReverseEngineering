/* Module: rmbe3260.dll
   Function: FUN_6605bf70
   Address: 6605bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6605bf70(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_660520e0(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


