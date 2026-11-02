/* Module: vegas30k.dll
   Function: FUN_011b02a0
   Address: 011b02a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b02a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  uVar3 = param_2;
  piVar2 = param_1;
  for (puVar1 = (undefined4 *)param_1[0x1a3]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[6]) {
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011d9ca0,&param_1);
    if (param_1 != (int *)0x0) {
      if ((*(byte *)(puVar1 + 3) & 0x10) != 0) {
        (**(code **)(*param_1 + 0x68))(param_1,uVar3,uVar4);
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  FUN_011bbba0(piVar2,uVar3,uVar4);
  return;
}


