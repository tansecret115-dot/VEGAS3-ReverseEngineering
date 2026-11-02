/* Module: vegas30k.dll
   Function: FUN_011afef0
   Address: 011afef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011afef0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = param_1;
  uVar4 = 1;
  puVar1 = (undefined4 *)param_1[0x1a3];
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[6]) {
    (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011d9ca0,&param_1);
    if (param_1 != (int *)0x0) {
      if ((*(byte *)(puVar1 + 3) & 1) != 0) {
        uVar4 = (**(code **)(*param_1 + 0x4c))(param_1);
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  piVar2 = (int *)piVar3[0x19a];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)piVar3[0x19b];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x44))(piVar2);
    }
    piVar3[2] = piVar3[2] & 0xffffffdf;
    return uVar4;
  }
  (**(code **)(*piVar2 + 0x38))(piVar2);
  piVar3[2] = piVar3[2] & 0xffffffdf;
  return uVar4;
}


