/* Module: erv23260.dll
   Function: FUN_63816260
   Address: 63816260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63816260(void *this,int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6,int *param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint local_1c;
  int local_14;
  code *local_8;
  
  local_8 = (code *)0x0;
  iVar4 = *(int *)((int)this + 0x1c) + (*param_1 >> 4) * 0x60;
  switch(*(undefined4 *)(param_6 + 0x18)) {
  case 0:
  case 1:
  case 2:
    local_8 = FUN_63816450;
    break;
  case 3:
  case 4:
    local_8 = FUN_638165e0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  local_14 = 0;
  iVar2 = *(int *)(*(int *)((int)this + 0x18) + 0x20);
  bVar3 = 0;
  local_1c = 0;
  piVar8 = (int *)(iVar4 + 0x30);
  piVar6 = param_7;
  do {
    piVar8[-0xc] = (iVar1 * *piVar6) / iVar2;
    piVar8[-0xb] = (iVar1 * *(int *)((int)piVar8 + (int)param_7 + (-0x2c - iVar4))) / iVar2;
    *piVar8 = (*piVar6 * (iVar1 - iVar2)) / iVar2;
    piVar8[1] = (*(int *)((int)piVar8 + (int)param_7 + (-0x2c - iVar4)) * (iVar1 - iVar2)) / iVar2;
    FUN_638166d0((int)param_1,bVar3,piVar8);
    iVar5 = (local_1c & 2) * 4 * param_5 + (local_1c & 1) * 8;
    iVar5 = (*local_8)(*(int *)((int)this + 0xe0) + ((local_1c & 1) + (local_1c & 2) * 8) * 8,
                       piVar8[-0xc] / 2 + iVar5 + (piVar8[-0xb] / 2 + param_1[1]) * param_5 +
                       param_3 + *param_1,
                       *piVar8 / 2 + iVar5 + (piVar8[1] / 2 + param_1[1]) * param_5 + param_4 +
                       *param_1,0x10,param_5,0x7fffffff);
    local_14 = local_14 + iVar5;
    bVar3 = bVar3 + 1;
    local_1c = local_1c + 1;
    piVar6 = piVar6 + 2;
    piVar8 = piVar8 + 2;
  } while ((char)bVar3 < '\x04');
  iVar4 = *(int *)(&DAT_6382e720 + *(int *)(param_6 + 0x18) * 4);
  if (*(byte *)((int)this + 0x1d4) < 7) {
    iVar4 = 0;
  }
  else if (*(byte *)((int)this + 0x1d4) < 0xb) {
    iVar4 = iVar4 / 2;
  }
  uVar7 = local_14 - iVar4;
  *param_8 = uVar7;
  *param_8 = uVar7 & ((int)uVar7 < 0) - 1;
  return;
}


