/* Module: rv203260.dll
   Function: FUN_638a8d40
   Address: 638a8d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638a8d40(void *this,undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x19e) == 0) {
    iVar1 = FUN_638a9b00(this);
  }
  if (iVar1 == 0) {
    FUN_638a1d60((uint)this,param_1,param_2);
  }
  return;
}


