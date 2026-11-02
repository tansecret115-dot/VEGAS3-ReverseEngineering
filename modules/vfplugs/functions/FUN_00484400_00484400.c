/* Module: vfplugs.dll
   Function: FUN_00484400
   Address: 00484400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00484400(void *this,int param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  HGLOBAL hMem;
  LPVOID pvVar8;
  int *piVar9;
  
  if (param_1 == 0) {
    return;
  }
  *(int *)((int)this + 4) = param_1;
  piVar3 = (int *)FUN_00482b20(param_1);
  piVar4 = (int *)FUN_00482510(*(int *)((int)this + 4));
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    if (piVar4[4] == 0) {
      if (((piVar4[8] == 0) && (uVar1 = *(ushort *)((int)piVar4 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar3 = (int *)(*piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar4);
        goto LAB_00484477;
      }
    }
    else if (piVar4[4] == 3) {
      piVar3 = piVar4 + 0xd;
      goto LAB_00484477;
    }
    piVar3 = (int *)(*piVar4 + piVar4[8] * 4 + (int)piVar4);
  }
LAB_00484477:
  piVar9 = &param_1;
  *(int **)((int)this + 8) = piVar3;
  uVar5 = FUN_0043bf80((int)piVar4);
  uVar2 = FUN_0043c210(uVar5,(undefined1 *)piVar9);
  *(uint *)((int)this + 0x28) = CONCAT31(extraout_var,uVar2) >> 3;
  iVar6 = FUN_00482b30(*(int *)((int)this + 4));
  if (iVar6 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar4 + 0xe) * piVar4[1] + 0x1f;
    iVar6 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  *(int *)((int)this + 0x10) = iVar6;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + (piVar4[2] + -1) * iVar6;
  *(int *)((int)this + 0x10) = -iVar6;
  if (param_2 != 0) {
    *(int *)((int)this + 8) =
         *(int *)((int)this + 8) + *(int *)(param_2 + 0x10) * -iVar6 + *(int *)(param_2 + 8) * 4;
  }
  hMem = GlobalAlloc(0,piVar4[1] << 2);
  pvVar8 = GlobalLock(hMem);
  *(LPVOID *)((int)this + 0x1c) = pvVar8;
  if (pvVar8 == (LPVOID)0x0) {
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  else {
    iVar6 = piVar4[1];
    uVar7 = 0;
    *(int *)((int)this + 0x20) = iVar6;
    if (iVar6 != 0) {
      do {
        uVar7 = uVar7 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x1c) + -4 + uVar7 * 4) = 6;
      } while (uVar7 < *(uint *)((int)this + 0x20));
    }
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}


