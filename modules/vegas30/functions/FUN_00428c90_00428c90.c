/* Module: vegas30.exe
   Function: FUN_00428c90
   Address: 00428c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428c90(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) &&
     (*(uint *)(iVar1 + 0x90) != param_1)) {
    local_50 = 0;
    local_60 = *(undefined4 *)(iVar1 + 0x100);
    local_4c = 0;
    local_48 = 0;
    local_5c = *(undefined4 *)(iVar1 + 0x104);
    local_44 = 0;
    uVar5 = 0;
    local_58 = *(undefined4 *)(iVar1 + 0x108);
    piVar4 = (int *)(iVar1 + 0x94);
    local_54 = *(undefined4 *)(iVar1 + 0x10c);
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        puVar2 = &local_60;
        if (uVar5 != param_1) {
          puVar2 = &local_50;
        }
        (**(code **)(*(int *)*piVar4 + 0x5c))(puVar2,0);
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar5 < 2);
    *(uint *)(iVar1 + 0x90) = param_1;
    if ((param_2 != 0) && (param_1 == 1)) {
      uVar3 = FUN_005b9fc0(*(undefined4 *)(iVar1 + 0x80),1,1);
      FUN_005ba6d0(*(undefined4 *)(iVar1 + 0x80),1,0,param_3,param_2,0,0,0);
      FUN_005ba030(*(undefined4 *)(iVar1 + 0x80),uVar3,1,0);
    }
    if (DAT_0064a4a4 != 0) {
      FUN_005ba670(*(undefined4 *)(iVar1 + 0x80),param_1,0,auStack_40,auStack_68,0);
      FUN_00562a50(&DAT_0064b538,auStack_68,uStack_28,uStack_24);
    }
    FUN_00427a70(2,0);
    FUN_00428f30(0,0);
    if (param_1 != 1) {
      FUN_00427f90(0xffffffff,0xffffffff,param_1,0);
    }
  }
  return;
}


