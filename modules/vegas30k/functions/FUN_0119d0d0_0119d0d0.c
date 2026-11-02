/* Module: vegas30k.dll
   Function: FUN_0119d0d0
   Address: 0119d0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0119d0d0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[0x182];
  do {
    if (piVar1 == (int *)0x0) {
LAB_0119d0f5:
      uVar2 = FUN_011aaf10(param_1);
      FUN_011aaee0(param_1,uVar2 & 0xfffffff7);
      param_1[8] = param_1[8] & 0x7ffffff7;
      (**(code **)(*param_1 + 0x144))(1);
      return;
    }
    if (*piVar1 == param_2) {
      piVar1[0xe] = piVar1[0xe] & 0xfffffffb;
      goto LAB_0119d0f5;
    }
    piVar1 = (int *)piVar1[0x5b];
  } while( true );
}


