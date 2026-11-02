/* Module: vidcap30.exe
   Function: FUN_00451b30
   Address: 00451b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451b30(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (((param_3 != (int *)0x0) && (iVar1 = *param_3, iVar1 != 0)) &&
     (iVar2 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&param_4), -1 < iVar2)) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_00451d30(param_1,param_2,*(undefined4 *)(param_3[2] + iVar3 * 4),DAT_0058bd28,
                             DAT_0058bd2c,DAT_0058bd30,DAT_0058bd34);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    if ((-1 < iVar2) && (iVar2 = riff64_CompleteChunk(param_1,param_4,param_5), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


