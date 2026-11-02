/* Module: aifplug.dll
   Function: FUN_5fbd6fd0
   Address: 5fbd6fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_5fbd6fd0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar1 = (undefined4 *)((int)this + 0x28);
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_5fbd7080((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_5fbfea00);
  if (iVar2 < 0) {
    return 0x80004002;
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5fbfeb70,(int)this + 0x2c);
    (*pcRam00000008)(&stack0xfffffff8);
    if (-1 < iVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x3c))(this);
      return uVar3;
    }
  }
  (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  *puVar1 = 0;
  return 0x80004002;
}


