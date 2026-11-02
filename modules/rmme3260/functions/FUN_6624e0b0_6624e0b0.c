/* Module: rmme3260.dll
   Function: FUN_6624e0b0
   Address: 6624e0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624e0b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_6624e0f0((int *)(param_2 + 4));
  if (((iVar1 != 0) && (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 8))) &&
     (*(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0xc))) {
    return 1;
  }
  return 0;
}


