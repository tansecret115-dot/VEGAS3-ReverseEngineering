/* Module: mcmpgdec.dll
   Function: FUN_10008ed0
   Address: 10008ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10008ed0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_1000383c((int *)(param_1 + 0x66c));
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    FUN_10003858((int *)(param_1 + 0x66c),8);
  }
  return iVar2;
}


