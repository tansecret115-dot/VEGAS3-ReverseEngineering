/* Module: rv303260.dll
   Function: FUN_67202e90
   Address: 67202e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67202e90(void *this,int param_1,uint param_2,int param_3)

{
  byte bVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0xea)) {
  case 0:
    if ((*(int *)(param_1 + 0x176) != 0) || ((*(byte *)(param_3 + 0xe) & 2) != 0)) {
      uVar8 = *(uint *)(param_1 + 0x253);
      bVar9 = false;
      local_8 = 1;
      if ((uVar8 != 0) && ((uVar8 < 4 && (*(int *)(param_1 + 0xee) != 5)))) {
        iVar5 = ftol();
        if (uVar8 == 1) {
          iVar5 = *(int *)(&DAT_672140a0 + iVar5 * 4);
        }
        else if (uVar8 == 2) {
          iVar5 = *(int *)(&DAT_672141a0 + iVar5 * 4);
        }
        else {
          iVar5 = *(int *)(&DAT_672142a0 + iVar5 * 4);
        }
        bVar9 = (uint)(*(int *)(param_1 + 0x112) + iVar5) <= *(uint *)((int)this + 0xac);
      }
      if (((((*(byte *)(param_3 + 0xe) & 2) != 0) || (*(int *)(param_1 + 0x1c2) != 0)) ||
          (((uint)(*(int *)(param_1 + 0x112) + *(int *)(param_1 + 0x17a)) <=
            *(uint *)((int)this + 0xac) && (*(int *)(param_1 + 0x17e) != 0)))) || (bVar9)) {
        if (*(int *)(param_1 + 0x132) != 1) {
          *(undefined4 *)(param_1 + 0x132) = 1;
          *(undefined4 *)(param_2 + 0x10) = 1;
          if (*(int *)(param_1 + 0x1c2) == 0) {
            bVar3 = ftol();
            if (bVar3 < 10) {
              bVar1 = *(byte *)(param_1 + 0x23e);
              bVar7 = bVar1;
              if (bVar3 <= bVar1) {
                bVar7 = bVar3;
              }
              bVar4 = *(byte *)(param_1 + 0x23b);
              if ((bVar4 <= bVar7) && (bVar4 = bVar3, bVar1 < bVar3)) {
                bVar4 = bVar1;
              }
              dVar2 = (double)bVar4;
            }
            else {
              param_2 = (uint)*(byte *)(param_1 + 0x23e);
              uVar6 = bVar3 - 2;
              uVar8 = param_2;
              if ((int)uVar6 <= (int)param_2) {
                uVar8 = uVar6;
              }
              if ((int)uVar8 < (int)(uint)*(byte *)(param_1 + 0x23b)) {
                dVar2 = (double)*(byte *)(param_1 + 0x23b);
              }
              else {
                if ((int)uVar6 <= (int)param_2) {
                  param_2 = uVar6;
                }
                dVar2 = (double)(int)param_2;
              }
            }
            *(double *)(param_1 + 0x1e2) = dVar2;
          }
        }
        if (*(int *)(param_3 + 0x10) != 0) {
          local_14 = 0x23;
          local_10 = 3;
          local_c = 0;
          FUN_672088e0((void *)(param_1 + 0x32),&local_14);
          return local_8;
        }
      }
    }
    break;
  case 2:
    if (*(uint *)(param_1 + 0x1c6) <= (uint)(*(int *)((int)this + 0xac) - *(int *)(param_1 + 0x11e))
       ) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x176) != 0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      return 1;
    }
    break;
  case 4:
    local_8 = 1;
  }
  return local_8;
}


