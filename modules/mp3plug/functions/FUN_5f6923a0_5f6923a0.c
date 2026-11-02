/* Module: mp3plug.dll
   Function: FUN_5f6923a0
   Address: 5f6923a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6923a0(int param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_5f692810(param_1);
  uVar2 = 1;
  if ((((-1 < iVar1) && (param_5 == 2)) && (param_2 != (int *)0x0)) && (7 < param_3)) {
    if (*(char *)(param_1 + 0x1073) != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x230) + (*(int *)(param_1 + 0x230) >> 0x1f & 7U);
    *param_2 = iVar1 >> 3;
    param_2[1] = iVar1 >> 0x1f;
    uVar2 = 0;
  }
  return uVar2;
}


