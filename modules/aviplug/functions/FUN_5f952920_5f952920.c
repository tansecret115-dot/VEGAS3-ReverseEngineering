/* Module: aviplug.dll
   Function: FUN_5f952920
   Address: 5f952920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f952920(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  iVar1 = FUN_5f9527b0(param_1,param_2,0,(int *)0x0);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0x28;
    }
    *param_3 = 0x28;
    param_3[4] = 0;
    *(undefined2 *)(param_3 + 3) = 1;
    *(undefined2 *)((int)param_3 + 0xe) = 0x18;
    param_3[1] = 0x2d0;
    iVar1 = *(int *)(param_2 + 8);
    param_3[2] = iVar1;
    param_3[5] = iVar1 * 0x870;
    iVar1 = 0;
  }
  return iVar1;
}


