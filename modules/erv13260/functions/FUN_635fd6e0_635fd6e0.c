/* Module: erv13260.dll
   Function: FUN_635fd6e0
   Address: 635fd6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fd6e0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    puVar1 = (uint *)(iVar5 * 0x40 + param_1);
    uVar3 = *puVar1;
    if (((puVar1[7] | puVar1[6] | puVar1[5] | puVar1[4] | puVar1[3] | puVar1[2] | puVar1[1] |
          puVar1[0xf] | puVar1[0xe] | puVar1[0xd] | puVar1[0xc] | puVar1[0xb] | puVar1[10] |
          puVar1[9] | puVar1[8] | uVar3) & 0xffffff00) != 0) {
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *puVar1 = uVar3;
      uVar3 = puVar1[1];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[1] = uVar3;
      uVar3 = puVar1[2];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[2] = uVar3;
      uVar3 = puVar1[3];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[3] = uVar3;
      uVar3 = puVar1[4];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[4] = uVar3;
      uVar3 = puVar1[5];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[5] = uVar3;
      uVar3 = puVar1[6];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[6] = uVar3;
      uVar3 = puVar1[7];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[7] = uVar3;
      uVar3 = puVar1[8];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[8] = uVar3;
      uVar3 = puVar1[9];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[9] = uVar3;
      uVar3 = puVar1[10];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[10] = uVar3;
      uVar3 = puVar1[0xb];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[0xb] = uVar3;
      uVar3 = puVar1[0xc];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[0xc] = uVar3;
      uVar3 = puVar1[0xd];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[0xd] = uVar3;
      uVar3 = puVar1[0xe];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[0xe] = uVar3;
      uVar3 = puVar1[0xf];
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      puVar1[0xf] = uVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  iVar5 = 0;
  do {
    iVar4 = (iVar5 + 0x28) * 0x20;
    puVar2 = (uint *)((iVar5 + 0x20) * 0x20 + param_1);
    puVar1 = (uint *)(iVar4 + param_1);
    if (((*(uint *)(iVar4 + 0x1c + param_1) | puVar2[7] | puVar1[6] | puVar2[6] | puVar1[5] |
          puVar2[5] | puVar1[4] | puVar2[4] | puVar1[3] | puVar2[3] | puVar1[2] | puVar2[2] |
          puVar1[1] | puVar2[1] | *puVar2 | *puVar1) & 0xffffff00) != 0) {
      uVar3 = *puVar2;
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *puVar2 = uVar3;
      iVar4 = iVar5 * 0x20 + param_1;
      uVar3 = *(uint *)(iVar4 + 0x404);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x404) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x408);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x408) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x40c);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x40c) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x410);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x410) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x414);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x414) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x418);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x418) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x41c);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x41c) = uVar3;
      uVar3 = *puVar1;
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *puVar1 = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x504);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x504) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x508);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x508) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x50c);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x50c) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x510);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x510) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x514);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x514) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x518);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x518) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x51c);
      if ((int)(((int)uVar3 < 0) - 1 & uVar3) < 0x100) {
        uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
      }
      else {
        uVar3 = 0xff;
      }
      *(uint *)(iVar4 + 0x51c) = uVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return;
}


