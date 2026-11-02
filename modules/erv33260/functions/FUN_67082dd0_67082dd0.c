/* Module: erv33260.dll
   Function: FUN_67082dd0
   Address: 67082dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67082dd0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_50 [18];
  void *local_8;
  
  uVar3 = (uint)*(byte *)(*(int *)((int)this + 0x8c) + 4 + (int)param_1 * 0xc);
  if (0x16 < uVar3) {
    uVar3 = 0x16;
  }
  *param_2 = (uint)(byte)(&DAT_67091278)[uVar3] * 0x46;
  *param_3 = 0xffffff;
  piVar1 = (int *)(*(int *)((int)this + 0x90) + (int)param_1 * 0x10);
  iVar5 = *(int *)((int)this + 0x84) + piVar1[2];
  iVar4 = *(int *)(*(int *)((int)this + 0x5c) + 4) + *piVar1;
  local_8 = this;
  FUN_67082d20(this,local_50,(int)param_1);
  uVar3 = 0;
  param_1 = (int *)((int)local_8 + 0x1cc);
  do {
    iVar2 = (**(code **)((int)local_8 + 0x234))(local_50,iVar4,iVar4,uVar3,iVar5,0);
    *param_2 = *param_2 + iVar2;
    iVar5 = iVar5 + param_1[-0x18];
    iVar4 = iVar4 + *param_1;
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 1;
  } while (uVar3 < 0x10);
  return;
}


