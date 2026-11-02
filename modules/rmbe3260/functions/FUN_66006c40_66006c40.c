/* Module: rmbe3260.dll
   Function: FUN_66006c40
   Address: 66006c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66006c40(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  char *local_24 [3];
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  FUN_6605b650(local_24);
  (**(code **)(**(int **)(param_1 + 0x118) + 0x134))();
  uVar5 = 0x100;
  iVar1 = **(int **)(param_1 + 0x114);
  iVar2 = FUN_6605bc10(local_24,0xff);
  (**(code **)(iVar1 + 0x118))(iVar2,uVar5);
  FUN_6605bc90(local_24,-1);
  local_14 = atoi(local_24[0]);
  uVar5 = 0x100;
  iVar1 = **(int **)(param_1 + 0x110);
  iVar2 = FUN_6605bc10(local_24,0xff);
  (**(code **)(iVar1 + 0x118))(iVar2,uVar5);
  FUN_6605bc90(local_24,-1);
  local_18 = atoi(local_24[0]);
  local_18 = local_18 * 1000;
  uVar4 = 0;
  do {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x120) + 0xc))
                      (*(int **)(param_1 + 0x120),uVar4,&local_c);
    if ((uVar3 & 0x80000000) == 0) {
      uVar3 = (**(code **)(*local_c + 0x10))(local_c,0xc,&local_10);
      if ((uVar3 & 0x80000000) == 0) {
        uVar3 = (**(code **)*local_10)(local_10,&DAT_66065c38,&local_8);
        if ((uVar3 & 0x80000000) == 0) {
          (**(code **)(*local_8 + 0x38))(local_8,local_14);
          (**(code **)(*local_8 + 0x40))(local_8,local_18);
        }
      }
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if ((int)uVar3 < 0) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 9);
  FUN_6605b770((int *)local_24);
  return 1;
}


