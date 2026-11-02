/* Module: vegas30k.dll
   Function: FUN_011ad4b0
   Address: 011ad4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011ad4b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = param_3;
  piVar3 = param_1;
  iVar6 = 0;
  puVar7 = (undefined4 *)param_1[0x19d];
  if (puVar7 != (undefined4 *)0x0) {
    do {
      if ((iVar6 < 0) ||
         ((((uVar1 = puVar7[3], (uVar1 & 0x10) != 0 && ((uVar1 & 0x20) != 0)) && ((uVar1 & 1) != 0))
          && (iVar6 = (**(code **)(*(int *)*puVar7 + 0xdc))((int *)*puVar7,param_2,uVar5), iVar6 < 0
             )))) goto LAB_011ad5e7;
      puVar7 = (undefined4 *)puVar7[6];
    } while (puVar7 != (undefined4 *)0x0);
    if (iVar6 < 0) {
LAB_011ad5e7:
      for (puVar7 = (undefined4 *)piVar3[0x19d]; puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)puVar7[6]) {
        if ((*(byte *)(puVar7 + 3) & 0x60) != 0) {
          (**(code **)(*(int *)*puVar7 + 0xe0))((int *)*puVar7);
        }
      }
      return iVar6;
    }
  }
  uVar4 = param_2;
  if (((piVar3[0x186] != 0) && ((piVar3[2] & 0x4000U) == 0)) &&
     (piVar2 = *(int **)(piVar3[0x186] + 0x28), (*(byte *)(piVar2 + 8) & 0x40) == 0)) {
    (**(code **)(*piVar2 + 0xdc))(piVar2,param_2,uVar5);
  }
  piVar3[2] = piVar3[2] | 0x10;
  if ((code *)piVar3[0x193] != (code *)0x0) {
    (*(code *)piVar3[0x193])
              (piVar3,8,piVar3[0x194],0,0,0xffffffff,0xffffffff,0,0,0,0,0,0,0xffffffff);
  }
  FUN_011a87a0(uVar4,uVar5);
  for (puVar7 = (undefined4 *)piVar3[0x1a3]; puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)puVar7[6]) {
    (*(code *)**(undefined4 **)*puVar7)((undefined4 *)*puVar7,&DAT_011d9ca0,&param_1);
    if (param_1 != (int *)0x0) {
      if ((*(byte *)(puVar7 + 3) & 0x10) != 0) {
        (**(code **)(*param_1 + 0x60))(param_1,uVar4,uVar5);
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  iVar6 = FUN_011bba70(piVar3,uVar4,uVar5);
  if (-1 < iVar6) {
    piVar3[2] = piVar3[2] | 0x80;
    piVar3 = (int *)piVar3[0x19b];
    if (piVar3 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,uVar4,uVar5);
      return iVar6;
    }
  }
  return iVar6;
}


