/* Module: enlv3260.dll
   Function: FUN_661d22d0
   Address: 661d22d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d22d0(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x5a);
  if (iVar4 == 0) {
    if (param_2 == (int *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)(param_1 + 0x62) == 0) {
      this = operator_new(0x4c);
      if (this == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_661d28a0(this,1000);
      }
      *(undefined4 **)(param_1 + 0x62) = puVar2;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[1] = param_3;
      puVar2[3] = uVar3 & 0xffff;
      puVar2[4] = param_2;
      (**(code **)(*param_2 + 4))(param_2);
      *puVar2 = 0;
    }
    iVar4 = FUN_661d2990(*(void **)(param_1 + 0x62),(int)puVar2);
    if (iVar4 != 0) {
      return 0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = (int *)puVar2[4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        puVar2[4] = 0;
      }
      operator_delete(puVar2);
    }
    (**(code **)(*(int *)(param_1 + 8) + 0xc))
              (param_1 + 8,1,0x8004004c,0x8004000d,s_Buffer_Overflow_661d61dc,0);
    iVar4 = -0x7ffbffb4;
  }
  return iVar4;
}


