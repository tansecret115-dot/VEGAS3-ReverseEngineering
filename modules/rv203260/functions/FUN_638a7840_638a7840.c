/* Module: rv203260.dll
   Function: FUN_638a7840
   Address: 638a7840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638a7840(void *this,byte param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (((param_1 & 4) == 0) && ((param_1 & 8) != 0)) {
    uVar1 = ftol();
    puVar2 = (uint *)((int)this + 0x36a);
  }
  else {
    uVar1 = ftol();
    puVar2 = (uint *)((int)this + 0x1c6);
  }
  FUN_638a7ea0(puVar2,uVar1,uVar3);
  uVar3 = param_2;
  uVar1 = ftol();
  FUN_638a7ea0((uint *)((int)this + 0x50e),uVar1,uVar3);
  FUN_638a7ea0((uint *)((int)this + 0x9fa),*(uint *)((int)this + 0x1ba),param_2);
  return;
}


