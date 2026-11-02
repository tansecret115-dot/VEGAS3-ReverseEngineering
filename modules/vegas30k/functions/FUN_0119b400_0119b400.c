/* Module: vegas30k.dll
   Function: FUN_0119b400
   Address: 0119b400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119b400(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x674);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if (iVar3 < 0) goto LAB_0119b449;
      uVar1 = puVar4[3];
      if ((((uVar1 & 0x10) != 0) && ((uVar1 & 0x20) != 0)) && ((uVar1 & 1) != 0)) {
        iVar3 = (**(code **)(*(int *)*puVar4 + 0xdc))((int *)*puVar4,param_2,param_3);
      }
      puVar4 = (undefined4 *)puVar4[6];
    } while (puVar4 != (undefined4 *)0x0);
    if (iVar3 < 0) {
LAB_0119b449:
      for (puVar4 = *(undefined4 **)(param_1 + 0x674); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[6]) {
        if ((*(byte *)(puVar4 + 3) & 0x60) != 0) {
          (**(code **)(*(int *)*puVar4 + 0xe0))((int *)*puVar4);
        }
      }
      goto LAB_0119b49f;
    }
  }
  if (((*(int *)(param_1 + 0x618) != 0) && ((*(uint *)(param_1 + 8) & 0x4000) == 0)) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0x618) + 0x28), (*(byte *)(piVar2 + 8) & 0x40) == 0)) {
    (**(code **)(*piVar2 + 0xdc))(piVar2,param_2,param_3);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
LAB_0119b49f:
  if (-1 < iVar3) {
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      piVar2 = *(int **)(param_1 + 0x668);
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(param_1 + 0x66c);
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,param_2,param_3);
        }
      }
      else {
        iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,param_2,param_3);
      }
    }
    if (*(code **)(param_1 + 0x64c) != (code *)0x0) {
      (**(code **)(param_1 + 0x64c))
                (param_1,8,*(undefined4 *)(param_1 + 0x650),0,0,0xffffffff,0xffffffff,0,0,0,0,0,0,
                 0xffffffff);
    }
    FUN_011a87a0(param_2,param_3);
  }
  return iVar3;
}


