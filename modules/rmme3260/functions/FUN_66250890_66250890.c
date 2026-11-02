/* Module: rmme3260.dll
   Function: FUN_66250890
   Address: 66250890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66250890(void *this,char *param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_66265690(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


