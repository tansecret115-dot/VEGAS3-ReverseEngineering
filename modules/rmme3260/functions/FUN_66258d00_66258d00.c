/* Module: rmme3260.dll
   Function: FUN_66258d00
   Address: 66258d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66258d00(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar2 = 0;
  (**(code **)(**(int **)((int)this + 8) + 4))();
  iVar1 = FUN_66251030(*(void **)((int)this + 0xc),(uint)param_1,&local_8);
  if (iVar1 == 0) {
    uVar2 = 0x80004005;
  }
  else {
    if (*(int *)((int)this + 0x14) == 0) {
      FUN_66251160(*(void **)((int)this + 0xc),param_1);
    }
    FUN_6625c8a0((int)param_1);
    (**(code **)(*param_1 + 0x20))();
  }
  if (*(int *)(*(int *)((int)this + 0xc) + 0xc) == 0) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_18 = 0x46c;
    (**(code **)(**(int **)this + 0x24))(&local_18,0);
  }
  (**(code **)(**(int **)((int)this + 8) + 8))();
  return uVar2;
}


