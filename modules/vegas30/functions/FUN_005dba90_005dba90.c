/* Module: vegas30.exe
   Function: FUN_005dba90
   Address: 005dba90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dba90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = FUN_005d1590(param_3);
  if (iVar2 != 0) {
    iVar2 = riff64_PrepareList(param_1,DAT_0062a770,DAT_0062a774,DAT_0062a778,DAT_0062a77c,&local_8)
    ;
    if (-1 < iVar2) {
      if (*(int *)(param_3 + 0x244) == 0) {
        if (*(uint **)(param_3 + 0x234) == (uint *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = **(uint **)(param_3 + 0x234);
        }
      }
      else {
        uVar3 = FUN_005d0420(param_3);
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          piVar1 = *(int **)(param_3 + 0x234);
          if (piVar1 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar1;
          }
          if (((int)uVar5 < 0) || (iVar2 + -1 < (int)uVar5)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(piVar1[2] + uVar5 * 4);
          }
          FUN_005dac40(param_1,param_2,DAT_0062a780,DAT_0062a784,DAT_0062a788,DAT_0062a78c,uVar4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      uVar3 = riff64_CompleteChunk(param_1,local_8,local_4);
      return uVar3 & (-1 < (int)uVar3) - 1;
    }
    return 0x8004e009;
  }
  return 0;
}


