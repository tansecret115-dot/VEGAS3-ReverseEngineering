/* Module: pngu3266.dll
   Function: FUN_6061bde0
   Address: 6061bde0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6061bde0(void *param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  CHAR local_170 [260];
  int local_6c [13];
  int local_38 [13];
  
  FUN_6061c330(local_38);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_170,0x104);
  if (DVar1 != 0) {
    puVar2 = FUN_6061c280(local_6c,local_170);
    FUN_6061c370(local_38,puVar2);
    thunk_FUN_60618cd0(local_6c);
  }
  FUN_6061c2a0(param_1,local_38);
  thunk_FUN_60618cd0(local_38);
  return param_1;
}


