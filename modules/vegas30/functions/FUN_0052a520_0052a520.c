/* Module: vegas30.exe
   Function: FUN_0052a520
   Address: 0052a520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052a520(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_2;
  FUN_004ec4f0(param_2,0,&param_2,1);
  if (((param_2 & 0x80) != 0) || ((param_2 & 0x100) != 0)) {
    iVar2 = FUN_0052a490(param_1,param_3,param_4);
    if (iVar2 != 0) {
      iVar3 = **(int **)(uVar1 + 8);
      if (*(int *)(iVar3 + 0x208) == 8) {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20c) + 8);
        if (iVar3 != 0) {
          iVar3 = FUN_0050a310(*(undefined4 *)(param_1 + 0xfc),iVar2,iVar3);
          if (iVar3 != 0) {
            return iVar2;
          }
        }
      }
      else if ((*(int *)(iVar3 + 0x208) == 9) &&
              (iVar3 = *(int *)(*(int *)(iVar3 + 0x20c) + 4), iVar3 != 0)) {
        iVar3 = FUN_0050a310(*(undefined4 *)(param_1 + 0xfc),iVar2,iVar3);
        if (iVar3 != 0) {
          return iVar2;
        }
      }
    }
  }
  return 0;
}


