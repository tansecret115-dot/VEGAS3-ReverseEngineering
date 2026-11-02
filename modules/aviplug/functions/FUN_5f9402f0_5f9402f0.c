/* Module: aviplug.dll
   Function: FUN_5f9402f0
   Address: 5f9402f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9402f0(undefined4 param_1,LPVOID param_2)

{
  if (param_2 == (LPVOID)0x0) {
    return 1;
  }
  VirtualFree(param_2,0,0x8000);
  return 0;
}


