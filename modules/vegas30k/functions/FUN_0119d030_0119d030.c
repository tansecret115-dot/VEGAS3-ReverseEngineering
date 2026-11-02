/* Module: vegas30k.dll
   Function: FUN_0119d030
   Address: 0119d030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0119d030(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)param_1[0x182];
  do {
    if (piVar1 == (int *)0x0) {
LAB_0119d09e:
      uVar2 = FUN_011aaf10(param_1);
      FUN_011aaee0(param_1,uVar2 | 8);
      param_1[8] = param_1[8] | 8;
      (**(code **)(*param_1 + 0x13c))(param_3,param_4,1);
      return;
    }
    if (*piVar1 == param_2) {
      if (-1 < param_4) {
        uVar3 = ftol();
        *(undefined8 *)(piVar1 + 0x16) = uVar3;
      }
      piVar1[0xe] = piVar1[0xe] | 4;
      goto LAB_0119d09e;
    }
    piVar1 = (int *)piVar1[0x5b];
  } while( true );
}


