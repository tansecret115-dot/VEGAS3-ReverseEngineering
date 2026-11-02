/* Module: vidcap30.exe
   Function: FUN_00451c00
   Address: 00451c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451c00(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (((param_3 != (int *)0x0) && (iVar1 = *param_3, iVar1 != 0)) &&
     (iVar3 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&param_11), -1 < iVar3)) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = FUN_00451e50(param_1,param_2,*(undefined4 *)(param_3[2] + iVar4 * 4),DAT_0058bce8,
                             DAT_0058bcec,DAT_0058bcf0,DAT_0058bcf4);
        if (iVar3 < 0) {
          return iVar3;
        }
        if ((*(byte *)(param_8 + 0x18) & 1) != 0) {
          return -0x7ffb1ff4;
        }
        uVar2 = ftol();
        FUN_00416b00(param_8,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    if ((-1 < iVar3) && (iVar3 = riff64_CompleteChunk(param_1,param_11,param_12), -1 < iVar3)) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


