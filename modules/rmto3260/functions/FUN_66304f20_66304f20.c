/* Module: rmto3260.dll
   Function: FUN_66304f20
   Address: 66304f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66304f20(void *this,char *param_1)

{
  uint uVar1;
  undefined4 local_2c [10];
  
  FUN_66305300(local_2c);
  FUN_66305540(local_2c,0x80000000);
  FUN_66305560(local_2c,(char *)((int)this + 0xc));
  uVar1 = FUN_66305380((int)local_2c);
  if (uVar1 == 0) {
    FUN_66305430(local_2c,param_1);
    FUN_66305400((int)local_2c);
  }
  FUN_66305360(local_2c);
  return 0;
}


