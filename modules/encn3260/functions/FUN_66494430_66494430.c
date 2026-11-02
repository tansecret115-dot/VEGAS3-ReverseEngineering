/* Module: encn3260.dll
   Function: FUN_66494430
   Address: 66494430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66494430(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  piVar1 = *(int **)(uVar2 + 0x16);
  if (piVar1 != (int *)0x0) {
    FUN_66494a80(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(uVar2 + 0x16) = 0;
  }
  *(undefined4 *)((int)this + 0x75) = 1;
  *(undefined4 *)((int)this + 0x79) = 1;
  return 0;
}


