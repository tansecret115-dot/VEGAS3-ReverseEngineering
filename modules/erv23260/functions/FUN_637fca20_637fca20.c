/* Module: erv23260.dll
   Function: FUN_637fca20
   Address: 637fca20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fca20(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 7) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  *(int *)((int)this + 0x78) = iVar2;
  switch(iVar2) {
  case 1:
    *(undefined4 *)((int)this + 0x70) = 8;
    *(undefined4 *)((int)this + 0x6c) = 6;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x70) = 0xb;
    *(undefined4 *)((int)this + 0x6c) = 9;
    break;
  case 3:
    *(undefined4 *)((int)this + 0x70) = 0x16;
    *(undefined4 *)((int)this + 0x6c) = 0x12;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x70) = 0x2c;
    *(undefined4 *)((int)this + 0x6c) = 0x24;
    break;
  case 5:
    *(undefined4 *)((int)this + 0x70) = 0x58;
    *(undefined4 *)((int)this + 0x6c) = 0x48;
    break;
  case 6:
    *(uint *)((int)this + 0x70) = *(int *)(param_1 + 0x80) + 0xfU >> 4;
    *(uint *)((int)this + 0x6c) = *(int *)(param_1 + 0x84) + 0xfU >> 4;
    break;
  default:
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  iVar2 = 0;
  puVar1 = &DAT_638293b0;
  do {
    if (*(int *)((int)this + 0x70) * *(int *)((int)this + 0x6c) - 1U <= *puVar1) break;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_638293c4);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(&UNK_638293c8 + iVar2 * 4);
  return;
}


