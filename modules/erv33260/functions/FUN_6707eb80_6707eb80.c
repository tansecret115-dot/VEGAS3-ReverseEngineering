/* Module: erv33260.dll
   Function: FUN_6707eb80
   Address: 6707eb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6707eb80(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  *(undefined4 *)((int)this + 4) = param_3;
  piVar4 = param_1;
  piVar6 = (int *)((int)this + 0x10);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  *(undefined4 *)((int)this + 8) = param_2;
  iVar3 = *(int *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x10) == 2) {
    iVar3 = iVar3 - *(int *)((int)this + 0x150);
    *(int *)((int)this + 0x144) = iVar3;
    if (iVar3 < 0) {
      *(int *)((int)this + 0x144) = *(int *)((int)this + 0x158) + iVar3;
    }
    if (*(int *)((int)this + 0x140) < *(int *)((int)this + 0x144)) {
      *(undefined4 *)((int)this + 0x144) = 0;
    }
  }
  else {
    iVar7 = *(int *)((int)this + 0x154);
    if (iVar3 != iVar7) {
      *(int *)((int)this + 0x154) = iVar3;
      iVar3 = iVar3 - iVar7;
      *(int *)((int)this + 0x150) = iVar7;
      *(int *)((int)this + 0x140) = iVar3;
      if (iVar3 < 0) {
        *(int *)((int)this + 0x140) = *(int *)((int)this + 0x158) + iVar3;
      }
    }
  }
  iVar3 = *(int *)((int)this + 0x140);
  iVar7 = *(int *)((int)this + 0x144);
  *(int *)((int)this + 0xb0) = iVar3;
  *(int *)((int)this + 0xb4) = iVar7;
  if (iVar3 < 1) {
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
  }
  else {
    *(int *)((int)this + 0xb8) = (iVar7 << 0xe) / iVar3;
    *(int *)((int)this + 0xbc) = ((iVar3 - iVar7) * 0x4000) / iVar3;
  }
  *(undefined4 *)((int)this + 0x60) = param_4;
  *(undefined4 *)((int)this + 0x5c) = param_5;
  *(undefined4 *)((int)this + 100) = param_6;
  *(int *)((int)this + 200) = *param_1;
  *(bool *)((int)this + 0x138) = param_1[6] != 0;
  if (*(int *)((int)this + 200) == 2) {
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x124);
    if (*(int *)((int)this + 0xcc) != 2) {
      uVar1 = *(undefined4 *)((int)this + 0x78);
      *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x74);
      *(undefined4 *)((int)this + 0x74) = uVar1;
      uVar1 = *(undefined4 *)((int)this + 0x8c);
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x88);
      *(undefined4 *)((int)this + 0x88) = uVar1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x68) = param_6;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0xa4) * *(int *)((int)this + 0xa0) != 0) {
    iVar3 = 0;
    do {
      *(uint *)((int)this + 0x13c) = (uint)*(byte *)(param_1 + 0x12);
      if ((*(int *)((int)this + 200) == 0) || (*(int *)(*(int *)((int)this + 0x5c) + 0x28) == 0)) {
        iVar7 = *(int *)((int)this + 0x8c);
        uVar2 = (undefined1)param_1[0x12];
      }
      else {
        iVar7 = *(int *)((int)this + 0x8c);
        uVar2 = *(undefined1 *)(*(int *)(*(int *)((int)this + 0x5c) + 0x24) + uVar5);
      }
      *(undefined1 *)(iVar3 + 4 + iVar7) = uVar2;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(iVar3 + 6 + *(int *)((int)this + 0x8c)) = 4;
      iVar3 = iVar3 + 0xc;
    } while (uVar5 < (uint)(*(int *)((int)this + 0xa4) * *(int *)((int)this + 0xa0)));
  }
  if (*param_1 == 1) {
    uVar1 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)((int)this + 0x70) = uVar1;
    *(undefined1 *)((int)this + 0x128) = *(undefined1 *)((int)this + 0x129);
    *(undefined1 *)((int)this + 0x129) = 0;
  }
  if (*(int *)((int)this + 200) != 0) {
    FUN_6707ef40((int)this);
  }
  if (*(char *)((int)this + 0x138) != '\0') {
    FUN_6707f240((int)this);
    FUN_6707d6b0(*(void **)((int)this + 4),(undefined4 *)((int)this + 0x130),
                 (undefined4 *)((int)this + 0x134));
  }
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  return 0;
}


