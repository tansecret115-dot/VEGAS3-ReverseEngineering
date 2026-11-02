/* Module: erv23260.dll
   Function: FUN_63817400
   Address: 63817400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63817400(void *this,uint *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int local_8;
  
  FUN_638109c0(param_1,*(int *)((int)this + 0x11c),param_4);
  FUN_638109c0(param_2,*(int *)((int)this + 0x118),param_4);
  puVar3 = *(uint **)((int)this + 0x11c);
  puVar1 = *(uint **)((int)this + 0x114);
  uVar6 = 0;
  iVar4 = *(int *)((int)this + 0x118) - (int)puVar3;
  bVar2 = false;
  local_8 = 0;
  param_1 = (uint *)0x40;
  iVar7 = 0;
  puVar10 = puVar1;
  do {
    iVar5 = *(int *)(iVar4 + (int)puVar3);
    if (iVar5 == 0) {
      uVar6 = uVar6 + 1;
      iVar9 = iVar7;
    }
    else {
      uVar8 = *puVar3;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        uVar8 = -uVar8;
      }
      iVar9 = iVar7 + 1;
      *puVar10 = uVar8 & 0xffff | (iVar5 + 0x7fU & 0xff) << 0x10 | (uVar6 & 0x3f) << 0x19 |
                 0x1000000;
      puVar10 = puVar10 + 1;
      bVar2 = true;
      uVar6 = 0;
      local_8 = iVar7;
    }
    puVar3 = puVar3 + 1;
    param_1 = (uint *)((int)param_1 + -1);
    iVar7 = iVar9;
  } while (param_1 != (uint *)0x0);
  if (bVar2) {
    puVar1 = puVar1 + local_8;
    *puVar1 = *puVar1 | 0x80000000;
  }
  param_1 = *(uint **)((int)this + 0x114);
  param_4 = 0;
  if (bVar2) {
    do {
      uVar6 = *param_1;
      iVar7 = (uVar6 >> 0x18) * 2;
      uVar8 = (uVar6 >> 0x10 & 0x7f) + 1;
      if (((byte)(&DAT_63830510)[iVar7] == 0xff) || ((byte)(&DAT_63830515)[iVar7] < uVar8)) {
        if (*(int *)((int)this + 400) != 0) {
          iVar7 = (uVar6 & 0x7fff) - ((param_3 & 0xff) >> 1);
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)((int)this + 0x140) +
                            (*(int *)((int)this + (param_3 & 0xff) * 4 + 0x44) * iVar7 >> 0x11) * 4)
            ;
          }
          if ((*(int *)((int)this + 400) != 0) && (0x7f < iVar7)) {
            param_4 = param_4 + 0x21;
            goto LAB_6381759b;
          }
        }
        param_4 = param_4 + 0x16;
      }
      else {
        param_4 = param_4 + (*(uint *)(&DAT_638302cc + ((byte)(&DAT_63830510)[iVar7] + uVar8) * 4) &
                            0xf);
      }
LAB_6381759b:
      param_1 = param_1 + 1;
    } while (uVar6 < 0x80000001);
  }
  return param_4;
}


