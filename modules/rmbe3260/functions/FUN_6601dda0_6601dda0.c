/* Module: rmbe3260.dll
   Function: FUN_6601dda0
   Address: 6601dda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6601dda0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_1c [3];
  int local_10 [3];
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    return 0x80040007;
  }
  FUN_6605b650(local_10);
  FUN_6604f5a0(*(void **)(param_1 + 0x1b4),(int *)0x0,local_10,0);
  if (*(int *)(*(int *)(param_1 + 0xf0) + -8) != 0) {
    puVar1 = FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0xf0),&DAT_6606dbdc);
    FUN_6605bbe0(local_10,puVar1);
    FUN_6605b770(local_1c);
  }
  if (*(int *)(*(int *)(param_1 + 0xfc) + -8) != 0) {
    puVar1 = FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0xfc),&DAT_6606dbdc);
    FUN_6605bbe0(local_10,puVar1);
    FUN_6605b770(local_1c);
  }
  if (*(int *)(*(int *)(param_1 + 0x108) + -8) != 0) {
    puVar1 = FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0x108),&DAT_6606dbdc);
    FUN_6605bbe0(local_10,puVar1);
    FUN_6605b770(local_1c);
  }
  if (*(int *)(*(int *)(param_1 + 0x114) + -8) != 0) {
    puVar1 = FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0x114),&DAT_6606dbdc);
    FUN_6605bbe0(local_10,puVar1);
    FUN_6605b770(local_1c);
  }
  if (*(int *)(*(int *)(param_1 + 0x120) + -8) != 0) {
    puVar1 = FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0x120),&DAT_6606dbdc);
    FUN_6605bbe0(local_10,puVar1);
    FUN_6605b770(local_1c);
  }
  uVar2 = FUN_6604f6a0(*(void **)(param_1 + 0x1b4),0,local_10,0);
  FUN_6605b770(local_10);
  return uVar2;
}


