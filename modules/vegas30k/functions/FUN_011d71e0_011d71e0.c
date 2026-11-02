/* Module: vegas30k.dll
   Function: FUN_011d71e0
   Address: 011d71e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d71e0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  iVar2 = param_1;
  uVar6 = 0;
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar3 = 1;
  if (uVar4 != 0) {
    if (param_2 == 1) {
      if (*(uint *)(param_1 + 0x10) < uVar4) {
        puVar1 = *(undefined4 **)
                  (*(int *)(*(int *)(param_1 + 8) + 8) + *(uint *)(param_1 + 0x10) * 4);
        (**(code **)*puVar1)(puVar1,&DAT_011d9b50,&param_1);
        uVar6 = 1;
        *param_3 = param_1;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        uVar3 = 0;
      }
    }
    else {
      uVar5 = 0;
      piVar7 = param_3;
      if (*(uint *)(param_1 + 0x10) < uVar4) {
        do {
          if ((param_2 <= uVar5) || (*param_4 <= uVar5)) break;
          puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar2 + 8) + 8) + *(int *)(iVar2 + 0x10) * 4);
          (**(code **)*puVar1)(puVar1,&DAT_011d9b50,&param_1);
          uVar6 = uVar6 + 1;
          uVar3 = 0;
          *piVar7 = param_1;
          uVar4 = *(int *)(iVar2 + 0x10) + 1;
          uVar5 = uVar5 + 1;
          *(uint *)(iVar2 + 0x10) = uVar4;
          piVar7 = piVar7 + 1;
        } while (uVar4 < *(uint *)(iVar2 + 0xc));
      }
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar6;
  }
  return uVar3;
}


