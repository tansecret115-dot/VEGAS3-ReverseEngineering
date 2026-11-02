/* Module: erv23260.dll
   Function: FUN_63807580
   Address: 63807580
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63807580(void *this,undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x734) = 0;
  local_8 = *(int *)(*(int *)((int)this + 0x5cc) + 0xc);
  *(undefined4 *)(local_8 + 0x20) = 0;
  iVar1 = *(int *)((int)this + 0x5c0);
  if ((*(int *)(iVar1 + 0x8c4) != 0) && (*(int *)((int)this + 0x7c) != 0)) {
    uVar4 = *(uint *)(iVar1 + 0x8c8);
    puVar5 = *(undefined4 **)(iVar1 + 0x8c0);
    puVar6 = *(undefined4 **)(local_8 + 0x1c);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined4 *)(local_8 + 0x20) = 1;
  }
  local_c = FUN_63808a30(this,*(uint *)(*(int *)((int)this + 0x5c0) + 0x8a4));
  if (local_c != 7) {
    if (local_c == 3) {
      iVar1 = FUN_63809870(*(void **)((int)this + 0x5d4),local_8,3);
    }
    else {
      iVar1 = FUN_63809870(*(void **)((int)this + 0x5d0),local_8,local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_638083e0(this);
    }
    if (iVar1 == 0) {
      uVar2 = FUN_63809910(*(void **)((int)this + 0x5d0),&local_8,&local_c);
      if ((char)uVar2 != '\0') {
        iVar1 = FUN_638076e0(this,local_8,&local_c,param_1);
        *(undefined4 *)(local_8 + 0x20) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x8c4) = 0;
      }
      if (*(int *)((int)this + 0x734) != 0) {
        *param_2 = *(undefined4 *)(local_8 + 0x14);
        if (local_c == 0) {
          *param_3 = *param_3 | 1;
          return iVar1;
        }
        if (local_c == 3) {
          *param_3 = *param_3 | 2;
        }
      }
    }
    return iVar1;
  }
  return 0;
}


