/* Module: rmbe3260.dll
   Function: FUN_6605bcc0
   Address: 6605bcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6605bcc0(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_66052070(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


