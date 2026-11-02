/* Module: mpgvout.001
   Function: FUN_10003a50
   Address: 10003a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x10003ec0) */
/* WARNING: Removing unreachable block (ram,0x10003ea6) */
/* WARNING: Removing unreachable block (ram,0x10003e92) */
/* WARNING: Removing unreachable block (ram,0x10003e64) */
/* WARNING: Removing unreachable block (ram,0x10003e71) */
/* WARNING: Removing unreachable block (ram,0x10003e57) */
/* WARNING: Removing unreachable block (ram,0x10003e3d) */
/* WARNING: Removing unreachable block (ram,0x10003e26) */
/* WARNING: Removing unreachable block (ram,0x10003e12) */
/* WARNING: Removing unreachable block (ram,0x10003da9) */
/* WARNING: Removing unreachable block (ram,0x10003d8f) */
/* WARNING: Removing unreachable block (ram,0x10003d7b) */
/* WARNING: Removing unreachable block (ram,0x10003d4d) */
/* WARNING: Removing unreachable block (ram,0x10003d5a) */
/* WARNING: Removing unreachable block (ram,0x10003d40) */
/* WARNING: Removing unreachable block (ram,0x10003d26) */
/* WARNING: Removing unreachable block (ram,0x10003d0f) */
/* WARNING: Removing unreachable block (ram,0x10003cfb) */
/* WARNING: Removing unreachable block (ram,0x10003d05) */
/* WARNING: Removing unreachable block (ram,0x10003d19) */
/* WARNING: Removing unreachable block (ram,0x10003d33) */
/* WARNING: Removing unreachable block (ram,0x10003d71) */
/* WARNING: Removing unreachable block (ram,0x10003d85) */
/* WARNING: Removing unreachable block (ram,0x10003d9c) */
/* WARNING: Removing unreachable block (ram,0x10003db6) */
/* WARNING: Removing unreachable block (ram,0x10003dc3) */
/* WARNING: Removing unreachable block (ram,0x10003dd0) */
/* WARNING: Removing unreachable block (ram,0x10003e1c) */
/* WARNING: Removing unreachable block (ram,0x10003e30) */
/* WARNING: Removing unreachable block (ram,0x10003e4a) */
/* WARNING: Removing unreachable block (ram,0x10003e88) */
/* WARNING: Removing unreachable block (ram,0x10003e9c) */
/* WARNING: Removing unreachable block (ram,0x10003eb3) */
/* WARNING: Removing unreachable block (ram,0x10003ecd) */
/* WARNING: Removing unreachable block (ram,0x10003eda) */
/* WARNING: Removing unreachable block (ram,0x10003ee7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10003a50(int param_1,int *param_2,int param_3)

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
            _DAT_1003f8f0 = *(int *)(param_1 + 0x54c) * 0x40 * local_28 + *param_2 + 0x180;
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
              FUN_1001a3fc(param_1,(int *)(param_1 + 0x644),(int *)(param_1 + 0x660),&local_1c,
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
      iVar2 = 1;
      if (1 < *(int *)(param_1 + 0x598)) {
        iVar2 = *(int *)(param_1 + 0x598);
      }
      *(int *)(param_1 + 0x59c) = iVar2;
      *(int *)(param_1 + 0x598) = iVar2;
    }
  }
  if (*(int *)(param_1 + 0x5bc) == 3) {
    *(undefined4 *)(param_1 + 0x5a0) = 1;
    *(undefined4 *)(param_1 + 0x5a4) = 1;
    if (*(int *)(param_1 + 0x28) < 2) {
      iVar2 = 1;
      if (1 < *(int *)(param_1 + 0x5a0)) {
        iVar2 = *(int *)(param_1 + 0x5a0);
      }
      *(int *)(param_1 + 0x5a4) = iVar2;
      *(int *)(param_1 + 0x5a0) = iVar2;
    }
  }
  return 1;
}


