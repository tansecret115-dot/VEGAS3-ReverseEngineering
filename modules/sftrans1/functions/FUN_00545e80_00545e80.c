/* Module: sftrans1.dll
   Function: FUN_00545e80
   Address: 00545e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00545e80(undefined4 *param_1,wchar_t *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  puVar1 = (undefined4 *)FUN_00545bb0();
  *param_1 = *puVar1;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    if (sVar2 != 0) {
      FUN_00545c10(sVar2 * 2);
      FUN_005464e0(*param_1,param_2,sVar2 * 2 + 1);
      FUN_005462f0(0xffffffff);
      return param_1;
    }
  }
  return param_1;
}


