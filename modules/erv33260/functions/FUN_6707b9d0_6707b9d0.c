/* Module: erv33260.dll
   Function: FUN_6707b9d0
   Address: 6707b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6707b9d0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_67072130(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_6707b490(puVar1);
  }
  if (piVar2 == (int *)0x0) {
    return 2;
  }
  *piVar2 = param_1;
  piVar2[3] = param_2;
  if (*(int *)((int)this + 0xc) == 0) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar2;
    *(int **)(*(int *)((int)this + 8) + 8) = piVar2;
    piVar2[1] = *(int *)((int)this + 8);
    piVar2[2] = *(int *)((int)this + 4);
  }
  else {
    piVar2[1] = *(int *)((int)this + 8);
    piVar2[2] = *(int *)(*(int *)((int)this + 8) + 8);
    *(int **)(*(int *)(*(int *)((int)this + 8) + 8) + 4) = piVar2;
    *(int **)(*(int *)((int)this + 8) + 8) = piVar2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  FUN_6707b740(*(void **)this,param_1,(byte)*(undefined4 *)((int)this + 0x10));
  return 0;
}


