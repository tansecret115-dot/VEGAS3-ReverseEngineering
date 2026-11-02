/* Module: rv203260.dll
   Function: FUN_638afb90
   Address: 638afb90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638afb90(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_638b2c60(*(LPCSTR *)this,param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - *(int *)this;
}


