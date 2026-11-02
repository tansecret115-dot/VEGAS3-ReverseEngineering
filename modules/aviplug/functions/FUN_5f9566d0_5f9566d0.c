/* Module: aviplug.dll
   Function: FUN_5f9566d0
   Address: 5f9566d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9566d0(int *param_1,int param_2,undefined4 *param_3)

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
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_2,0);
  if (iVar1 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0x28;
    }
    *param_3 = 0x28;
    param_3[4] = 0x64737664;
    *(undefined2 *)(param_3 + 3) = 1;
    *(undefined2 *)((int)param_3 + 0xe) = 0x18;
    param_3[1] = 0x2d0;
    param_3[2] = *(undefined4 *)(param_2 + 8);
    param_3[5] = (-(uint)(*(int *)(param_2 + 8) != 0x240) & 0xffffa240) + 0x23280;
    iVar1 = 0;
  }
  return iVar1;
}


