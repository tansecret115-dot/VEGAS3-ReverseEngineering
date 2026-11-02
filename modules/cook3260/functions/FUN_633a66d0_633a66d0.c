/* Module: cook3260.dll
   Function: FUN_633a66d0
   Address: 633a66d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a66d0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int local_a8 [20];
  uint local_58 [20];
  int local_8;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      iVar2 = *param_1;
      local_8 = iVar2;
      if ((iVar2 < 7) && (iVar1 = FUN_633a64f0(this,iVar2,(uint)local_a8,local_58), iVar1 != 0)) {
        local_8 = 7;
        iVar2 = iVar5;
        piVar3 = param_1;
        if (iVar5 < *(int *)((int)this + 0x20)) {
          do {
            *piVar3 = 7;
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < *(int *)((int)this + 0x20));
        }
        iVar2 = 7;
      }
      if (iVar2 == 7) {
        piVar3 = local_a8;
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar3 = 0;
          piVar3 = piVar3 + 1;
        }
        puVar6 = local_58;
        for (iVar1 = 0x14; iVar2 = local_8, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      FUN_633a6620(this,iVar2,iVar5,param_2,local_a8,(int)local_58,param_3);
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < *(int *)((int)this + 0x20));
  }
  iVar5 = *(int *)((int)this + 0x20) * 0x14;
  if (iVar5 < *(int *)((int)this + 4)) {
    puVar4 = (undefined4 *)(param_3 + *(int *)((int)this + 0x20) * 0x50);
    do {
      *puVar4 = 0;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return;
}


