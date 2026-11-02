/* Module: encn3260.dll
   Function: FUN_66495990
   Address: 66495990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66495990(void *this,uint param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_c [2];
  
  if (*(int *)((int)this + 0x36) == 0) {
    *(short *)((int)this + 0x74) = (short)param_1;
    *(undefined4 *)((int)this + 0x36) = 1;
    uVar3 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x6e),param_1);
    if ((param_3 != 0) && (uVar3 < 0x4001)) {
      piVar4 = operator_new(0x34);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar5 = FUN_66495f50(this,local_c);
        iVar1 = *piVar5;
        iVar2 = piVar5[1];
        *(short *)(piVar4 + 1) = (short)param_1;
        *(undefined2 *)((int)piVar4 + 6) = param_2;
        piVar4[10] = iVar1;
        piVar4[6] = 0;
        piVar4[2] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        *piVar4 = (int)&PTR_FUN_664de298;
        piVar4[8] = param_4;
        piVar4[9] = 0;
        piVar4[3] = 0;
        piVar4[7] = 0;
        piVar4[0xb] = iVar2;
        piVar4[0xc] = 0;
      }
      FUN_66494cd0(this,piVar4);
      *(undefined2 *)((int)this + 0x6c) = param_2;
      FUN_664964f0((int)this);
      return;
    }
    *(undefined4 *)((int)this + 0x42) = 1;
    *(undefined4 *)((int)this + 0x4a) = 1;
    (**(code **)(**(int **)((int)this + 4) + 0x3c))(*(undefined2 *)((int)this + 8));
  }
  return;
}


