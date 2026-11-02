/* Module: rmme3260.dll
   Function: FUN_6621e950
   Address: 6621e950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6621e950(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  iVar2 = 0;
  if (param_1 == 0) {
    return -0x7fffbffd;
  }
  if (*(int *)((int)this + 0x110) == 0) {
    uStack_18 = 0x6621e97e;
    puVar1 = operator_new(0x62);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_66219cc0(puVar1);
    }
    *(undefined4 **)((int)this + 0x110) = puVar1;
  }
  if (*(int **)((int)this + 0x110) == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if (-1 < iVar2) {
    iVar2 = **(int **)((int)this + 0x110);
    FUN_66250280(auStack_1c,s_logical_fileinfo_6626f524);
    (**(code **)(iVar2 + 0x30))();
    iVar2 = (**(code **)(**(int **)((int)this + 0x110) + 0x34))(param_1,1);
  }
  return iVar2;
}


