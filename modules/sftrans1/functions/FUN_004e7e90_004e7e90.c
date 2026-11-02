/* Module: sftrans1.dll
   Function: FUN_004e7e90
   Address: 004e7e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_004e7e90(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_004e7c60(param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x60) = param_4;
    *(undefined4 *)(param_2 + 0x68) = param_6;
    piVar3 = (int *)(param_1 + param_3 * 4);
    *(undefined4 *)(param_2 + 100) = param_5;
    if (*piVar3 == 0) {
      *piVar3 = param_2;
      return;
    }
    iVar2 = *piVar3;
    while (*(int *)(iVar2 + 0x50) < *(int *)(param_2 + 0x50)) {
      iVar1 = *(int *)(iVar2 + 0x58);
      piVar3 = (int *)(iVar2 + 0x58);
      if (iVar1 == 0) {
        *(int *)(iVar2 + 0x58) = param_2;
        return;
      }
      iVar2 = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar3 = param_2;
    *(int *)(param_2 + 0x58) = iVar2;
  }
  return;
}


