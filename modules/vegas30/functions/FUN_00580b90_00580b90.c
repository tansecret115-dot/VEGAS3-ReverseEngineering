/* Module: vegas30.exe
   Function: FUN_00580b90
   Address: 00580b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00580b90(undefined4 *param_1,wchar_t *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  puVar1 = (undefined4 *)FUN_005808c0();
  *param_1 = *puVar1;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    if (sVar2 != 0) {
      FUN_00580920(sVar2 * 2);
      FUN_005811f0(*param_1,param_2,sVar2 * 2 + 1);
      FUN_00581000(0xffffffff);
      return param_1;
    }
  }
  return param_1;
}


