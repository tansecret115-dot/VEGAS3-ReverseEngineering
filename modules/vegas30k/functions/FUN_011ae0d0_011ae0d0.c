/* Module: vegas30k.dll
   Function: FUN_011ae0d0
   Address: 011ae0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ae0d0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = param_1;
  uVar7 = 0;
  uVar4 = 1;
  if ((*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x67c) != 0)) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 8);
      (**(code **)*puVar1)(puVar1,&DAT_011d9c90,&param_1);
      uVar7 = 1;
      *param_3 = param_1;
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x18);
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      piVar5 = param_3;
      do {
        if ((param_2 <= uVar6) || (*param_4 <= uVar6)) break;
        (*(code *)**(undefined4 **)**(undefined4 **)(iVar3 + 8))
                  ((undefined4 *)**(undefined4 **)(iVar3 + 8),&DAT_011d9c90,&param_1);
        uVar7 = uVar7 + 1;
        *piVar5 = param_1;
        uVar4 = 0;
        uVar6 = uVar6 + 1;
        iVar2 = *(int *)(*(int *)(iVar3 + 8) + 0x18);
        *(int *)(iVar3 + 8) = iVar2;
        piVar5 = piVar5 + 1;
      } while (iVar2 != 0);
    }
  }
  if ((*(undefined4 **)(iVar3 + 0x10) != (undefined4 *)0x0) &&
     (*(int *)(*(int *)(iVar3 + 0x14) + 0x644) != 0)) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)**(undefined4 **)(iVar3 + 0x10);
      (**(code **)*puVar1)(puVar1,&DAT_011d9c90,&param_1);
      uVar7 = uVar7 + 1;
      *param_3 = param_1;
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x34);
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      piVar5 = param_3;
      do {
        if ((param_2 <= uVar6) || (*param_4 <= uVar6)) break;
        (*(code *)**(undefined4 **)**(undefined4 **)(iVar3 + 0x10))
                  ((undefined4 *)**(undefined4 **)(iVar3 + 0x10),&DAT_011d9c90,&param_1);
        uVar7 = uVar7 + 1;
        *piVar5 = param_1;
        uVar4 = 0;
        uVar6 = uVar6 + 1;
        iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 0x34);
        *(int *)(iVar3 + 0x10) = iVar2;
        piVar5 = piVar5 + 1;
      } while (iVar2 != 0);
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7;
  }
  return uVar4;
}


