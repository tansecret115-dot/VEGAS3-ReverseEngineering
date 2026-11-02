/* Module: vegas30k.dll
   Function: FUN_010af800
   Address: 010af800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010af800(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  double local_10;
  
  FUN_010afa80(param_1,&local_24,&local_28,*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
               *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  FUN_010afa30(param_1 + 0x118,param_1 + 0x110,local_24,local_28);
  FUN_010afa30(param_1 + 0x130,param_1 + 0x128,local_24,local_28);
  iVar1 = *(int *)(param_1 + 0x150) * 4;
  uVar3 = ~*(uint *)(*(int *)(param_1 + 0xa4) + iVar1) & *(uint *)(param_1 + 0x9c) |
          *(uint *)(*(int *)(param_1 + 0xa0) + iVar1) ^ *(uint *)(param_1 + 400);
  local_2c = (int *)(param_1 + 0xc);
  local_1c = 0;
  pdVar4 = (double *)&DAT_012062c0;
  local_14 = uVar3;
  do {
    uVar2 = 1 << ((byte)local_1c & 0x1f);
    if ((uVar2 & *(uint *)(param_1 + 0x98)) != 0) {
      if ((uVar3 & uVar2) == 0) {
        if ((local_1c & 1) == 0) {
          local_10 = _hypot(2.0,2.0);
          local_20 = *(int *)(param_1 + 0x34);
          _hypot(*(double *)(param_1 + 0x140) - *pdVar4,*(double *)(param_1 + 0x148) - pdVar4[8]);
          local_18 = *(int *)(param_1 + 0x38) - local_20;
          iVar1 = ftol();
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          *local_2c = iVar1;
        }
        else {
          local_10 = _hypot(1.0,2.0);
          iVar1 = *(int *)(param_1 + 0x2c);
          local_18 = iVar1;
          _hypot(*(double *)(param_1 + 0x140) - *pdVar4,*(double *)(param_1 + 0x148) - pdVar4[8]);
          local_20 = *(int *)(param_1 + 0x30) - iVar1;
          iVar1 = ftol();
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          *local_2c = iVar1;
          uVar3 = local_14;
        }
      }
      else {
        *local_2c = 0;
      }
      local_2c = local_2c + 1;
    }
    pdVar4 = pdVar4 + 1;
    local_1c = local_1c + 1;
  } while (pdVar4 < &DAT_01206300);
  if (param_2 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x3c),(RECT *)(param_1 + 0x48),0);
    UpdateWindow(*(HWND *)(param_1 + 0x3c));
  }
  return;
}


