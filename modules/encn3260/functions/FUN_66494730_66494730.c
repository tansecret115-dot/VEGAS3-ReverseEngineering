/* Module: encn3260.dll
   Function: FUN_66494730
   Address: 66494730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66494730(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)FUN_664946e0(this,param_1,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_66494890(this,(uint)*(ushort *)((int)this + 0x14),param_1);
    puVar3 = (undefined4 *)FUN_664c04a0(*(void **)this,uVar2);
    *puVar3 = 0;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}


