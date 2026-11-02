/* Module: rmme3260.dll
   Function: FUN_66268600
   Address: 66268600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66268600(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x40;
  *(undefined ***)this = &PTR_LAB_6626d5c0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d5b0;
  puVar2 = (undefined4 *)((int)this + 0x4c);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_6626d588;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d578;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(int **)((int)this + 0x10) = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


