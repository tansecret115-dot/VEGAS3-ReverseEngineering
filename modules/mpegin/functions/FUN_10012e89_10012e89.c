/* Module: mpegin.dll
   Function: FUN_10012e89
   Address: 10012e89
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10012e89(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1001c6f4);
  bVar2 = DAT_1001c6f0 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1001c6f4);
    FUN_10010ee5(0x13);
  }
  iVar1 = FUN_10012ee2(param_1,param_2);
  if (bVar2) {
    FUN_10010f46(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1001c6f4);
  }
  return iVar1;
}


