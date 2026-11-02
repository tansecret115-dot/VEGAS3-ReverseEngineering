/* Module: vidcap30.exe
   Function: FUN_00451d30
   Address: 00451d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451d30(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&local_8);
  if ((-1 < iVar1) &&
     (iVar1 = riff64_PrepareChunk(param_1,DAT_0058bd38,DAT_0058bd3c,DAT_0058bd40,DAT_0058bd44,
                                  &param_4), -1 < iVar1)) {
    if (*param_3 == 4) {
      iVar1 = FUN_0045f950(param_2);
    }
    else {
      if (*param_3 != 5) {
        return -0x7fffbffb;
      }
      iVar1 = FUN_0045f9e0(param_2);
    }
    if ((-1 < iVar1) && (iVar1 = riff64_CompleteChunk(param_1,param_4,param_5), -1 < iVar1)) {
      if ((*param_3 == 4) &&
         (iVar1 = FUN_00451b30(param_1,param_2,param_3[4],DAT_0058bd18,DAT_0058bd1c,DAT_0058bd20,
                               DAT_0058bd24), iVar1 < 0)) {
        return iVar1;
      }
      iVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


