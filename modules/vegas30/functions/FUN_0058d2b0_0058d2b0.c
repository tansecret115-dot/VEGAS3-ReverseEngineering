/* Module: vegas30.exe
   Function: FUN_0058d2b0
   Address: 0058d2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058d2b0(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    puVar1 = (uint *)FUN_005b87b0(param_1);
    iVar4 = 0;
    uVar3 = *puVar1;
    if (0 < (int)uVar3) {
      do {
        if ((iVar4 < 0) || ((int)((-(uint)(puVar1 != (uint *)0x0) & uVar3) - 1) < iVar4)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(puVar1[2] + iVar4 * 4);
        }
        if ((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x10) & 0x80) != 0)) &&
            (param_3 == *(int *)(iVar2 + 0x3c))) &&
           ((-1 < *(int *)(iVar2 + 0x39c) &&
            ((0 < *(int *)(iVar2 + 0x39c) || (*(int *)(iVar2 + 0x398) != 0)))))) {
          FUN_0058ada0(iVar2 + 0x248);
        }
        uVar3 = *puVar1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar3);
    }
  }
  return;
}


