/* Module: rmme3260.dll
   Function: FUN_66257cd0
   Address: 66257cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66257cd0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 0x38);
  if ((*(int *)((int)this + 0x34) != iVar1) && (*(int *)(iVar1 + 0x14) != 0)) {
    *(undefined4 *)((int)this + 0x40) = 0x16;
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      *(undefined4 *)((int)this + 0x40) = 0x16;
      return 0;
    }
    param_1 = param_1 + *(int *)(iVar1 + 4);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(int *)(iVar1 + 4) = param_1;
  *(int *)(*(int *)((int)this + 0x38) + 8) = param_1;
  *(int *)((int)this + 0xc) = param_1;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0xc))(param_1,0);
  if (iVar1 != -1) {
    return param_1;
  }
  uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
  *(undefined4 *)((int)this + 0x40) = uVar2;
  return 0;
}


