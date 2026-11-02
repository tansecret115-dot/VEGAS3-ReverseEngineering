/* Module: rmto3260.dll
   Function: FUN_662d5ee0
   Address: 662d5ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d5ee0(void *this,undefined4 *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  char *pcVar10;
  uint local_8;
  
  bVar9 = false;
  local_8 = 0;
  iVar4 = FUN_662d5a90((char *)*param_1,&DAT_6630abe4);
  if (iVar4 != 0) {
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630ac78);
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar4 = FUN_662d5a90(pcVar5,s_START_6630ac34);
      if (iVar4 == 0) {
        uVar6 = FUN_662f2bf0(0xffffffff);
        **(undefined4 **)((int)this + 0x1c) = uVar6;
        *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
LAB_662d5f83:
        bVar9 = true;
      }
      else {
        pcVar5 = FUN_662d57f0((int)this);
        *param_1 = pcVar5;
        iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
        if (iVar4 != 0) {
          pcVar5 = FUN_662d57f0((int)this);
          *param_1 = pcVar5;
          iVar4 = FUN_662d5ac0(this,param_1);
          if (iVar4 != 0) goto LAB_662d5f83;
        }
      }
    }
  }
  if (!bVar9) {
    return 0;
  }
  bVar9 = false;
  iVar4 = FUN_662d5a90((char *)*param_1,&DAT_6630ac30);
  if (iVar4 == 0) {
    uVar6 = FUN_662f2bf0(0xffffffff);
    **(undefined4 **)((int)this + 0x1c) = uVar6;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
LAB_662d5fee:
    bVar9 = true;
  }
  else {
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar4 = FUN_662d5ac0(this,param_1);
      if (iVar4 != 0) goto LAB_662d5fee;
    }
  }
  if (!bVar9) {
    return 0;
  }
  bVar9 = false;
  iVar4 = FUN_662d5a90((char *)*param_1,s_SHAPE_6630ac70);
  if (iVar4 != 0) {
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      uVar2 = FUN_662d5e10(this,pcVar5);
      local_8 = (uint)uVar2;
      if (uVar2 != 0) {
        bVar9 = true;
      }
    }
  }
  if (!bVar9) {
    return 0;
  }
  bVar9 = false;
  pcVar5 = FUN_662d57f0((int)this);
  *param_1 = pcVar5;
  iVar4 = FUN_662d5a90(pcVar5,s_COORDS_6630ac28);
  if (iVar4 != 0) {
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar4 = FUN_662d5bb0(this,param_1,local_8,1);
      if (iVar4 != 0) {
        bVar9 = true;
      }
    }
  }
  if (!bVar9) {
    return 0;
  }
  bVar9 = false;
  iVar4 = FUN_662d5a90((char *)*param_1,&DAT_6630ac6c);
  if (iVar4 == 0) {
    iVar4 = FUN_662d5a90((char *)*param_1,&DAT_6630ac64);
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
      if (iVar4 != 0) {
        uVar3 = FUN_662f2bb0(3);
        **(undefined2 **)((int)this + 0x1c) = uVar3;
        *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
        pcVar5 = FUN_662d57f0((int)this);
        *param_1 = pcVar5;
        iVar4 = FUN_662d5ac0(this,param_1);
        if (iVar4 != 0) {
          uVar3 = FUN_662f2bb0(0);
          bVar9 = true;
          **(undefined2 **)((int)this + 0x1c) = uVar3;
          *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
        }
      }
      goto LAB_662d6244;
    }
    iVar4 = FUN_662d5a90((char *)*param_1,s_PLAYER_6630ac5c);
    if (iVar4 == 0) goto LAB_662d6244;
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
    if (iVar4 == 0) goto LAB_662d6244;
    uVar3 = FUN_662f2bb0(2);
    **(undefined2 **)((int)this + 0x1c) = uVar3;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
    uVar6 = FUN_662f2bf0(0);
    **(undefined4 **)((int)this + 0x1c) = uVar6;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
  }
  else {
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
    iVar4 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
    if (iVar4 == 0) goto LAB_662d6244;
    uVar3 = FUN_662f2bb0(1);
    **(undefined2 **)((int)this + 0x1c) = uVar3;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
    uVar6 = FUN_662f2bf0(0);
    **(undefined4 **)((int)this + 0x1c) = uVar6;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 4;
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
  }
  if (pcVar5 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar10 = pcVar5;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_662d5e90(this,(undefined4 *)pcVar5,~uVar8 - 1);
    bVar9 = true;
    pcVar5 = FUN_662d57f0((int)this);
    *param_1 = pcVar5;
  }
LAB_662d6244:
  iVar4 = 0;
  if (bVar9) {
    iVar4 = 0;
    iVar7 = FUN_662d5a90((char *)*param_1,&DAT_6630ac58);
    if (iVar7 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar7 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
      if (iVar7 != 0) {
        pcVar5 = FUN_662d57f0((int)this);
        *param_1 = pcVar5;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 0xffffffff;
          pcVar10 = pcVar5;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          FUN_662d5e90(this,(undefined4 *)pcVar5,~uVar8 - 1);
          iVar4 = 1;
        }
      }
    }
    if (iVar4 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      *param_1 = pcVar5;
      iVar7 = FUN_662d5a90(pcVar5,&DAT_6630ac24);
      if (iVar7 != 0) {
        iVar4 = 1;
      }
    }
  }
  return iVar4;
}


