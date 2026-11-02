/* Module: rmme3260.dll
   Function: FUN_662088f0
   Address: 662088f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662088f0(int param_1,int param_2)

{
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10)) {
    return 1;
  }
  return -(uint)(*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10));
}


