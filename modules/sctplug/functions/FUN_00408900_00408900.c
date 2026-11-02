/* Module: sctplug.dll
   Function: FUN_00408900
   Address: 00408900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408900(int param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  LPSTR lpMultiByteStr;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar2 = FUN_00408d70(param_1);
      *(undefined **)(param_1 + 0x14) = puVar2;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return -0x7ff8fff2;
    }
    iVar3 = FUN_00408d20(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 8) = 0;
    lpMultiByteStr = FUN_0040d100(DAT_0043cd30,0x3f7);
    MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)(iVar1 + 0x14),0x104);
    *(undefined2 *)(iVar1 + 0x21a) = 0;
    if (-1 < iVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return iVar3;
  }
  if (((int)param_2 < 0) || (1 < param_2)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar2 = FUN_00408d70(param_1);
    *(undefined **)(param_1 + 0x14) = puVar2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return -0x7ff8fff2;
  }
  FUN_00408d20(param_1);
  *(uint *)(*(int *)(param_1 + 0x14) + 8) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}


