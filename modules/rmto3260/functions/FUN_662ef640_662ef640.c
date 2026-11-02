/* Module: rmto3260.dll
   Function: FUN_662ef640
   Address: 662ef640
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ef640(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_662f4500(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


