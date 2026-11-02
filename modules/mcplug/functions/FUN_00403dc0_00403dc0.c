/* Module: mcplug.dll
   Function: FUN_00403dc0
   Address: 00403dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403dc0(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (((param_4 == 2) && (param_2 != (int *)0x0)) && (7 < param_3)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0xa0);
    iVar2 = iVar2 + (iVar2 >> 0x1f & 7U);
    *param_2 = iVar2 >> 3;
    param_2[1] = iVar2 >> 0x1f;
    uVar1 = 0;
  }
  return uVar1;
}


