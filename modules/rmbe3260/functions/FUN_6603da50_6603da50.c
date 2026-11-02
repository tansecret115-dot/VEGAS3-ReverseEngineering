/* Module: rmbe3260.dll
   Function: FUN_6603da50
   Address: 6603da50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6603da50(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)this + 4) + 0x18))(param_1,0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)((int)this + 4) + 0xc))(iVar1);
  }
  return;
}


