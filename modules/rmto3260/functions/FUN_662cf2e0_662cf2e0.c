/* Module: rmto3260.dll
   Function: FUN_662cf2e0
   Address: 662cf2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_662cf2e0(void *this,byte *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_70 [48];
  undefined4 local_40;
  undefined1 local_38 [5];
  byte local_33;
  undefined4 local_32 [7];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c [2];
  
  FUN_662c7500(local_70,param_1,param_2);
  FUN_662f0810(*(int **)((int)this + 0x28),s_Codec__6630aa68);
  puVar3 = local_32;
  puVar4 = local_c;
  for (uVar2 = (uint)(local_33 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = local_33 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  piVar1 = *(int **)((int)this + 0x28);
  *(undefined1 *)((int)local_c + (uint)local_33) = 0;
  FUN_662f0810(piVar1,&DAT_6630a680);
  FUN_662f0810(*(int **)((int)this + 0x28),s_InterleaveCode__6630aa54);
  piVar1 = *(int **)((int)this + 0x28);
  puVar3 = (undefined4 *)((int)local_38 + 1);
  puVar4 = local_c;
  for (uVar2 = ((ushort)local_38._0_2_ & 0xff) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = (ushort)local_38._0_2_ & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_662f0810(piVar1,&DAT_6630aa4c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_flavor__hu_6630aa40);
  uStack_10 = 0;
  local_14 = local_40;
  FUN_662f0810(*(int **)((int)this + 0x28),s_sampleRate__f_6630aa30);
  FUN_662f0810(*(int **)((int)this + 0x28),s_sampleSize__hu_6630aa20);
  FUN_662f0810(*(int **)((int)this + 0x28),s_numChannels__hu_6630aa0c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_BytesPerMinute__u_6630a9f8);
  return 0;
}


