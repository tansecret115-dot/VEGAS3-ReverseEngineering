/* Module: rmme3260.dll
   Function: FUN_66228bf0
   Address: 66228bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66228bf0(int param_1,int param_2)

{
  if (*(uint *)(param_2 + 2) < *(uint *)(param_1 + 2)) {
    return 1;
  }
  return -(uint)(*(uint *)(param_1 + 2) < *(uint *)(param_2 + 2));
}


