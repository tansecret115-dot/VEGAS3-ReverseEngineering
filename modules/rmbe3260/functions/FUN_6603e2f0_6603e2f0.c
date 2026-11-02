/* Module: rmbe3260.dll
   Function: FUN_6603e2f0
   Address: 6603e2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e2f0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_6603d880(puVar1);
  }
  puVar1[10] = param_2;
  FUN_6605cf30((void *)((int)this + 100),param_1,puVar1);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x68);
  return 0;
}


