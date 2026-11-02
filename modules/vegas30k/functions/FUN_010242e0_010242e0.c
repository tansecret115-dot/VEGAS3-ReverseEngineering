/* Module: vegas30k.dll
   Function: FUN_010242e0
   Address: 010242e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010242e0(undefined4 param_1)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_138;
  HKEY local_134;
  LONG local_130;
  CHAR local_12c [40];
  CHAR local_104 [260];
  
  uVar2 = 0;
  FUN_01024030(param_1,local_12c,0x28,1);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,"CLSID",0,0x20019,&local_134);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_134,local_12c,0,0x20019,&local_138);
    if (LVar1 == 0) {
      local_130 = 0x104;
      LVar1 = RegQueryValueA(local_138,"InprocServer32",local_104,&local_130);
      if (LVar1 == 0) {
        uVar2 = _SfDosGetDateTime_4(local_104);
      }
      RegCloseKey(local_138);
    }
    RegCloseKey(local_134);
  }
  return uVar2;
}


