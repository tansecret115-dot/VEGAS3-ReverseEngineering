/* Module: vegas30.exe
   Function: FUN_005ee3c0
   Address: 005ee3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005ee3c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = param_2;
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  piVar4 = *(int **)(param_1 + 0x10);
  if (param_2 == piVar4) {
    *(int *)(param_1 + 0x10) = *param_2;
  }
  else {
    for (piVar1 = (int *)*piVar4; piVar1 != param_2; piVar1 = (int *)*piVar1) {
      piVar4 = piVar1;
    }
    *piVar4 = *param_2;
  }
  if (*(int **)(param_1 + 0x14) == param_2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pvVar3 = GlobalHandle(param_2);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(param_2);
  GlobalFree(pvVar3);
  return;
}


