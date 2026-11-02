/* Module: vegas30k.dll
   Function: FUN_011ae3c0
   Address: 011ae3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ae3c0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = param_1;
  uVar7 = 0;
  uVar5 = 1;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x690) != 0) {
    if (param_2 == 1) {
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 8);
        (**(code **)*puVar1)(puVar1,&DAT_011d9ca0,&param_1);
        uVar7 = 1;
        *param_3 = param_1;
        uVar5 = 0;
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*(int *)(iVar4 + 8) + 0x18);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
      piVar3 = param_3;
      for (uVar6 = 0; ((iVar2 != 0 && (uVar6 < param_2)) && (uVar6 < *param_4)); uVar6 = uVar6 + 1)
      {
        (*(code *)**(undefined4 **)**(undefined4 **)(iVar4 + 8))
                  ((undefined4 *)**(undefined4 **)(iVar4 + 8),&DAT_011d9ca0,&param_1);
        uVar7 = uVar7 + 1;
        *piVar3 = param_1;
        uVar5 = 0;
        iVar2 = *(int *)(*(int *)(iVar4 + 8) + 0x18);
        *(int *)(iVar4 + 8) = iVar2;
        piVar3 = piVar3 + 1;
      }
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7;
  }
  return uVar5;
}


