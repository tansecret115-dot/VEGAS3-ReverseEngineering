/* Module: vegas30.exe
   Function: FUN_004abc80
   Address: 004abc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004abc80(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int in_stack_00000018;
  
  if ((param_2 != (uint *)0x0) && ((*param_2 & 0x200000) == 0)) {
    iVar3 = in_stack_00000018;
    if (in_stack_00000018 == 0) {
      iVar3 = FUN_004aac00(param_1);
    }
    FUN_004abbe0(param_1,param_2,iVar3);
    uVar1 = param_2[2];
    uVar2 = param_2[0x12];
    uVar6 = 0;
    if (0 < (int)uVar1) {
      puVar4 = param_2 + 0x1c;
      do {
        puVar5 = (uint *)(-(uint)(uVar6 < param_2[2]) & (uint)puVar4);
        if (((*puVar5 & 0x40) == 0) && (puVar5[0x19] != 0)) {
          (*(code *)puVar5[0x19])(iVar3,puVar5 + 0x15,uVar2,puVar5);
          *puVar5 = *puVar5 | 1;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 0x1a;
      } while ((int)uVar6 < (int)uVar1);
    }
    if (iVar3 != in_stack_00000018) {
      FUN_004aac70(param_1,iVar3);
    }
  }
  return;
}


