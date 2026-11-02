/* Module: rmbe3260.dll
   Function: FUN_66005c80
   Address: 66005c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66005c80(void *this,int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0x402) && (*(int *)(param_1 + 0xc) == 2)) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x11c) + 0x134))();
    FUN_66005d50(this,uVar1);
  }
  return;
}


