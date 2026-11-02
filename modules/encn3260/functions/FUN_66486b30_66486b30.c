/* Module: encn3260.dll
   Function: FUN_66486b30
   Address: 66486b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486b30(void *this,int param_1)

{
  int *piVar1;
  
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  piVar1 = FUN_6648c780(*(undefined4 *)(param_1 + 0xc),&DAT_664e2534);
  FUN_6648c8f0(this,piVar1,(char *)0x0,(char *)0x0);
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return 0;
}


