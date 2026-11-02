/* Module: vegas30.exe
   Function: FUN_0055b8c0
   Address: 0055b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055b8c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *(int *)(param_2 + 4) = param_1;
  if (*(int *)(param_1 + 0x50) == 0) goto LAB_0055b980;
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x18) == 0) {
LAB_0055b909:
    *(undefined4 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_2 + 0x164) = 0;
  }
  else {
    iVar1 = FUN_005f13f0(3);
    if (iVar1 == 0) goto LAB_0055b909;
    *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(iVar1 + 0x4c);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(LPCSTR *)(iVar1 + 0x20) == (LPCSTR)0x0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x50fe);
    SfPrintF(param_2 + 8,uVar2,iVar1);
  }
  else {
    lstrcpynA((LPSTR)(param_2 + 8),*(LPCSTR *)(iVar1 + 0x20),0x104);
    *(undefined1 *)(param_2 + 0x10b) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x18) != 0) {
    uVar2 = FUN_005f2d10();
    *(undefined4 *)(param_2 + 0x114) = uVar2;
  }
  *(undefined4 *)(param_2 + 0x110) = 1;
LAB_0055b980:
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_1 + 0x210);
  uVar5 = *(uint *)(param_2 + 0x118) & 0xfffffffe;
  *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_1 + 0x214);
  uVar3 = *(uint *)(param_1 + 0x10) >> 1 & 1 | uVar5;
  *(uint *)(param_2 + 0x118) = uVar3;
  uVar4 = *(uint *)(param_1 + 0x10) >> 7 & 2;
  uVar3 = CONCAT31((int3)(uVar5 >> 8),(char)uVar3);
  *(uint *)(param_2 + 0x118) = uVar4 | uVar3 & 0xfffffffd;
  uVar3 = uVar3 & 0xfffffff9;
  uVar4 = *(uint *)(param_1 + 0x10) >> 1 & 4 | uVar4 | uVar3;
  *(uint *)(param_2 + 0x118) = uVar4;
  *(uint *)(param_2 + 0x118) =
       *(uint *)(param_1 + 0x10) >> 2 & 8 | CONCAT31((int3)(uVar3 >> 8),(char)uVar4) & 0xfffffff7;
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_1 + 0x13c);
  uVar3 = *(uint *)(param_2 + 0x118);
  uVar4 = (*(uint *)(param_1 + 0xf8) & 1) << 4;
  *(uint *)(param_2 + 0x118) = uVar4 | uVar3 & 0xffffffef;
  uVar5 = *(uint *)(param_1 + 0xf8) >> 2 & 0x20;
  *(uint *)(param_2 + 0x118) = uVar5 | uVar4 | uVar3 & 0xffffffcf;
  *(uint *)(param_2 + 0x118) =
       *(uint *)(param_1 + 0xf8) >> 2 & 0x40 | uVar5 | uVar4 | uVar3 & 0xffffff8f;
  return;
}


