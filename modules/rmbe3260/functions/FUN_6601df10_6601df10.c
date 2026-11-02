/* Module: rmbe3260.dll
   Function: FUN_6601df10
   Address: 6601df10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601df10(int param_1,int *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = operator_new(6);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = param_2;
      *(undefined1 *)(puVar1 + 1) = param_3;
      *(undefined1 *)((int)puVar1 + 5) = param_4;
    }
    FUN_6605c550((void *)(param_1 + 0x164),puVar1);
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


