/* Module: mp3plug.dll
   Function: FUN_5f7210c0
   Address: 5f7210c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS __fastcall FUN_5f7210c0(int param_1)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  HKEY local_8;
  HKEY local_4;
  
  LVar2 = -0x7fffbffb;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20006,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_4,"License",0,0x20006,&local_8);
    if (LVar1 == 0) {
      LVar2 = RegDeleteValueA(local_8,"CurrentKey");
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
  }
  return LVar2;
}


