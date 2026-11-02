/* Module: erv33260.dll
   Function: FUN_6707b060
   Address: 6707b060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707b060(void *this,int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x18) == 0x17) {
    if (*(int *)((int)this + 0x5c) < param_1) {
      if (param_1 == 0) {
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 8);
      }
      else {
        FUN_6707d7c0((int)this);
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 4);
      }
      *(undefined4 *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68) * 8) = 1;
      *(int *)(*(int *)((int)this + 0x6c) + 4 + *(int *)((int)this + 0x68) * 8) =
           *(int *)((int)this + 0x70) - *(int *)((int)this + 8);
      uVar2 = 0;
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
      piVar1 = &DAT_67090330;
      do {
        if (*piVar1 == 2) break;
        piVar1 = piVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (piVar1 < &DAT_67090350);
      if (7 < uVar2) {
        uVar2 = 0;
      }
      FUN_6707d6f0((int)this,uVar2,3);
      FUN_6707d6f0((int)this,*(int *)((int)this + 0x50),2);
      FUN_6707d6f0((int)this,0,1);
      *(char *)((int)this + 100) = (char)param_2;
      FUN_6707d6f0((int)this,param_2 & 0xff,5);
      if (*(int *)((int)this + 0x18) == 0x17) {
        if ((*(int *)((int)this + 0x50) == 1) || (*(int *)((int)this + 0x50) == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 0x58);
        }
        FUN_6707d6f0((int)this,iVar3,1);
      }
      FUN_6707d6f0((int)this,*(int *)((int)this + 0x60),0xd);
      if (*(int *)((int)this + 0x78) != 0) {
        FUN_6707d6f0((int)this,(uint)*(byte *)((int)this + 0x67),*(int *)((int)this + 0x74));
      }
      *(int *)((int)this + 0x5c) = param_1;
      FUN_6707d6f0((int)this,param_1,*(int *)((int)this + 0x2c));
      FUN_6707d6f0((int)this,*(int *)((int)this + 0x54),1);
      return;
    }
  }
  else if (param_1 != 0) {
    FUN_6707d7c0((int)this);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 4);
    FUN_6707af30((int)this);
    FUN_6707d6f0((int)this,1,1);
    FUN_6707d6f0((int)this,param_1,*(int *)((int)this + 0x2c));
    if (0xb < *(uint *)((int)this + 0x2c)) {
      FUN_6707d6f0((int)this,1,1);
    }
    FUN_6707d6f0((int)this,param_2,5);
    FUN_6707d6f0((int)this,1,1);
    FUN_6707d6f0((int)this,0,2);
    *(undefined4 *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68) * 8) = 1;
    *(int *)(*(int *)((int)this + 0x6c) + 4 + *(int *)((int)this + 0x68) * 8) =
         *(int *)((int)this + 0x70) - *(int *)((int)this + 8);
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
  }
  return;
}


