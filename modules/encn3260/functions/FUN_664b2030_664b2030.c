/* Module: encn3260.dll
   Function: FUN_664b2030
   Address: 664b2030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b2030(void *this,int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)((int)this + 0x49a) != 0) || (*(int *)((int)this + 0x49e) != 0)) &&
     (*(int *)((int)this + 0x4a2) == 2)) {
    iVar1 = FUN_664aaa70(*(int *)((int)this + 0x3a));
    uVar2 = 0x80004005;
    iVar1 = FUN_664b64b0((uint *)(iVar1 + 0x48),(uint *)((int)this + 0x56),param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x80004005;
}


