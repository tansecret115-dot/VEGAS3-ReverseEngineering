/* Module: vegas30.exe
   Function: FUN_005edfa0
   Address: 005edfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005edfa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != param_2) {
    do {
      if ((*(byte *)(param_2 + 0x18) & 1) != 1) break;
      iVar3 = *(int *)(param_2 + 0xc);
      iVar2 = *(int *)(iVar3 + 0x10);
      if (param_2 == iVar2) {
        iVar2 = *(int *)(iVar3 + 0x14);
        if ((~*(byte *)(iVar2 + 0x18) & 1) == 1) {
          *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe ^ 1;
          *(byte *)(*(int *)(param_2 + 0xc) + 0x18) =
               *(byte *)(*(int *)(param_2 + 0xc) + 0x18) & 0xfe;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar2 = *(int *)(iVar3 + 0xc);
          iVar1 = *(int *)(iVar3 + 0x14);
          if (*(int *)(iVar2 + 0x10) == iVar3) {
            *(int *)(iVar2 + 0x10) = iVar1;
          }
          else if (*(int *)(iVar2 + 0x14) == iVar3) {
            *(int *)(iVar2 + 0x14) = iVar1;
          }
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(param_1 + 8) == iVar3) {
            *(int *)(param_1 + 8) = iVar1;
          }
          iVar2 = *(int *)(iVar1 + 0x10);
          *(int *)(iVar3 + 0x14) = iVar2;
          if ((*(byte *)(iVar2 + 0x18) & 2) != 2) {
            *(int *)(iVar2 + 0xc) = iVar3;
          }
          *(int *)(iVar1 + 0x10) = iVar3;
          *(int *)(iVar3 + 0xc) = iVar1;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar2 = *(int *)(iVar3 + 0x14);
        }
        iVar1 = *(int *)(iVar2 + 0x10);
        if (((*(byte *)(iVar1 + 0x18) & 1) == 1) &&
           ((*(byte *)(*(int *)(iVar2 + 0x14) + 0x18) & 1) == 1)) {
          *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
          param_2 = *(int *)(param_2 + 0xc);
        }
        else {
          if ((*(byte *)(*(int *)(iVar2 + 0x14) + 0x18) & 1) == 1) {
            *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) & 0xfe ^ 1;
            *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
            iVar3 = *(int *)(iVar2 + 0xc);
            iVar1 = *(int *)(iVar2 + 0x10);
            if (*(int *)(iVar3 + 0x10) == iVar2) {
              *(int *)(iVar3 + 0x10) = iVar1;
            }
            else if (*(int *)(iVar3 + 0x14) == iVar2) {
              *(int *)(iVar3 + 0x14) = iVar1;
            }
            *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
            if (*(int *)(param_1 + 8) == iVar2) {
              *(int *)(param_1 + 8) = iVar1;
            }
            iVar3 = *(int *)(iVar1 + 0x14);
            *(int *)(iVar2 + 0x10) = iVar3;
            if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
              *(int *)(iVar3 + 0xc) = iVar2;
            }
            *(int *)(iVar1 + 0x14) = iVar2;
            *(int *)(iVar2 + 0xc) = iVar1;
            iVar3 = *(int *)(param_2 + 0xc);
            iVar2 = *(int *)(iVar3 + 0x14);
          }
          *(byte *)(iVar2 + 0x18) =
               (*(byte *)(iVar3 + 0x18) ^ *(byte *)(iVar2 + 0x18)) & 1 ^ *(byte *)(iVar2 + 0x18);
          *(byte *)(*(int *)(param_2 + 0xc) + 0x18) =
               *(byte *)(*(int *)(param_2 + 0xc) + 0x18) & 0xfe ^ 1;
          *(byte *)(*(int *)(iVar2 + 0x14) + 0x18) =
               *(byte *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfe ^ 1;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar1 = *(int *)(iVar3 + 0xc);
          iVar2 = *(int *)(iVar3 + 0x14);
          if (*(int *)(iVar1 + 0x10) == iVar3) {
            *(int *)(iVar1 + 0x10) = iVar2;
          }
          else if (*(int *)(iVar1 + 0x14) == iVar3) {
            *(int *)(iVar1 + 0x14) = iVar2;
          }
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(param_1 + 8) == iVar3) {
            *(int *)(param_1 + 8) = iVar2;
          }
          iVar1 = *(int *)(iVar2 + 0x10);
          *(int *)(iVar3 + 0x14) = iVar1;
          if ((*(byte *)(iVar1 + 0x18) & 2) != 2) {
            *(int *)(iVar1 + 0xc) = iVar3;
          }
          *(int *)(iVar2 + 0x10) = iVar3;
LAB_005ee2bc:
          *(int *)(iVar3 + 0xc) = iVar2;
          param_2 = *(int *)(param_1 + 8);
        }
      }
      else {
        if ((~*(byte *)(iVar2 + 0x18) & 1) == 1) {
          *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe ^ 1;
          *(byte *)(*(int *)(param_2 + 0xc) + 0x18) =
               *(byte *)(*(int *)(param_2 + 0xc) + 0x18) & 0xfe;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar2 = *(int *)(iVar3 + 0xc);
          iVar1 = *(int *)(iVar3 + 0x10);
          if (*(int *)(iVar2 + 0x10) == iVar3) {
            *(int *)(iVar2 + 0x10) = iVar1;
          }
          else if (*(int *)(iVar2 + 0x14) == iVar3) {
            *(int *)(iVar2 + 0x14) = iVar1;
          }
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(param_1 + 8) == iVar3) {
            *(int *)(param_1 + 8) = iVar1;
          }
          iVar2 = *(int *)(iVar1 + 0x14);
          *(int *)(iVar3 + 0x10) = iVar2;
          if ((*(byte *)(iVar2 + 0x18) & 2) != 2) {
            *(int *)(iVar2 + 0xc) = iVar3;
          }
          *(int *)(iVar1 + 0x14) = iVar3;
          *(int *)(iVar3 + 0xc) = iVar1;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar2 = *(int *)(iVar3 + 0x10);
        }
        iVar1 = *(int *)(iVar2 + 0x14);
        if (((*(byte *)(iVar1 + 0x18) & 1) != 1) ||
           ((*(byte *)(*(int *)(iVar2 + 0x10) + 0x18) & 1) != 1)) {
          if ((*(byte *)(*(int *)(iVar2 + 0x10) + 0x18) & 1) == 1) {
            *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) & 0xfe ^ 1;
            *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
            iVar3 = *(int *)(iVar2 + 0xc);
            iVar1 = *(int *)(iVar2 + 0x14);
            if (*(int *)(iVar3 + 0x10) == iVar2) {
              *(int *)(iVar3 + 0x10) = iVar1;
            }
            else if (*(int *)(iVar3 + 0x14) == iVar2) {
              *(int *)(iVar3 + 0x14) = iVar1;
            }
            *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
            if (*(int *)(param_1 + 8) == iVar2) {
              *(int *)(param_1 + 8) = iVar1;
            }
            iVar3 = *(int *)(iVar1 + 0x10);
            *(int *)(iVar2 + 0x14) = iVar3;
            if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
              *(int *)(iVar3 + 0xc) = iVar2;
            }
            *(int *)(iVar1 + 0x10) = iVar2;
            *(int *)(iVar2 + 0xc) = iVar1;
            iVar3 = *(int *)(param_2 + 0xc);
            iVar2 = *(int *)(iVar3 + 0x10);
          }
          *(byte *)(iVar2 + 0x18) =
               (*(byte *)(iVar3 + 0x18) ^ *(byte *)(iVar2 + 0x18)) & 1 ^ *(byte *)(iVar2 + 0x18);
          *(byte *)(*(int *)(param_2 + 0xc) + 0x18) =
               *(byte *)(*(int *)(param_2 + 0xc) + 0x18) & 0xfe ^ 1;
          *(byte *)(*(int *)(iVar2 + 0x10) + 0x18) =
               *(byte *)(*(int *)(iVar2 + 0x10) + 0x18) & 0xfe ^ 1;
          iVar3 = *(int *)(param_2 + 0xc);
          iVar1 = *(int *)(iVar3 + 0xc);
          iVar2 = *(int *)(iVar3 + 0x10);
          if (*(int *)(iVar1 + 0x10) == iVar3) {
            *(int *)(iVar1 + 0x10) = iVar2;
          }
          else if (*(int *)(iVar1 + 0x14) == iVar3) {
            *(int *)(iVar1 + 0x14) = iVar2;
          }
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          if (*(int *)(param_1 + 8) == iVar3) {
            *(int *)(param_1 + 8) = iVar2;
          }
          iVar1 = *(int *)(iVar2 + 0x14);
          *(int *)(iVar3 + 0x10) = iVar1;
          if ((*(byte *)(iVar1 + 0x18) & 2) != 2) {
            *(int *)(iVar1 + 0xc) = iVar3;
          }
          *(int *)(iVar2 + 0x14) = iVar3;
          goto LAB_005ee2bc;
        }
        *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfe;
        param_2 = *(int *)(param_2 + 0xc);
      }
    } while (*(int *)(param_1 + 8) != param_2);
  }
  *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) & 0xfe ^ 1;
  return;
}


