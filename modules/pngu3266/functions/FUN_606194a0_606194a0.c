/* Module: pngu3266.dll
   Function: FUN_606194a0
   Address: 606194a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_606194a0(void *this,void *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strcspn(*(char **)this,param_2);
  FUN_60619450(this,param_1,sVar1);
  return param_1;
}


