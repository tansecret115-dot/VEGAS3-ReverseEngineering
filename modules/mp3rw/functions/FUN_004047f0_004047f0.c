/* Module: mp3rw.dll
   Function: FUN_004047f0
   Address: 004047f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004047f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = InternetQueryDataAvailable(param_1,param_2,0,0);
  return (-(uint)(iVar1 != 0) & 0x7ffb1f12) + 0x8004e0ee;
}


