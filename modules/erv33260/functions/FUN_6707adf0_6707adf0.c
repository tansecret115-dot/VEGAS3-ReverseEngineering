/* Module: erv33260.dll
   Function: FUN_6707adf0
   Address: 6707adf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6707adf0(void *this,int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x18) == 0x17) {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      *(uint *)((int)this + 0x50) = (uint)(*(int *)((int)this + 0x20) != 0);
    }
    else if (iVar3 == 1) {
      *(undefined4 *)((int)this + 0x50) = 2;
    }
    else if (iVar3 == 2) {
      *(undefined4 *)((int)this + 0x50) = 3;
    }
    *(int *)((int)this + 0x54) = param_1[0xf];
    *(int *)((int)this + 0x58) = param_1[0x10];
    *(char *)((int)this + 100) = (char)param_1[0x12];
    *(int *)((int)this + 0x60) = param_1[3];
    *(undefined1 *)((int)this + 0x65) = *(undefined1 *)((int)param_1 + 0x49);
    *(undefined1 *)((int)this + 0x66) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
    FUN_6707b3a0(this,(int)param_1);
    iVar3 = FUN_6707b320(this,(uint)param_1,(byte *)((int)this + 0x67));
    if (iVar3 == 0) {
      FUN_6707b060(this,0,(uint)*(byte *)(param_1 + 0x12));
      return 0;
    }
  }
  else {
    uVar4 = 0;
    bVar2 = false;
    if ((param_1[1] != 0xb0) || (param_1[2] != 0x90)) {
      bVar2 = true;
      uVar4 = 2;
    }
    iVar3 = param_1[3];
    bVar1 = *(byte *)(param_1 + 0x12);
    FUN_6707d6f0((int)this,1,0x18);
    FUN_6707d750(this,uVar4 | (iVar3 << 5 | (uint)bVar1) << 2,0x1f);
    if (*param_1 == 0) {
      iVar3 = 3;
      uVar4 = 1;
    }
    else {
      if (*param_1 == 2) {
        iVar3 = 5;
      }
      else {
        iVar3 = 1;
      }
      uVar4 = 0;
    }
    FUN_6707d750(this,uVar4,iVar3);
    if (bVar2) {
      FUN_6707af40(this,(int)param_1);
    }
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 8);
    FUN_6707b3a0(this,(int)param_1);
    iVar3 = 0;
  }
  return iVar3;
}


