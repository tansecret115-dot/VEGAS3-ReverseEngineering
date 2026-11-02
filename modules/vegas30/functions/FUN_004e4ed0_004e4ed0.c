/* Module: vegas30.exe
   Function: FUN_004e4ed0
   Address: 004e4ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e4ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 0;
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x70), iVar1 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0xe14)) {
      piVar4 = (int *)(iVar1 + 0xe08);
      while (param_1 != *piVar4) {
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
        if (*(int *)(iVar1 + 0xe14) <= iVar3) {
          return uVar2;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


