/* Module: rmbe3260.dll
   Function: FUN_6600a990
   Address: 6600a990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6600a990(void *this,ulong param_1)

{
  if (*(int **)((int)this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xd0) + 0xbc))();
    if (*(undefined4 **)((int)this + 0xd0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0xd0))(1);
      *(undefined4 *)((int)this + 0xd0) = 0;
    }
  }
  if (*(int **)((int)this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xd4) + 0xbc))();
    if (*(undefined4 **)((int)this + 0xd4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0xd4))(1);
      *(undefined4 *)((int)this + 0xd4) = 0;
    }
  }
  CPNDialog::EndDialog(this,param_1);
  return;
}


