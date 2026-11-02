/* Module: encn3260.dll
   Function: FUN_6649d740
   Address: 6649d740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6649d740(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  piVar1 = *(int **)((int)this + 0x11);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x11) = 0;
  }
  iVar2 = (**(code **)*param_1)(param_1,&DAT_664dc6c0,(undefined4 *)((int)this + 0x11));
  return (-1 < iVar2) - 1 & 0x80070057;
}


