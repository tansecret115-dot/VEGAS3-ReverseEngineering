/* Module: g2plug.dll
   Function: FUN_5f834330
   Address: 5f834330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_5f834330(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000458;
  undefined4 uVar6;
  undefined4 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)(param_2 + 0x2c);
  piVar1 = (int *)(param_2 + 0x28);
  *local_4 = 100;
  piVar2 = (int *)(param_2 + 0x24);
  *piVar1 = 1;
  *(undefined4 *)(param_2 + 0x20) = 1;
  *piVar2 = 0xca;
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xfffffed9;
  iVar3 = (**(code **)*param_1)();
  if (-1 < iVar3) {
    uVar6 = *(undefined4 *)(unaff_EBP + 0x468);
    iVar5 = unaff_EBP + 0x260;
    iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,iVar5,uVar6,0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1,2,piVar1,unaff_EDI);
      if ((-1 < iVar3) && (*piVar1 == 0)) {
        uVar6 = 0x8004e048;
      }
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,2,param_2 + 0x30,(undefined4 *)(param_2 + 0x20));
      (**(code **)(*piVar2 + 0x18))(piVar2,2,param_2 + 0x34,param_2 + 0x38);
    }
    (**(code **)(*param_1 + 8))(param_1,unaff_ESI,iVar5,uVar6);
    return &DAT_5f869af0;
  }
  iVar3 = (**(code **)*puStack_8)(puStack_8,&DAT_5f869ae0,&local_4);
  if (-1 < iVar3) {
    puVar4 = (undefined *)(**(code **)(iRam00000000 + 0xc))(0,&stack0x00000250,in_stack_00000458);
    if (-1 < (int)puVar4) {
      puVar4 = (undefined *)(**(code **)(*unaff_ESI + 0x10))(unaff_ESI,0);
      if (puVar4 == (undefined *)0x1) {
        puVar4 = (undefined *)0x8004e048;
        *piVar1 = 0;
        _DAT_5f869af0 = 0xffffff9e;
      }
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    return puVar4;
  }
  return (undefined *)0x0;
}


