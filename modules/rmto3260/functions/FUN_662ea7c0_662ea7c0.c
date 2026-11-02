/* Module: rmto3260.dll
   Function: FUN_662ea7c0
   Address: 662ea7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662ea7c0(void *this,undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x20);
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x14);
  iVar3 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 4);
  uVar9 = 0;
  *param_2 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = *(undefined4 *)((int)this + 0xef);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)this + 0xf3);
  uVar6 = *(short *)((int)this + 0xf5) << 8;
  *(ushort *)(param_1 + 2) = uVar6;
  if (((*(short *)((int)this + 0xf5) == 0) && (1 < *(ushort *)((int)this + 0x115))) ||
     (*(short *)((int)this + 0x115) == 1)) {
    *(ushort *)(param_1 + 2) = uVar6 | 2;
  }
  piVar4 = *(int **)((int)this + 4);
  param_1 = (undefined4 *)(uint)*(ushort *)((int)this + 0xf7);
  if ((int)param_1 < 0) {
    piVar4[0x10] = 0x16;
  }
  else {
    iVar5 = piVar4[5];
    if ((uint)piVar4[6] < (uint)((int)param_1 + iVar5)) {
      uVar9 = (**(code **)(*piVar4 + 0x24))(&param_1);
    }
    else {
      *(int *)(piVar4[8] + 0x14) = *(int *)(piVar4[8] + 0x14) + 1;
      if (param_1 == (undefined4 *)0x0) {
        uVar9 = *(uint *)(piVar4[8] + 0xc);
      }
      else {
        uVar9 = piVar4[5];
        piVar4[5] = (int)param_1 + iVar5;
      }
    }
  }
  iVar5 = FUN_662e4d20(this,uVar9,(uint)*(ushort *)((int)this + 0xf7),(int)param_1);
  if (iVar5 != 0) {
    if (iVar5 == 0x40040) {
      *(undefined4 *)((int)this + 0x84) = 0;
      (**(code **)(**(int **)((int)this + 4) + 8))((iVar2 - iVar3) + iVar1,0);
    }
    return 0;
  }
  *param_2 = (uint)param_1;
  *(short *)((int)this + 0xf3) = *(short *)((int)this + 0xf3) + 1;
  uVar7 = (uint)*(ushort *)((int)this + 0x115);
  *(short *)((int)this + 0xf5) = (short)((*(ushort *)((int)this + 0xf5) + 1) % uVar7);
  if (*(char *)((int)this + 0x12d) == '\0') {
    *(int *)((int)this + 0xef) = *(int *)((int)this + 0xef) + *(int *)((int)this + 0xe7);
  }
  else {
    uVar8 = (*(ushort *)((int)this + 0x134) + 1) % uVar7;
    *(short *)((int)this + 0x134) = (short)uVar8;
    if ((int)((ulonglong)uVar8 % (ulonglong)(longlong)(int)uVar7) == 0) {
      *(int *)((int)this + 0xef) = *(int *)((int)this + 0xef) + *(int *)((int)this + 0xeb);
    }
  }
  FUN_662f04c0((void *)((int)this + 0x18e),uVar9,*(int *)((int)this + 4));
  return uVar9;
}


