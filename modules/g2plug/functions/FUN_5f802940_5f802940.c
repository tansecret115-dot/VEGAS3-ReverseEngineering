/* Module: g2plug.dll
   Function: FUN_5f802940
   Address: 5f802940
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f802940(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puStack_818;
  undefined4 *puStack_814;
  int *piStack_810;
  int local_804 [513];
  
  puStack_818 = *(undefined4 **)(param_1 + 8);
  if (((puStack_818 != (undefined4 *)0x0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7fffbffb;
  }
  if (puStack_818 == (undefined4 *)0x0) {
    puStack_814 = puStack_818;
    piStack_810 = puStack_818;
    FUN_5f81e2a0((int *)(param_1 + 8),4,-1,-1,0x80000002);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    piStack_810 = (int *)0x0;
    puStack_814 = (undefined4 *)0x0;
    puStack_818 = (undefined4 *)0x0;
    FUN_5f81e2a0((int *)(param_1 + 0xc),4,-1,-1,0x80000002);
  }
  piVar1 = (int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 0) {
    piStack_810 = (int *)0x0;
    puStack_814 = (undefined4 *)0x0;
    puStack_818 = (undefined4 *)0x0;
    FUN_5f81e2a0(piVar1,4,-1,-1,0x80000000);
  }
  puStack_818 = *(undefined4 **)(param_1 + 0x24);
  piStack_810 = local_804;
  puStack_814 = (undefined4 *)&DAT_5f86a750;
  iVar2 = (**(code **)*puStack_818)();
  if (iVar2 < 0) {
    return -0x7fffbffb;
  }
  piVar4 = (int *)0x800;
  iVar2 = (**(code **)(*piStack_810 + 0x50))();
  if (-1 < iVar2) {
    FUN_5f802ae0((int *)*piVar1,(char *)&puStack_818,0x54524149);
  }
  piVar3 = (int *)0x800;
  iVar2 = (**(code **)(*piVar4 + 0x58))();
  if (-1 < iVar2) {
    FUN_5f802ae0((int *)*piVar1,&stack0xfffff7dc,0x544d4349);
  }
  piVar4 = (int *)0x800;
  iVar2 = (**(code **)(*piVar3 + 0x54))();
  if (-1 < iVar2) {
    FUN_5f802ae0((int *)*piVar1,&stack0xfffff7d0,0x504f4349);
  }
  piVar3 = (int *)0x800;
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&stack0xfffff7d0);
  if (-1 < iVar2) {
    iVar2 = FUN_5f802ae0((int *)*piVar1,&stack0xfffff7c4,0x4d414e49);
  }
  (**(code **)(*piVar3 + 8))(piVar3);
  return iVar2;
}


