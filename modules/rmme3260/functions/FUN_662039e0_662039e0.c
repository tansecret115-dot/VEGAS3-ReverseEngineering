/* Module: rmme3260.dll
   Function: FUN_662039e0
   Address: 662039e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662039e0(void *this,char *param_1,short param_2,undefined2 param_3,int param_4)

{
  void *this_00;
  int iVar1;
  void *local_8;
  
  iVar1 = -0x7fffbffb;
  if ((*(int *)((int)this + 0x50) != 0) &&
     (*(ushort *)((int)this + 0x4c) + 1 <= (uint)*(ushort *)((int)this + 0x4e))) {
    local_8 = (void *)0x0;
    if (param_4 == 0) {
      iVar1 = FUN_66203ac0(this,param_2,(int *)&local_8);
    }
    else {
      iVar1 = FUN_66203b40(this,param_2,(int *)&local_8);
    }
    if ((-1 < iVar1) && (iVar1 != 0x40012)) {
      iVar1 = FUN_662064a0(local_8,*(ushort *)((int)this + 0x4c),param_3);
      if (-1 < iVar1) {
        this_00 = (void *)((int)this + 0x54);
        if (*(int *)(*(int *)((int)this + 0x54) + -8) == 0) {
          FUN_66250410(this_00,param_1);
        }
        else {
          FUN_66250640(this_00,param_1);
        }
        FUN_66250640(this_00,&DAT_6626f1e4);
        *(undefined2 *)(*(int *)((int)this + 0x50) + (uint)*(ushort *)((int)this + 0x4c) * 2) =
             param_3;
        *(short *)((int)this + 0x4c) = *(short *)((int)this + 0x4c) + 1;
      }
    }
  }
  return iVar1;
}


