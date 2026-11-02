/* Module: vidcap30.exe
   Function: FUN_00451e50
   Address: 00451e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451e50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&local_8);
  if ((((-1 < iVar2) &&
       (iVar2 = riff64_PrepareChunk(param_1,DAT_0058bcf8,DAT_0058bcfc,DAT_0058bd00,DAT_0058bd04,
                                    &param_4), -1 < iVar2)) &&
      (iVar2 = FUN_00445170(param_2,0), -1 < iVar2)) &&
     (iVar2 = riff64_CompleteChunk(param_1,param_4,param_5), -1 < iVar2)) {
    iVar3 = 0;
    iVar1 = **(int **)(param_3 + 0x10);
    if (0 < iVar1) {
      do {
        iVar2 = riff64_PrepareChunk(param_1,DAT_0058bd08,DAT_0058bd0c,DAT_0058bd10,DAT_0058bd14,
                                    &local_10);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = FUN_00445250(param_2,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = riff64_CompleteChunk(param_1,local_10,local_c);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    if ((-1 < iVar2) && (iVar2 = riff64_CompleteChunk(param_1,local_8,local_4), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


