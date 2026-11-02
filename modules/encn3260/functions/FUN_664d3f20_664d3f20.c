/* Module: encn3260.dll
   Function: FUN_664d3f20
   Address: 664d3f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d3f20(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    puVar2 = *(undefined4 **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)(*(int *)this + 0x1c))(*puVar2);
  return uVar1;
}


