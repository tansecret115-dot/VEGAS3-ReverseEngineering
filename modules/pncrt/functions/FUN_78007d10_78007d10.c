/* Module: pncrt.dll
   Function: FUN_78007d10
   Address: 78007d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78007d10(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x78007d3c,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


