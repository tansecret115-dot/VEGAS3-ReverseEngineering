/* Module: encn3260.dll
   Function: FUN_664bbdc0
   Address: 664bbdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664bbdc0(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  puVar1 = FUN_664bbd80(this,param_1,&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = puVar1[3];
  return 1;
}


