/* Module: rv303260.dll
   Function: FUN_67207930
   Address: 67207930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67207930(void *this,byte param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (((param_1 & 4) == 0) && ((param_1 & 8) != 0)) {
    uVar1 = ftol();
    puVar2 = (uint *)((int)this + 0x30a);
  }
  else {
    uVar1 = ftol();
    puVar2 = (uint *)((int)this + 0x166);
  }
  FUN_67207f40(puVar2,uVar1,uVar3);
  uVar3 = param_2;
  uVar1 = ftol();
  FUN_67207f40((uint *)((int)this + 0x4ae),uVar1,uVar3);
  FUN_67207f40((uint *)((int)this + 0x99a),*(uint *)((int)this + 0x15a),param_2);
  return;
}


