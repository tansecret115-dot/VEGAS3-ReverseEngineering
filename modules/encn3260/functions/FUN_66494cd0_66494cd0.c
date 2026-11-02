/* Module: encn3260.dll
   Function: FUN_66494cd0
   Address: 66494cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66494cd0(void *this,int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *this_00;
  
  piVar1 = *(int **)((int)this + 10);
  if (piVar1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  uVar3 = piVar1[3];
  if (0x3fff < uVar3) {
    FUN_6648daf0(*(int *)((int)this + 4));
    return -0x7fffbffb;
  }
  if (*(int *)((int)this + 0x42) == 0) {
    if ((*(int *)((int)this + 0x26) == 0) || (*(short *)((int)this + 0x78) != 0)) {
      if ((*(int *)((int)this + 0x206) != 0) && (*(int *)((int)this + 0x20a) != 0)) {
        while (uVar3 != 0) {
          puVar6 = (undefined4 *)FUN_664c0540(piVar1);
          if (puVar6 != (undefined4 *)0x0) {
            piVar1 = (int *)puVar6[7];
            *puVar6 = &PTR_FUN_664dc580;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
            }
            operator_delete(puVar6);
          }
          piVar1 = *(int **)((int)this + 10);
          uVar3 = piVar1[3];
        }
        puVar6 = *(undefined4 **)((int)this + 10);
        if (puVar6 != (undefined4 *)0x0) {
          FUN_664c03a0(puVar6);
          operator_delete(puVar6);
        }
        this_00 = operator_new(0x10);
        if (this_00 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_664c0370(this_00,0x400);
        }
        *(undefined4 **)((int)this + 10) = puVar6;
        *(undefined4 *)((int)this + 0x20a) = 0;
        *(undefined4 *)((int)this + 0x26) = 0;
        *(undefined4 *)((int)this + 0x2a) = 0;
        *(undefined4 *)((int)this + 0x2e) = 0;
        *(undefined4 *)((int)this + 0x32) = 0;
        *(undefined4 *)((int)this + 0x36) = 0;
        *(undefined4 *)((int)this + 0x3a) = 1;
        *(undefined4 *)((int)this + 0x3e) = 0;
        *(undefined4 *)((int)this + 0x42) = 0;
        *(undefined4 *)((int)this + 0x4a) = 0;
        *(undefined4 *)((int)this + 0x46) = 0;
        *(undefined4 *)((int)this + 0x4e) = 0;
        *(undefined4 *)((int)this + 0x52) = 0;
        *(undefined2 *)((int)this + 0x6a) = 0;
        *(undefined2 *)((int)this + 0x6c) = 0;
        *(undefined2 *)((int)this + 0x6e) = 0;
        *(undefined2 *)((int)this + 0x70) = 0;
        *(undefined2 *)((int)this + 0x74) = 0;
        *(undefined2 *)((int)this + 0x76) = 0;
        *(undefined2 *)((int)this + 0x78) = 0;
        *(undefined4 *)((int)this + 0x1ee) = 0;
        *(undefined4 *)((int)this + 0x1f2) = 0;
        uVar2 = (**(code **)(*param_1 + 0x14))();
        FUN_66494c00(this,uVar2);
        FUN_66494cd0(this,param_1);
        return 0;
      }
      FUN_664baab0((void *)((int)this + 0xe),param_1);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x14))();
      iVar4 = 0;
      if (*(int *)((int)this + 0x2e) == 0) {
        iVar4 = FUN_66494ed0(this,param_1);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      if ((*(int *)((int)this + 0x2a) != 0) &&
         ((uVar5 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x76),uVar3),
          *(int *)((int)this + 0x32) != 0 || (uVar5 < 0x4000)))) {
        uVar5 = FUN_66496340(this);
        if (uVar5 == 0) {
          if (*(int *)((int)this + 0x32) != 0) {
            *(undefined4 *)((int)this + 0x32) = 0;
          }
          *(undefined4 *)((int)this + 0x2a) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x32) = 1;
        }
      }
      if (*(int *)((int)this + 0x2e) != 0) {
        *(undefined4 *)((int)this + 0x2e) = 0;
        uVar2 = (undefined2)uVar3;
        *(undefined2 *)((int)this + 0x70) = uVar2;
        *(undefined2 *)((int)this + 0x6e) = uVar2;
        *(undefined2 *)((int)this + 0x72) = uVar2;
        FUN_66494ed0(this,param_1);
        return 0;
      }
    }
  }
  return 0;
}


