/* Module: aifplug.dll
   Function: FUN_5fbdbcb0
   Address: 5fbdbcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbdbcb0(HANDLE param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  
  puVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (undefined1 *)0x4) {
    return 0x8004e008;
  }
  FUN_5fbdbc20(puVar1,1);
  return 0;
}


