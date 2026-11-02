/* Module: rmme3260.dll
   Function: FUN_6620af60
   Address: 6620af60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620af60(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x24) = 0x80040082;
    return;
  }
  if (param_2 != param_3) {
    piVar1 = *(int **)((int)this + 4);
    if (piVar1[0x10] == 0) {
      if (param_3 + param_1 == piVar1[5]) {
        piVar1[5] = param_1;
        *(int *)(piVar1[8] + 0x14) = *(int *)(piVar1[8] + 0x14) + -1;
      }
      else {
        (**(code **)(*piVar1 + 0x28))(param_1);
      }
      piVar1[9] = 0;
    }
    uVar2 = 0x40040;
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = uVar2;
  return;
}


