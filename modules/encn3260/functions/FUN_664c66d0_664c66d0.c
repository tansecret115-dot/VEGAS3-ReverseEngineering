/* Module: encn3260.dll
   Function: FUN_664c66d0
   Address: 664c66d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c66d0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x1e) = 1;
  if ((param_1 != 0) && (*(int *)((int)this + 0x58) != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x40))();
    FUN_664c4df0(*(byte **)((int)this + 0x58),iVar1);
  }
  if (*(int *)((int)this + 0x6c) == 0) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 100) = 3;
    }
    else {
      *(undefined4 *)((int)this + 100) = 4;
      FUN_664c6590(this);
    }
  }
  else if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x1a) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x1a) = 1;
    uVar2 = (**(code **)(*(int *)this + 0x40))();
    *(undefined4 *)((int)this + 0x16) = uVar2;
  }
  if (*(undefined4 **)((int)this + 0x12) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x12))(3,param_1,0);
  }
  return;
}


