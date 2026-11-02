/* Module: erv23260.dll
   Function: FUN_637f5870
   Address: 637f5870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5870(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x10;
  iVar3 = *(int *)((int)this + 0xa4);
  iVar4 = param_1;
  do {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar4) = *(undefined1 *)(iVar1 + iVar3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    iVar4 = iVar4 + 0x10;
    iVar3 = iVar3 + *(int *)((int)this + 0x1c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar4 = *(int *)((int)this + 0xa8);
  iVar2 = 8;
  iVar3 = param_1 + 0x100;
  do {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = *(undefined1 *)(iVar1 + iVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    iVar3 = iVar3 + 8;
    iVar4 = iVar4 + *(int *)((int)this + 0x1c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar4 = *(int *)((int)this + 0xac);
  iVar3 = param_1 + 0x140;
  iVar2 = 8;
  do {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = *(undefined1 *)(iVar1 + iVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    iVar3 = iVar3 + 8;
    iVar4 = iVar4 + *(int *)((int)this + 0x1c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


