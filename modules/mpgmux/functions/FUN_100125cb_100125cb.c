/* Module: mpgmux.dll
   Function: FUN_100125cb
   Address: 100125cb
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_100125cb(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1001b2f4);
  bVar2 = DAT_1001b2f0 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1001b2f4);
    FUN_1000e78d(0x13);
  }
  iVar1 = FUN_10012624(param_1,param_2);
  if (bVar2) {
    FUN_1000e7ee(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1001b2f4);
  }
  return iVar1;
}


