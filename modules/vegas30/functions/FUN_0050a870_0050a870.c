/* Module: vegas30.exe
   Function: FUN_0050a870
   Address: 0050a870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050a870(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_11c [276];
  byte local_8;
  
  iVar4 = 1;
  FUN_00508ba0(param_1,local_11c);
  if (((local_8 & 2) != 0) && ((local_8 & 4) == 0)) {
    iVar1 = FUN_00508b80(param_1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00508c00(param_1,iVar3);
        iVar4 = FUN_0050a870(uVar2);
        if (iVar4 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return iVar4;
  }
  return 0;
}


