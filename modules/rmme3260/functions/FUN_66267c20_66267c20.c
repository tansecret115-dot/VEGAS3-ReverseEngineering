/* Module: rmme3260.dll
   Function: FUN_66267c20
   Address: 66267c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66267c20(void *this,char *param_1)

{
  uint uVar1;
  undefined4 local_2c [10];
  
  FUN_66268170(local_2c);
  FUN_662683b0(local_2c,0x80000000);
  FUN_662683d0(local_2c,(char *)((int)this + 0xc));
  uVar1 = FUN_662681f0((int)local_2c);
  if (uVar1 == 0) {
    FUN_662682a0(local_2c,param_1);
    FUN_66268270((int)local_2c);
  }
  FUN_662681d0(local_2c);
  return 0;
}


