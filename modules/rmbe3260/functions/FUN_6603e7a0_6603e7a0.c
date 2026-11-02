/* Module: rmbe3260.dll
   Function: FUN_6603e7a0
   Address: 6603e7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6603e7a0(void *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint local_c;
  
  uVar7 = 0;
  uVar6 = 0xffffffff;
  local_c = 0xffffffff;
  bVar2 = false;
  if (*(uint *)((int)this + 0x74) != 0) {
    piVar8 = *(int **)((int)this + 100);
    do {
      iVar5 = *piVar8;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x10);
      }
      if (iVar3 != 0) {
        uVar4 = *(uint *)(*(int *)(*(int *)(iVar5 + 8) + 8) + 0x14);
        uVar1 = *(uint *)(*(int *)(*(int *)(iVar5 + 4) + 8) + 0x14);
        if (uVar4 < uVar1) {
          uVar4 = (uVar4 - uVar1) - 1;
        }
        else {
          uVar4 = uVar4 - uVar1;
        }
        if (param_1 <= uVar4) {
          bVar2 = true;
        }
        if (uVar1 < uVar6) {
          uVar6 = uVar1;
          local_c = uVar7;
        }
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x74));
  }
  iVar5 = 0;
  if (bVar2) {
    iVar5 = FUN_6605c4d0(*(int **)(*(int *)((int)this + 100) + local_c * 4));
  }
  return iVar5;
}


