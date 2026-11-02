/* Module: encn3260.dll
   Function: FUN_664be100
   Address: 664be100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be100(void *this,void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_1c [3];
  int local_10 [3];
  
  puVar3 = (undefined4 *)((int)this + 0xc);
  if (0 < *(int *)(*(int *)((int)this + 0xc) + -8)) {
    puVar1 = FUN_664bb6c0(local_1c,this,&DAT_664ef7c0);
    piVar2 = FUN_664bb670(local_10,puVar1,puVar3);
    FUN_664bb570(param_1,piVar2);
    FUN_664bb3e0(local_10);
    FUN_664bb3e0(local_1c);
    return;
  }
  FUN_664bb570(param_1,this);
  return;
}


