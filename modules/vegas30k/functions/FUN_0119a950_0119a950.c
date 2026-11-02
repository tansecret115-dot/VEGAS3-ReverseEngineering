/* Module: vegas30k.dll
   Function: FUN_0119a950
   Address: 0119a950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119a950(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    return 0x8000ffff;
  }
  piVar1 = (int *)param_1[0x182];
  do {
    if (piVar1 == (int *)0x0) {
LAB_0119a999:
      uVar2 = (**(code **)(*param_1 + 0x178))(param_3,param_4,1);
      return uVar2;
    }
    if (*piVar1 == param_2) {
      if (piVar1[9] != 0) {
        _SfAudio_FillSilence_12(piVar1 + 1,piVar1[9],piVar1[10]);
      }
      goto LAB_0119a999;
    }
    piVar1 = (int *)piVar1[0x5b];
  } while( true );
}


