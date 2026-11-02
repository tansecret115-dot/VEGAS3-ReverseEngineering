/* Module: pngu3266.dll
   Function: FUN_6061e560
   Address: 6061e560
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061e560(void *this,int param_1)

{
  byte *pbVar1;
  DWORD DVar2;
  void *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  FUN_6061e660((int)this);
  FUN_60623310((undefined4 *)((int)this + 0x20));
  DVar2 = GetTickCount();
  *(DWORD *)((int)this + 0x28) = DVar2;
  if (*(int *)((int)this + 0x30) != 0) {
    if (*(int *)((int)this + 0x4c) == 0) {
      this_00 = operator_new(0x16);
      if (this_00 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_6061ed30(this_00,this);
      }
      *(undefined4 *)((int)this + 0x4c) = uVar3;
    }
    if (*(int *)((int)this + 0x4c) == 0) {
      return -0x7ff8fff2;
    }
    *(undefined4 *)(*(int *)((int)this + 0x4c) + 0xc) = 0x14;
    iVar5 = FUN_6061ed70(*(int **)((int)this + 0x4c));
    uVar3 = FUN_6061ee20(*(int **)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x50) = uVar3;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    puVar4 = operator_new(0x19);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_6061e960(puVar4);
    }
    *(undefined4 *)((int)this + 0x54) = uVar3;
  }
  if (*(void **)((int)this + 0x54) != (void *)0x0) {
    FUN_6061e9b0(*(void **)((int)this + 0x54),this);
    FUN_6061ec20();
    *(undefined4 *)((int)this + 0x58) = 0x14;
    FUN_6061ec30(*(void **)((int)this + 0x54),0x14);
    if (param_1 != 0) {
      pbVar1 = (byte *)(*(int *)((int)this + 0x54) + 0xc);
      *pbVar1 = *pbVar1 | 4;
    }
    FUN_6061eb40(*(UINT_PTR **)((int)this + 0x54));
    return iVar5;
  }
  return -0x7ff8fff2;
}


