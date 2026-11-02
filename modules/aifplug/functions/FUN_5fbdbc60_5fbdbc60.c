/* Module: aifplug.dll
   Function: FUN_5fbdbc60
   Address: 5fbdbc60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbdbc60(HANDLE param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  
  puVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (undefined1 *)0x8) {
    return 0x8004e008;
  }
  FUN_5fbdbc20(puVar1,2);
  return 0;
}


