/* Module: encn3260.dll
   Function: FUN_664b5d40
   Address: 664b5d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b5d40(uint *param_1)

{
  uint *puVar1;
  
  if (((*param_1 & 0x100) != 0) && ((*param_1 & 2) != 0)) {
    puVar1 = param_1 + 0x10e;
    param_1 = (uint *)0x0;
    (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,&param_1);
    if (((uint)param_1 & 0x8000) != 0) {
      return 1;
    }
  }
  return 0;
}


