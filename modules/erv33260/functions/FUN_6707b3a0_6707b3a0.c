/* Module: erv33260.dll
   Function: FUN_6707b3a0
   Address: 6707b3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707b3a0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0x80) && (*(int *)(param_1 + 8) == 0x60)) {
    *(undefined4 *)((int)this + 0x28) = 8;
    *(undefined4 *)((int)this + 0x24) = 6;
  }
  else if ((iVar2 == 0xb0) && (*(int *)(param_1 + 8) == 0x90)) {
    *(undefined4 *)((int)this + 0x28) = 0xb;
    *(undefined4 *)((int)this + 0x24) = 9;
  }
  else if ((iVar2 == 0x160) && (*(int *)(param_1 + 8) == 0x120)) {
    *(undefined4 *)((int)this + 0x28) = 0x16;
    *(undefined4 *)((int)this + 0x24) = 0x12;
  }
  else if ((iVar2 == 0x2c0) && (*(int *)(param_1 + 8) == 0x240)) {
    *(undefined4 *)((int)this + 0x28) = 0x2c;
    *(undefined4 *)((int)this + 0x24) = 0x24;
  }
  else if ((iVar2 == 0x580) && (*(int *)(param_1 + 8) == 0x480)) {
    *(undefined4 *)((int)this + 0x28) = 0x58;
    *(undefined4 *)((int)this + 0x24) = 0x48;
  }
  else {
    *(uint *)((int)this + 0x28) = iVar2 + 0xfU >> 4;
    *(uint *)((int)this + 0x24) = *(int *)(param_1 + 8) + 0xfU >> 4;
  }
  puVar1 = &DAT_67090450;
  iVar2 = 0;
  do {
    if (*(int *)((int)this + 0x28) * *(int *)((int)this + 0x24) - 1U <= *puVar1) break;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_67090464);
  *(undefined4 *)((int)this + 0x2c) = (&DAT_67090468)[iVar2];
  return;
}


