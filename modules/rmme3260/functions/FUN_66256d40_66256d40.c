/* Module: rmme3260.dll
   Function: FUN_66256d40
   Address: 66256d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66256d40(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  puVar1 = FUN_66256d00(this,param_1,&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_2 = puVar1[3];
  return 1;
}


