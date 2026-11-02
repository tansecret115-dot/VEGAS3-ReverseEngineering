/* Module: rmbe3260.dll
   Function: FUN_66047b20
   Address: 66047b20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66047b20(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(ushort *)((int)this + 0x38) < 4) {
    return -0x7ffbfffc;
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  uVar1 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *(undefined1 *)((int)this + 0xb4) = 1;
  iVar2 = FUN_66047cf0(this,param_1,0);
  return iVar2;
}


