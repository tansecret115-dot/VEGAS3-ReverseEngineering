/* Module: encn3260.dll
   Function: FUN_664a6e10
   Address: 664a6e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6e10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_664dd1a0,param_2);
  }
  return uVar2;
}


