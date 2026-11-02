/* Module: rmbe3260.dll
   Function: FUN_66006a50
   Address: 66006a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66006a50(CPNWindow *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_10 [3];
  
  FUN_6605b650(local_10);
  uVar4 = 0x100;
  iVar3 = **(int **)(param_1 + 0x114);
  iVar1 = FUN_6605bc10(local_10,0xff);
  (**(code **)(iVar3 + 0x118))(iVar1,uVar4);
  uVar2 = atoi(local_10[0]);
  FUN_6605bc90(local_10,-1);
  if (60000 < uVar2) {
    FUN_66006b80(param_1,0x69);
    FUN_6605b770((int *)local_10);
    return 0;
  }
  uVar4 = 0x100;
  iVar3 = **(int **)(param_1 + 0x110);
  iVar1 = FUN_6605bc10(local_10,0xff);
  (**(code **)(iVar3 + 0x118))(iVar1,uVar4);
  iVar3 = atoi(local_10[0]);
  FUN_6605bc90(local_10,-1);
  if ((uint)(iVar3 * 1000) < 5000) {
    FUN_66006b80(param_1,0x6a);
    FUN_6605b770((int *)local_10);
    return 0;
  }
  if (25000 < (uint)(iVar3 * 1000)) {
    FUN_66006b80(param_1,0x6b);
    FUN_6605b770((int *)local_10);
    return 0;
  }
  FUN_6605b770((int *)local_10);
  return 1;
}


