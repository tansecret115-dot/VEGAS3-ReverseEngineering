/* Module: encn3260.dll
   Function: FUN_664947a0
   Address: 664947a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664947a0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    *(undefined2 *)((int)this + 0x16) = (undefined2)param_2;
  }
  puVar1 = *(undefined4 **)this;
  iVar3 = puVar1[3];
  do {
    if (iVar3 == 0) {
      return;
    }
    piVar2 = (int *)FUN_664c04d0(puVar1);
    piVar5 = (int *)*piVar2;
    if (piVar5 == (int *)0x0) {
      FUN_664c0540(*(int **)this);
      *(short *)((int)this + 0x14) = *(short *)((int)this + 0x14) + 1;
      if ((uint)*(ushort *)((int)this + 0x14) == *(uint *)((int)this + 0x10)) {
LAB_66494851:
        *(undefined2 *)((int)this + 0x14) = 0;
      }
    }
    else {
      if (param_1 == 0) {
        iVar3 = (**(code **)(*piVar5 + 0x1c))(piVar5);
        if ((uint)(param_2 - iVar3) <= *(uint *)((int)this + 4)) {
          return;
        }
        if (piVar5[2] == 10) {
          return;
        }
      }
      else {
        uVar4 = FUN_66494890(this,(uint)*(ushort *)((int)this + 0x16),
                             CONCAT22((short)((uint)piVar2 >> 0x10),
                                      *(undefined2 *)((int)this + 0x14)));
        if (uVar4 < 0x4000) {
          return;
        }
      }
      piVar5 = (int *)FUN_664c0540(*(int **)this);
      (**(code **)(*piVar5 + 4))(piVar5);
      *(short *)((int)this + 0x14) = *(short *)((int)this + 0x14) + 1;
      if ((uint)*(ushort *)((int)this + 0x14) == *(uint *)((int)this + 0x10)) goto LAB_66494851;
    }
    puVar1 = *(undefined4 **)this;
    iVar3 = puVar1[3];
  } while( true );
}


