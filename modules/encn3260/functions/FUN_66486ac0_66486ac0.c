/* Module: encn3260.dll
   Function: FUN_66486ac0
   Address: 66486ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486ac0(void *this,int param_1)

{
  int *this_00;
  char *pcVar1;
  int iVar2;
  
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  this_00 = FUN_6648c780(*(undefined4 *)(param_1 + 0xc),&DAT_664e2530);
  iVar2 = 0;
  pcVar1 = FUN_66488280();
  FUN_664bd620(this_00,s_Allow_664e2528,pcVar1,iVar2);
  FUN_6648c8f0(this,this_00,(char *)0x0,(char *)0x0);
  if (this_00 != (int *)0x0) {
    (**(code **)*this_00)(1);
  }
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return 0;
}


