/* Module: encn3260.dll
   Function: FUN_664c12c0
   Address: 664c12c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c12c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0xc) != 0) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0xc) + 8);
    *(undefined4 **)((int)this + 0xc) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = *puVar1;
      piVar2 = *(int **)(*(int *)((int)this + 0xc) + 4);
      *param_2 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  return 0x80004005;
}


