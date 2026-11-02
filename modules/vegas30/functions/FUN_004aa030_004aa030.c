/* Module: vegas30.exe
   Function: FUN_004aa030
   Address: 004aa030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa030(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_4;
  
  uVar4 = 0;
  local_4 = 0;
  if (param_2 != (int *)0x0) {
    local_4 = *param_2;
  }
  iVar3 = -1;
  uVar1 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar1) {
    piVar5 = (int *)(param_1 + 0x80);
    do {
      if ((uVar4 < uVar1) && (piVar5 != (int *)0x10)) {
        if (param_2 == (int *)0x0) {
          return *piVar5;
        }
        iVar2 = *piVar5;
        if ((local_4 < iVar2) && ((iVar3 < 0 || (iVar2 - local_4 < iVar3 - local_4)))) {
          iVar3 = iVar2;
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x1a;
    } while ((int)uVar4 < (int)uVar1);
    return iVar3;
  }
  return -1;
}


