/* Module: sfppack2.dll
   Function: FUN_5cd46340
   Address: 5cd46340
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS __fastcall FUN_5cd46340(int param_1)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  HKEY local_8;
  HKEY local_4;
  
  LVar2 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_4,"License",0,0x20006,&local_8);
    if (LVar1 == 0) {
      LVar2 = RegDeleteValueA(local_8,"keyRegFile");
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
  }
  return LVar2;
}


