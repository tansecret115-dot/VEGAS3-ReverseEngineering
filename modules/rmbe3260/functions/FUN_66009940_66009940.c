/* Module: rmbe3260.dll
   Function: FUN_66009940
   Address: 66009940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66009940(void *this,ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)((int)this + 0x2ce) + 0x134))();
  *(undefined4 *)((int)this + 0xd4) = uVar1;
  (**(code **)(*(int *)((int)this + 0xd8) + 0xbc))();
  (**(code **)(*(int *)((int)this + 0x1d3) + 0xbc))();
  (**(code **)(*(int *)((int)this + 0x2ce) + 0xbc))();
  CPNDialog::EndDialog(this,param_1);
  return;
}


