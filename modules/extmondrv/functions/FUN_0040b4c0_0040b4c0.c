/* Module: extmondrv.dll
   Function: FUN_0040b4c0
   Address: 0040b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040b4c0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_0040b520((int)this);
  }
  *(undefined4 **)((int)this + 8) = param_1;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_0044d500,(undefined4 *)((int)this + 0x30));
  if (iVar2 < 0) {
    return -0x7fffbffe;
  }
  piVar1 = *(int **)((int)this + 0x30);
  (**(code **)(*piVar1 + 8))(piVar1);
  return iVar2;
}


