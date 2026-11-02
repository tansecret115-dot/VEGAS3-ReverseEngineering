/* Module: encn3260.dll
   Function: FUN_664b8450
   Address: 664b8450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b8450(HDC param_1,undefined4 param_2)

{
  uint local_c;
  uint local_8;
  
  local_c = FUN_664b84a0(param_1,param_1[0x10c].unused);
  local_8 = FUN_664b84a0(param_1,param_1[0x10d].unused);
  (**(code **)(*(int *)param_1[0x22c].unused + 0x74))((int *)param_1[0x22c].unused,param_2,&local_c)
  ;
  return;
}


