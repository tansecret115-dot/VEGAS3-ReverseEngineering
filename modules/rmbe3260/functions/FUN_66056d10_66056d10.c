/* Module: rmbe3260.dll
   Function: FUN_66056d10
   Address: 66056d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66056d10(void *this,char *param_1)

{
  uint uVar1;
  undefined4 local_2c [10];
  
  FUN_66058440(local_2c);
  FUN_66058680(local_2c,0x80000000);
  FUN_660586a0(local_2c,(char *)((int)this + 0xc));
  uVar1 = FUN_660584c0((int)local_2c);
  if (uVar1 == 0) {
    FUN_66058570(local_2c,param_1);
    FUN_66058540((int)local_2c);
  }
  FUN_660584a0(local_2c);
  return 0;
}


