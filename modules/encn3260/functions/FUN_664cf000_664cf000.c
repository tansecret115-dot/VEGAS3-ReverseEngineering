/* Module: encn3260.dll
   Function: FUN_664cf000
   Address: 664cf000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cf000(void *this,byte *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_664cf030(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  *param_2 = *puVar1;
  return 0;
}


