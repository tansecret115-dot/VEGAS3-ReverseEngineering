/* Module: vegas30.exe
   Function: FUN_0052a5d0
   Address: 0052a5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052a5d0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = 0;
  iVar1 = *param_3;
  if (0 < iVar1) {
    while (iVar3 = FUN_0050a310(*(undefined4 *)(param_1 + 0xfc),param_2,
                                *(undefined4 *)(*(int *)(param_3[2] + iVar4 * 4) + 0x20c)),
          iVar3 != 0) {
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


