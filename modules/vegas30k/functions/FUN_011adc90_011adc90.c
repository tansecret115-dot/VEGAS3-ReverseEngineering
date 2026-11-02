/* Module: vegas30k.dll
   Function: FUN_011adc90
   Address: 011adc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011adc90(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = param_2;
  iVar2 = 0;
  if (param_2 == 0x100) {
    puVar3 = *(undefined4 **)(param_1 + 0x68c);
    if (puVar3 != (undefined4 *)0x0) {
      do {
        param_1 = 0;
        (**(code **)(*(int *)*puVar3 + 0x3c))((int *)*puVar3,0xf,&param_1);
        if (((param_1 & 0x1000) != 0) && ((param_1 & 0xffffefff) == 0x100)) {
          iVar2 = iVar2 + 1;
        }
        puVar3 = (undefined4 *)puVar3[6];
      } while (puVar3 != (undefined4 *)0x0);
      return iVar2;
    }
  }
  else {
    if ((param_2 == 1) && (*(int *)(param_1 + 0x600) != 1)) {
      return 1;
    }
    for (puVar3 = *(undefined4 **)(param_1 + 0x674); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[6]) {
      param_1 = 0;
      (**(code **)(*(int *)*puVar3 + 0x8c))((int *)*puVar3,0xf,&param_1);
      if (((param_1 & 0x80) != 0) && ((param_1 & 0xffffff7f) == uVar1)) {
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}


