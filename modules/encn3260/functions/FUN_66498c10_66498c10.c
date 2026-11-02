/* Module: encn3260.dll
   Function: FUN_66498c10
   Address: 66498c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66498c10(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 8) != 0) && (param_3 != (int *)0x0)) &&
     ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
    *(undefined4 *)(param_1 + 0x15) = param_5;
    *(undefined4 *)(param_1 + 0x11) = param_2;
    uVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1,param_4);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return 1;
  }
  return 0;
}


