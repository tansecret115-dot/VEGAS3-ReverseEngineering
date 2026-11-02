/* Module: sfpagepeel.dll
   Function: FUN_0043e360
   Address: 0043e360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0043e360(void *this,int param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  if (param_1 == 0) {
    return;
  }
  *(int *)((int)this + 4) = param_1;
  piVar3 = (int *)FUN_0042b450(param_1);
  piVar4 = (int *)FUN_0042ae40(*(int *)((int)this + 4));
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    if (piVar4[4] == 0) {
      if (((piVar4[8] == 0) && (uVar1 = *(ushort *)((int)piVar4 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar3 = (int *)(*piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar4);
        goto LAB_0043e3d7;
      }
    }
    else if (piVar4[4] == 3) {
      piVar3 = piVar4 + 0xd;
      goto LAB_0043e3d7;
    }
    piVar3 = (int *)(*piVar4 + piVar4[8] * 4 + (int)piVar4);
  }
LAB_0043e3d7:
  piVar8 = &param_1;
  *(int **)((int)this + 8) = piVar3;
  uVar5 = FUN_00433c90((int)piVar4);
  uVar2 = FUN_00433f20(uVar5,(undefined1 *)piVar8);
  *(uint *)((int)this + 0x24) = CONCAT31(extraout_var,uVar2) >> 3;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + (piVar4[2] + -1) * *(int *)((int)this + 0x10);
  iVar6 = -*(int *)((int)this + 0x10);
  *(int *)((int)this + 0x10) = iVar6;
  if (param_2 != 0) {
    *(int *)((int)this + 8) =
         *(int *)((int)this + 8) + *(int *)(param_2 + 0x10) * iVar6 + *(int *)(param_2 + 8) * 0x10;
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
  iVar6 = FUN_0042b460(*(int *)((int)this + 4));
  if (iVar6 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar4 + 0xe) * piVar4[1] + 0x1f;
    iVar6 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  *(int *)((int)this + 0x10) = iVar6;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}


