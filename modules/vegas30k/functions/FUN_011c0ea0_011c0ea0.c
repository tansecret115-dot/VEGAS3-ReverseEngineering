/* Module: vegas30k.dll
   Function: FUN_011c0ea0
   Address: 011c0ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011c0ea0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_011b5a10();
  if (-1 < iVar1) {
    wsprintfA((LPSTR)(param_1 + 0x2c),"Video device",*(int *)(param_1 + 0x10) + 1);
  }
  return iVar1;
}


