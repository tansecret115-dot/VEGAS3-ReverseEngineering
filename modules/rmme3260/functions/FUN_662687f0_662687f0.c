/* Module: rmme3260.dll
   Function: FUN_662687f0
   Address: 662687f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662687f0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x358) = 3;
  if ((param_2 == 0) ||
     (iVar1 = *(int *)((int)this + 0x30), *(int *)((int)this + (iVar1 + 7) * 0xc) == 0)) {
    iVar1 = *(int *)((int)this + 0x30);
    uVar2 = *(undefined4 *)((int)this + iVar1 * 0xc + 0x4c);
  }
  else {
    uVar2 = *(undefined4 *)((int)this + iVar1 * 0xc + 0x50);
  }
  *(undefined4 *)((int)this + 0x34) = uVar2;
  *(undefined4 *)((int)this + (iVar1 + 7) * 0xc) = 1;
  (**(code **)(**(int **)((int)this + 0x10) + 0x20))
            (*(int **)((int)this + 0x10),*(undefined4 *)((int)this + 0x34),0);
  return;
}


