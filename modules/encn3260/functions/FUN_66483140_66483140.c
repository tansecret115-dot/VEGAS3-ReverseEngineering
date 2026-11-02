/* Module: encn3260.dll
   Function: FUN_66483140
   Address: 66483140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66483140(int *param_1)

{
  void *this;
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)param_1 + 0x7a) == 0) {
    this = operator_new(0xc);
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_66483300(this,param_1);
    }
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar2 = (**(code **)(*(int *)param_1[0xd] + 0xc))((int *)param_1[0xd],piVar1,0);
    *(undefined4 *)((int)param_1 + 0x7a) = uVar2;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


