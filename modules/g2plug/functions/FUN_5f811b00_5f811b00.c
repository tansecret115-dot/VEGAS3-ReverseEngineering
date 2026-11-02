/* Module: g2plug.dll
   Function: FUN_5f811b00
   Address: 5f811b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f811b00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar1 = (undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    FUN_5f811bb0((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_5f869b10);
  if (iVar2 < 0) {
    return 0x80004002;
  }
  piVar4 = *(int **)((int)this + 0x30);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)&stack0xfffffff8;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
  if (-1 < iVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5f869c80,(undefined4 *)((int)this + 0x30));
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    if (-1 < iVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x3c))(this);
      return uVar3;
    }
  }
  return 0x80004002;
}


