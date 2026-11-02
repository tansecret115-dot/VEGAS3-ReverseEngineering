/* Module: rmme3260.dll
   Function: FUN_6624d8d0
   Address: 6624d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6624d8d0(HDC param_1,undefined4 param_2)

{
  uint local_c;
  uint local_8;
  
  local_c = FUN_6624d920(param_1,param_1[0x10c].unused);
  local_8 = FUN_6624d920(param_1,param_1[0x10d].unused);
  (**(code **)(*(int *)param_1[0x22c].unused + 0x74))((int *)param_1[0x22c].unused,param_2,&local_c)
  ;
  return;
}


