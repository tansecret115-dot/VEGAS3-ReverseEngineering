/* Module: vidcap30.exe
   Function: FUN_004464b0
   Address: 004464b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004464b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),1), iVar1 != 0)) {
    iVar2 = FUN_0044c620(iVar1);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar3 = FUN_0044c5c0(iVar1,iVar5);
        iVar4 = FUN_0044c6e0(uVar3);
        if ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x38) & 4) == 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  return iVar4;
}


