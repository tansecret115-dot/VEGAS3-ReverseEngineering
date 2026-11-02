/* Module: vegas30.exe
   Function: FUN_004a1230
   Address: 004a1230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a1230(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  SHORT SVar3;
  
  if (*(int *)(param_1 + 0xce4) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xce4) + 0x10);
    if (((uVar1 & 0x80000) == 0) || ((uVar1 & 0x10000) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (param_2 == 1) {
      return 4;
    }
    if (param_2 == 2) {
      SVar3 = GetKeyState(0x10);
      if ((SVar3 < 0) && (bVar2)) {
        return 5;
      }
    }
  }
  return 0x7f00;
}


