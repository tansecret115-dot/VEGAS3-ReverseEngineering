/* Module: pncrt.dll
   Function: FUN_78006b30
   Address: 78006b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __fastcall FUN_78006b30(void *param_1)

{
  *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) & 0xffffff8f;
  FUN_78006c60(param_1,&stack0x00000004,1);
  return param_1;
}


