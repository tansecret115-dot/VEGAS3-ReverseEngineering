/* Module: erv23260.dll
   Function: FUN_637f8180
   Address: 637f8180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f8180(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int **)((int)this + 0x10) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))
                        (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8)), iVar1 != 0)) {
    return;
  }
  puVar2 = (undefined4 *)((int)this + 0x150);
  iVar1 = 2;
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_637f1080((void *)*puVar2);
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 0x51;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)((int)this + 0x4c);
  for (iVar1 = 0xa2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_637f7ec0(this,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8));
  return;
}


