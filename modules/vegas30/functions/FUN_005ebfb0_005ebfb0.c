/* Module: vegas30.exe
   Function: FUN_005ebfb0
   Address: 005ebfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ebfb0(char *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8 [2];
  
  local_c = param_2 + 0x170;
  local_8[0] = param_2;
  local_8[1] = 0;
  local_10 = -0x7fffbffb;
  if (*param_1 != '\0') {
    local_14 = 0;
    local_10 = FUN_005edce0(&local_c,local_8,&local_14);
    if (-1 < local_10) {
      if (local_14 != *(int *)(param_1 + 8)) {
        do {
          iVar2 = *(int *)(local_14 + 0xc);
          if ((~*(byte *)(iVar2 + 0x18) & 1) == 0) break;
          iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 0x10);
          if (iVar2 == iVar4) {
            iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 0x14);
            if ((~*(byte *)(iVar4 + 0x18) & 1) == 0) {
              if (local_14 == *(int *)(iVar2 + 0x14)) {
                piVar1 = (int *)(iVar2 + 0xc);
                iVar4 = *(int *)(iVar2 + 0x14);
                iVar3 = *piVar1;
                if (*(int *)(iVar3 + 0x10) == iVar2) {
                  *(int *)(iVar3 + 0x10) = iVar4;
                }
                else if (*(int *)(iVar3 + 0x14) == iVar2) {
                  *(int *)(iVar3 + 0x14) = iVar4;
                }
                *(int *)(iVar4 + 0xc) = *piVar1;
                if (*(int *)(param_1 + 8) == iVar2) {
                  *(int *)(param_1 + 8) = iVar4;
                }
                iVar3 = *(int *)(iVar4 + 0x10);
                *(int *)(iVar2 + 0x14) = iVar3;
                if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
                  *(int *)(iVar3 + 0xc) = iVar2;
                }
                *(int *)(iVar4 + 0x10) = iVar2;
                *piVar1 = iVar4;
                local_14 = iVar2;
              }
              *(byte *)(*(int *)(local_14 + 0xc) + 0x18) =
                   *(byte *)(*(int *)(local_14 + 0xc) + 0x18) & 0xfe ^ 1;
              iVar2 = *(int *)(*(int *)(local_14 + 0xc) + 0xc);
              *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
              FUN_005edc90(*(undefined4 *)(*(int *)(local_14 + 0xc) + 0xc));
            }
            else {
LAB_005ec041:
              *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe ^ 1;
              *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfe ^ 1;
              iVar2 = *(int *)(*(int *)(local_14 + 0xc) + 0xc);
              *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
              local_14 = *(int *)(*(int *)(local_14 + 0xc) + 0xc);
            }
          }
          else {
            if ((~*(byte *)(iVar4 + 0x18) & 1) != 0) goto LAB_005ec041;
            if (local_14 == *(int *)(iVar2 + 0x10)) {
              local_14 = iVar2;
              FUN_005edc90(iVar2);
            }
            *(byte *)(*(int *)(local_14 + 0xc) + 0x18) =
                 *(byte *)(*(int *)(local_14 + 0xc) + 0x18) & 0xfe ^ 1;
            iVar2 = *(int *)(*(int *)(local_14 + 0xc) + 0xc);
            *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
            FUN_005edc40(*(undefined4 *)(*(int *)(local_14 + 0xc) + 0xc));
          }
        } while (local_14 != *(int *)(param_1 + 8));
      }
      *(byte *)(*(int *)(param_1 + 8) + 0x18) = *(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xfe ^ 1;
    }
  }
  if (local_10 < 0) {
    if (local_10 == -0x7ffb1f57) {
      local_10 = 0;
    }
  }
  else {
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x10;
    if (*(int *)(param_1 + 0x1c) != 0) {
      DAT_0064767c = DAT_0064767c | 0x100;
      return local_10;
    }
  }
  return local_10;
}


