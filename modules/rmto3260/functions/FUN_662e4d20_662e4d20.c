/* Module: rmto3260.dll
   Function: FUN_662e4d20
   Address: 662e4d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662e4d20(void *this,int param_1,int param_2,int param_3)

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


