/* Module: dsetup.dll
   Function: FUN_00401a26
   Address: 00401a26
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00401a26(uint *param_1)

{
  LSTATUS LVar1;
  bool bVar2;
  byte local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"software\\microsoft\\directx",0,1,&local_8);
  if (LVar1 == 0) {
    local_c = 0x104;
    LVar1 = RegQueryValueExA(local_8,"Version",(LPDWORD)0x0,(LPDWORD)0x0,local_110,&local_c);
    bVar2 = LVar1 == 0;
    if (bVar2) {
      FUN_0040198b(local_110,param_1);
    }
    RegCloseKey(local_8);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


