/* Module: rmto3260.dll
   Function: FUN_662ddef0
   Address: 662ddef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ddef0(int param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (100 < param_4) {
    param_4 = 100;
  }
  if (param_4 < param_3) {
    param_3 = param_4;
  }
  iVar2 = 0;
  *(uint *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  if (0 < param_2[1]) {
    do {
      piVar1 = *(int **)(*param_2 + iVar2 * 4);
      (**(code **)(*piVar1 + 4))(piVar1);
      FUN_662ed5e0((void *)(param_1 + 0x14),*(int *)(param_1 + 0x18),piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return 0;
}


