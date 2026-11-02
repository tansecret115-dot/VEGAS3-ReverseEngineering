/* Module: sfcdi.dll
   Function: FUN_5bf196d0
   Address: 5bf196d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf196d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_5bf2bbb0((int)this + 0x2c,*(uint *)((int)this + 0x1dbc));
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x1dd0) = 0x8004e055;
    return 0x8004e055;
  }
  iVar2 = *(int *)((int)this + 0x1e70) + *(int *)(iVar1 + 0x14) + param_1;
  *(int *)((int)this + 0x1de8) = iVar2;
  *(int *)((int)this + 0x1dc8) = iVar2;
  iVar2 = *(int *)(iVar1 + 0x18);
  *(undefined4 *)((int)this + 0x1dd0) = 0;
  *(int *)((int)this + 0x1dcc) = iVar2 - param_1;
  uVar3 = *(int *)((int)this + 0x1e58) + *(int *)((int)this + 0x1e5c);
  *(uint *)((int)this + 0x1dec) = uVar3;
  *(int *)((int)this + 0x1de4) = *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0x18);
  if (*(uint *)((int)this + 0x1dcc) < uVar3) {
    *(uint *)((int)this + 0x1dec) = *(uint *)((int)this + 0x1dcc);
  }
  return 0;
}


