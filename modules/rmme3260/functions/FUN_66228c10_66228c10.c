/* Module: rmme3260.dll
   Function: FUN_66228c10
   Address: 66228c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66228c10(int param_1,int param_2)

{
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  return -(uint)(*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc));
}


