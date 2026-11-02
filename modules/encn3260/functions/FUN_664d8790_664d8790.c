/* Module: encn3260.dll
   Function: FUN_664d8790
   Address: 664d8790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8790(void *this,char *param_1)

{
  uint uVar1;
  undefined4 local_2c [10];
  
  FUN_664d8cd0(local_2c);
  FUN_664d8f10(local_2c,0x80000000);
  FUN_664d8f30(local_2c,(char *)((int)this + 0xc));
  uVar1 = FUN_664d8d50((int)local_2c);
  if (uVar1 == 0) {
    FUN_664d8e00(local_2c,param_1);
    FUN_664d8dd0((int)local_2c);
  }
  FUN_664d8d30(local_2c);
  return 0;
}


