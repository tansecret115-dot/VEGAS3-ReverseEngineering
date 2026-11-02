/* Module: Setup.exe
   Function: FUN_00403360
   Address: 00403360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00403360(undefined2 param_1,uchar *param_2)

{
  uchar *puVar1;
  LPSTR lpsz;
  undefined4 uStack_4;
  
  uStack_4 = (uint)CONCAT12(0x2d,param_1);
  FUN_00402ec0((LPCSTR)param_2);
  puVar1 = _mbsstr(param_2,(uchar *)((int)&uStack_4 + 2));
  if (puVar1 != (uchar *)0x0) {
    puVar1 = (uchar *)CharNextA((LPCSTR)puVar1);
    for (puVar1 = _mbsstr(puVar1,(uchar *)((int)&uStack_4 + 2)); puVar1 != (uchar *)0x0;
        puVar1 = _mbsstr(puVar1,(uchar *)((int)&uStack_4 + 2))) {
      lpsz = CharNextA((LPCSTR)puVar1);
      if (*lpsz != '\0') {
        CharNextA(lpsz);
      }
      puVar1 = (uchar *)CharNextA((LPCSTR)puVar1);
    }
  }
  return;
}


