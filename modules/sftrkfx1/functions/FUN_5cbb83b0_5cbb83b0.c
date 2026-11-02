/* Module: sftrkfx1.dll
   Function: FUN_5cbb83b0
   Address: 5cbb83b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cbb83b0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  
  bVar11 = param_2 == 0;
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  puVar9 = (undefined4 *)((int)this + 0xdc);
  uVar6 = 0;
  do {
    puVar9[-1] = uVar6;
    *puVar9 = 0;
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 2;
  } while (uVar6 < 2);
  iVar7 = *(int *)((int)this + 0x6c);
  switch(*param_1) {
  case 0:
    *(undefined4 *)((int)this + 0x6c) = 8;
    break;
  case 1:
    *(undefined4 *)((int)this + 0x6c) = 0xc;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x6c) = 0x10;
    break;
  case 3:
    *(undefined4 *)((int)this + 0x6c) = 0x12;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x6c) = 0x14;
    break;
  case 5:
    *(undefined4 *)((int)this + 0x6c) = 0x18;
    break;
  default:
    *(undefined4 *)((int)this + 0x6c) = 0x20;
  }
  iVar1 = *(int *)((int)this + 0x70);
  iVar2 = param_1[1];
  *(int *)((int)this + 0x70) = iVar2;
  iVar3 = *(int *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x74) = param_1[2];
  if (*(uint *)(*(int *)((int)this + 0x44) + 4) < 0x7d01) {
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  iVar4 = *(int *)((int)this + 0x74);
  iVar10 = 1 << ((char)*(int *)((int)this + 0x6c) - 1U & 0x1f);
  dVar5 = (double)iVar10;
  *(double *)((int)this + 0x90) = (double)iVar10;
  *(double *)((int)this + 0x98) = _DAT_5cc040b8 / dVar5;
  if (((iVar3 != iVar4 || bVar11) || (iVar1 != iVar2 || bVar11)) ||
     (iVar7 != *(int *)((int)this + 0x6c) || bVar11)) {
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x80) = 0x100000;
      *(undefined4 *)((int)this + 0x84) = 0x3de00000;
      *(double *)((int)this + 0x88) = ((double)*(int *)((int)this + 0x70) * _DAT_5cc04b60) / dVar5;
      if (uVar8 != 0) {
        iVar7 = 0;
        do {
          iVar1 = *(int *)((int)this + 0xa8);
          *(undefined4 *)(iVar7 + 8 + iVar1) = 0;
          *(undefined4 *)(iVar7 + 0xc + iVar1) = 0;
          puVar9 = (undefined4 *)(iVar7 + *(int *)((int)this + 0xa8));
          uVar8 = uVar8 - 1;
          *puVar9 = 0;
          puVar9[1] = 0;
          iVar7 = iVar7 + 0x10;
        } while (uVar8 != 0);
        *(undefined4 *)((int)this + 0x48) = 1;
        return 0;
      }
    }
    else if ((0 < iVar4) && (iVar4 < 3)) {
      *(undefined4 *)((int)this + 0x80) = 0x33466666;
      *(undefined4 *)((int)this + 0x84) = 0x3dd33333;
      *(undefined4 *)((int)this + 0x48) = 1;
      *(double *)((int)this + 0x88) = (double)*(int *)((int)this + 0x70) * _DAT_5cc04b68;
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0x48) = 1;
  return 0;
}


