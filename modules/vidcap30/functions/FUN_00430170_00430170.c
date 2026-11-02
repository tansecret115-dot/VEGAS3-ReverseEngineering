/* Module: vidcap30.exe
   Function: FUN_00430170
   Address: 00430170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00430170(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(int *)(param_1 + 0x34) < 1) || (*(int *)(param_1 + 0x38) < 1)) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xac) != 0) {
    pbVar2 = (byte *)(param_1 + 0xca);
    do {
      if (((((pbVar2[1] & 1) == 0) && ((*pbVar2 & 8) == 0)) && (*(int *)(pbVar2 + -0x16) <= param_2)
          ) && (((param_2 < *(int *)(pbVar2 + -0xe) && (*(int *)(pbVar2 + -0x12) <= param_3)) &&
                (param_3 < *(int *)(pbVar2 + -10))))) {
        iVar1 = uVar3 + 0x80;
        *(int *)(param_1 + 100) = *(int *)(pbVar2 + -0x16);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(pbVar2 + -0x12);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(pbVar2 + -0xe);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(pbVar2 + -10);
        break;
      }
      iVar1 = 0;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0x20;
    } while (uVar3 < *(uint *)(param_1 + 0xac));
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  return iVar1;
}


