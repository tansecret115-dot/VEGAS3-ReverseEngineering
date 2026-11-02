/* Module: mpgvout.004
   Function: FUN_10003afc
   Address: 10003afc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x10003f77) */
/* WARNING: Removing unreachable block (ram,0x10003f5d) */
/* WARNING: Removing unreachable block (ram,0x10003f46) */
/* WARNING: Removing unreachable block (ram,0x10003f32) */
/* WARNING: Removing unreachable block (ram,0x10003efd) */
/* WARNING: Removing unreachable block (ram,0x10003ee5) */
/* WARNING: Removing unreachable block (ram,0x10003ecf) */
/* WARNING: Removing unreachable block (ram,0x10003ebb) */
/* WARNING: Removing unreachable block (ram,0x10003e5b) */
/* WARNING: Removing unreachable block (ram,0x10003e41) */
/* WARNING: Removing unreachable block (ram,0x10003e2a) */
/* WARNING: Removing unreachable block (ram,0x10003e16) */
/* WARNING: Removing unreachable block (ram,0x10003de1) */
/* WARNING: Removing unreachable block (ram,0x10003dc9) */
/* WARNING: Removing unreachable block (ram,0x10003db3) */
/* WARNING: Removing unreachable block (ram,0x10003d9f) */
/* WARNING: Removing unreachable block (ram,0x10003da9) */
/* WARNING: Removing unreachable block (ram,0x10003dbd) */
/* WARNING: Removing unreachable block (ram,0x10003dd5) */
/* WARNING: Removing unreachable block (ram,0x10003ded) */
/* WARNING: Removing unreachable block (ram,0x10003e01) */
/* WARNING: Removing unreachable block (ram,0x10003e20) */
/* WARNING: Removing unreachable block (ram,0x10003e34) */
/* WARNING: Removing unreachable block (ram,0x10003e4e) */
/* WARNING: Removing unreachable block (ram,0x10003e68) */
/* WARNING: Removing unreachable block (ram,0x10003e7c) */
/* WARNING: Removing unreachable block (ram,0x10003ec5) */
/* WARNING: Removing unreachable block (ram,0x10003ed9) */
/* WARNING: Removing unreachable block (ram,0x10003ef1) */
/* WARNING: Removing unreachable block (ram,0x10003f09) */
/* WARNING: Removing unreachable block (ram,0x10003f1d) */
/* WARNING: Removing unreachable block (ram,0x10003f3c) */
/* WARNING: Removing unreachable block (ram,0x10003f50) */
/* WARNING: Removing unreachable block (ram,0x10003f6a) */
/* WARNING: Removing unreachable block (ram,0x10003f84) */
/* WARNING: Removing unreachable block (ram,0x10003f98) */

undefined4 __cdecl FUN_10003afc(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000020;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  local_14 = param_2[2];
  if (*(int *)(param_1 + 0x590) == 3) {
    local_28 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x56c)) {
      do {
        iVar1 = iVar2 + 0x10;
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x560)) {
          do {
            DAT_1003f8f0 = *(int *)(param_1 + 0x54c) * 0x40 * local_28 + *param_2 + 0x180;
            *(int *)(param_1 + 0x530) = param_3;
            *(undefined1 *)(param_3 + 1) = 0;
            *(undefined4 *)(param_3 + 0x28) = 0;
            if (*(int *)(param_1 + 0x58c) == 0) {
              *(undefined1 *)(param_3 + 2) = 1;
              if (*(int *)(param_1 + 0x53c) == 1) {
                *(undefined1 *)(param_3 + 1) = 8;
              }
              else {
                *(undefined1 *)(param_3 + 1) = 4;
              }
              if ((((*(byte *)(param_3 + 1) & 8) == 0) || (*(int *)(param_1 + 0x374) != 0)) &&
                 (((*(byte *)(param_3 + 1) & 4) == 0 || (*(int *)(param_1 + 0x374) == 0)))) {
                *(undefined2 *)(param_3 + 0xc) = 0;
                *(undefined2 *)(param_3 + 0xe) = 0;
                *(undefined2 *)(param_3 + 0x10) = 0;
                *(undefined2 *)(param_3 + 0x12) = 0;
                *(undefined2 *)(param_3 + 0x14) = 0;
                *(undefined2 *)(param_3 + 0x16) = 0;
                *(undefined2 *)(param_3 + 0x18) = 0;
                *(undefined2 *)(param_3 + 0x1a) = 0;
                if (iVar2 != 0) {
                  *(undefined2 *)(param_3 + 0xe) = 0xffff;
                  *(undefined2 *)(param_3 + 0x12) = 0xffff;
                }
                *(undefined2 *)(param_3 + 0x1c) = 1;
                *(undefined2 *)(param_3 + 0x1e) = 1;
                *(undefined2 *)(param_3 + 0x20) = 1;
                *(undefined2 *)(param_3 + 0x22) = 1;
              }
              else {
                *(undefined2 *)(param_3 + 0xc) = 0;
                *(undefined2 *)(param_3 + 0xe) = 0;
                *(undefined2 *)(param_3 + 0x10) = 0;
                *(undefined2 *)(param_3 + 0x12) = 0;
                *(undefined2 *)(param_3 + 0x14) = 0;
                *(undefined2 *)(param_3 + 0x16) = 0;
                *(undefined2 *)(param_3 + 0x18) = 0;
                *(undefined2 *)(param_3 + 0x1a) = 0;
                if (iVar2 < *(int *)(param_1 + 0x56c) + -0x10) {
                  *(undefined2 *)(param_3 + 0x16) = 3;
                  *(undefined2 *)(param_3 + 0x1a) = 3;
                }
                *(undefined2 *)(param_3 + 0x1c) = 0;
                *(undefined2 *)(param_3 + 0x1e) = 0;
                *(undefined2 *)(param_3 + 0x20) = 0;
                *(undefined2 *)(param_3 + 0x22) = 0;
              }
            }
            else {
              *(undefined1 *)(param_3 + 2) = 2;
              if (*(int *)(param_1 + 0x53c) == 1) {
                *(undefined1 *)(param_3 + 1) = 8;
                *(undefined2 *)(param_3 + 0xc) = 0;
                *(undefined2 *)(param_3 + 0xe) = 0;
              }
              else {
                *(undefined1 *)(param_3 + 1) = 4;
                *(undefined2 *)(param_3 + 0x10) = 0;
                *(undefined2 *)(param_3 + 0x12) = 0;
              }
            }
            if (((*(byte *)(param_3 + 1) & 1) == 0) && (*(int *)(param_1 + 0x5bc) == 2)) {
              local_1c = *(int *)(param_1 + 0x54c) * 0x40 * local_28 + *param_2;
              local_18 = local_1c + 0x100;
              local_14 = local_1c + 0x140;
              FUN_1001a5c8(param_1,(int *)(param_1 + 0x644),(int *)(param_1 + 0x660),&local_1c,
                           *(int *)(param_1 + 0x550),iVar3 << 4,iVar2,2,
                           *(undefined4 *)(param_1 + 0x590),in_stack_00000020,param_3);
            }
            param_3 = param_3 + 0x3c;
            local_28 = local_28 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x560));
        }
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x56c));
    }
  }
  else {
    printf("FIELD_PICTURE : UNSUPPORTED");
  }
  FUN_10003414();
  if (*(int *)(param_1 + 0x5bc) - 2U < 2) {
    *(undefined4 *)(param_1 + 0x598) = 1;
    *(undefined4 *)(param_1 + 0x59c) = 1;
    if (*(int *)(param_1 + 0x28) < 2) {
      iVar2 = *(int *)(param_1 + 0x598);
      if (*(int *)(param_1 + 0x598) < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x59c) = iVar2;
      *(int *)(param_1 + 0x598) = iVar2;
    }
  }
  if (*(int *)(param_1 + 0x5bc) == 3) {
    *(undefined4 *)(param_1 + 0x5a0) = 1;
    *(undefined4 *)(param_1 + 0x5a4) = 1;
    if (*(int *)(param_1 + 0x28) < 2) {
      iVar2 = *(int *)(param_1 + 0x5a0);
      if (*(int *)(param_1 + 0x5a0) < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x5a4) = iVar2;
      *(int *)(param_1 + 0x5a0) = iVar2;
    }
  }
  return 1;
}


