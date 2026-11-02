/* Module: vegas30.exe
   Function: FUN_005f2f00
   Address: 005f2f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f2f00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = **(int **)(param_1 + 0x130);
  iVar3 = -1;
  iVar4 = 0;
  if (0 < iVar1) {
    piVar5 = (int *)(*(int **)(param_1 + 0x130))[2];
    do {
      iVar2 = *piVar5;
      if ((*(int *)(iVar2 + 4) == *(int *)(param_2 + 4)) &&
         (iVar3 = iVar3 + 1, iVar3 == *(int *)(param_2 + 0xc))) {
        *(uint *)(iVar2 + 0x8c) =
             *(uint *)(iVar2 + 0x8c) ^ (*(uint *)(param_2 + 0x8c) ^ *(uint *)(iVar2 + 0x8c)) & 0x80;
        if (*(int *)(param_2 + 4) == 3) {
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(param_2 + 0x60);
          *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(param_2 + 0x68);
          *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
          *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_2 + 0x70);
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_2 + 0x74);
          *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 0x58);
          *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
          *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_2 + 0x50);
          *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        }
        return 0;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar1);
  }
  return 0x80004005;
}


