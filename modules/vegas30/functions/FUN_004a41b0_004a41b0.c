/* Module: vegas30.exe
   Function: FUN_004a41b0
   Address: 004a41b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a41b0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1 + 0x80;
  FUN_004590f0(iVar1,*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 0x650) = param_1 + 0xf18;
  *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) & 0xfffffffb | 3;
  *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 1000) | 0x8000000;
  *(uint *)(param_1 + 0x6d4) = *(uint *)(param_1 + 0x6d4) | 0x200;
  uVar4 = 1;
  *(undefined4 *)(param_1 + 0xcc4) = 1;
  *(undefined4 *)(param_1 + 0xcc8) = 1;
  *(undefined4 *)(param_1 + 0xccc) = 1;
  *(undefined ***)(param_1 + 0x3e4) = &PTR_LAB_0063ebd8;
  *(undefined ***)(param_1 + 0x890) = &PTR_LAB_0063e248;
  *(undefined4 *)(param_1 + 0x484) = 0x66;
  *(undefined ***)(param_1 + 0x740) = &PTR_LAB_0063e988;
  *(uint *)(param_1 + 0x744) = *(uint *)(param_1 + 0x744) | 0xa00000d0;
  *(undefined ***)(param_1 + 0x938) = &PTR_LAB_0063e9b0;
  *(undefined ***)(param_1 + 0x9e0) = &PTR_LAB_0063e9d8;
  *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) | 0x20000000;
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 0xb0000000;
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) | 0xf0000000;
  *(undefined ***)(param_1 + 0xb60) = &PTR_LAB_0063e508;
  *(undefined ***)(param_1 + 0xb64) = &PTR_LAB_0063e530;
  *(undefined ***)(param_1 + 0xb68) = &PTR_LAB_0063e558;
  *(undefined ***)(param_1 + 0xb6c) = &PTR_LAB_0063e580;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0xb60);
  *(undefined4 *)(param_1 + 0x688) = 1;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0xc1c) = 0x18;
  *(undefined4 *)(param_1 + 0xc34) = 0;
  *(undefined4 *)(param_1 + 0xc30) = 1;
  *(undefined4 *)(param_1 + 0xc18) = 1;
  *(undefined4 *)(param_1 + 0xc48) = DAT_0064b138;
  *(undefined ***)(param_1 + 0xb30) = &PTR_FUN_0063e5f8;
  *(undefined ***)(param_1 + 0xb34) = &PTR_LAB_0063e618;
  FUN_004a4020(iVar1,DAT_006476c8,DAT_006476cc);
  puVar5 = (undefined4 *)(param_1 + 0xd4);
  do {
    pcVar2 = (code *)**(undefined4 **)*puVar5;
    if ((pcVar2 != (code *)0x0) && (iVar3 = (*pcVar2)(iVar1,(undefined4 *)*puVar5,0), iVar3 == 0)) {
      return 0xffffffff;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0x10);
  pcVar2 = *(code **)**(undefined4 **)(param_1 + 0xd0);
  if ((pcVar2 != (code *)0x0) &&
     (iVar3 = (*pcVar2)(iVar1,*(undefined4 **)(param_1 + 0xd0),0), iVar3 == 0)) {
    return 0xffffffff;
  }
  FUN_004a4e80(iVar1);
  return 0;
}


