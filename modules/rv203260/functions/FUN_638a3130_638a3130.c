/* Module: rv203260.dll
   Function: FUN_638a3130
   Address: 638a3130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a3130(void *this,int param_1,int param_2,int param_3)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0xea)) {
  case 0:
    if ((*(int *)(param_1 + 0x17e) != 0) || ((*(byte *)(param_3 + 0xe) & 2) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x25b);
      bVar7 = false;
      local_8 = 1;
      if ((uVar4 != 0) && ((uVar4 < 4 && (*(int *)(param_1 + 0xee) != 5)))) {
        iVar3 = ftol();
        if (uVar4 == 1) {
          iVar3 = *(int *)(&DAT_638b40a0 + iVar3 * 4);
        }
        else if (uVar4 == 2) {
          iVar3 = *(int *)(&DAT_638b41a0 + iVar3 * 4);
        }
        else {
          iVar3 = *(int *)(&DAT_638b42a0 + iVar3 * 4);
        }
        bVar7 = (uint)(*(int *)(param_1 + 0x112) + iVar3) <= *(uint *)((int)this + 0xac);
      }
      if (((((*(byte *)(param_3 + 0xe) & 2) != 0) || (*(int *)(param_1 + 0x1ca) != 0)) ||
          (((uint)(*(int *)(param_1 + 0x112) + *(int *)(param_1 + 0x182)) <=
            *(uint *)((int)this + 0xac) && (*(int *)(param_1 + 0x186) != 0)))) || (bVar7)) {
        if (*(int *)(param_1 + 0x136) != 1) {
          *(undefined4 *)(param_1 + 0x136) = 1;
          *(undefined4 *)(param_2 + 0x10) = 1;
          if (*(int *)(param_1 + 0x1ca) == 0) {
            uVar4 = ftol();
            bVar2 = (byte)uVar4;
            if (bVar2 < 10) {
              if (bVar2 < 0x20) {
                uVar6 = uVar4 & 0xff;
              }
              else {
                uVar6 = 0x1f;
              }
              if (uVar6 < 2) {
                param_2 = 2;
              }
              else if (bVar2 < 0x20) {
                param_2 = uVar4 & 0xff;
              }
              else {
                param_2 = 0x1f;
              }
              dVar1 = (double)param_2;
            }
            else {
              iVar5 = (uVar4 & 0xff) - 2;
              iVar3 = 0x1f;
              if (iVar5 < 0x20) {
                iVar3 = iVar5;
              }
              if (iVar3 < 2) {
                dVar1 = 2.0;
              }
              else {
                param_2 = 0x1f;
                if (iVar5 < 0x20) {
                  param_2 = iVar5;
                }
                dVar1 = (double)param_2;
              }
            }
            *(double *)(param_1 + 0x1ea) = dVar1;
          }
        }
        if (*(int *)(param_3 + 0x10) != 0) {
          local_14 = 0x23;
          local_10 = 3;
          local_c = 0;
          FUN_638a8890((void *)(param_1 + 0x32),&local_14);
          return local_8;
        }
      }
    }
    break;
  case 2:
    if (*(uint *)(param_1 + 0x1ce) <= (uint)(*(int *)((int)this + 0xac) - *(int *)(param_1 + 0x122))
       ) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x17e) != 0) {
      *(undefined4 *)(param_2 + 0x10) = 1;
      return 1;
    }
    break;
  case 4:
    local_8 = 1;
  }
  return local_8;
}


