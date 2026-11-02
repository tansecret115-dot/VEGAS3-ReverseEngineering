/* Module: vegas30k.dll
   Function: FUN_01024110
   Address: 01024110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01024110(LPSTR param_1,LONG param_2,HKEY param_3)

{
  LPSTR lpData;
  LSTATUS LVar1;
  CHAR local_28 [40];
  
  FUN_01024030(param_3,local_28,0x28,1);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,"CLSID",0,0x20019,&param_3);
  lpData = param_1;
  if (LVar1 == 0) {
    param_1 = (LPSTR)param_2;
    LVar1 = RegQueryValueA(param_3,local_28,lpData,(PLONG)&param_1);
    RegCloseKey(param_3);
    if (LVar1 == 0) {
      return;
    }
  }
  *lpData = '\0';
  return;
}


