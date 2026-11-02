/* Module: sfpublish.dll
   Function: FUN_0040a4f0
   Address: 0040a4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a4f0(int param_1,undefined4 param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  OleLockRunning(*(LPUNKNOWN *)(param_1 + 0x2c),1,0);
  if ((param_3 & 1) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x2c))
                      (*(undefined4 **)(param_1 + 0x2c),&DAT_0043cb10,param_1 + 0x3c);
    if (-1 < iVar2) goto LAB_0040a54b;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffff7;
  (**(code **)**(undefined4 **)(param_1 + 0x2c))
            (*(undefined4 **)(param_1 + 0x2c),&DAT_0043cae0,param_1 + 0x3c);
LAB_0040a54b:
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1 + 0x7c,param_1 + 0x7c);
  }
  return 0;
}


