/* Module: vegas30k.dll
   Function: FUN_0119ae30
   Address: 0119ae30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119ae30(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0x187] == 0) {
    return -0x7fff0001;
  }
  piVar2 = (int *)param_1[0x182];
  do {
    if (piVar2 == (int *)0x0) {
LAB_0119ae6f:
      iVar1 = (**(code **)(*param_1 + 0x170))(1);
      if (iVar1 < 0) {
        return iVar1;
      }
      piVar2 = (int *)param_1[0x182];
      if (piVar2 != (int *)0x0) {
        while (*piVar2 != param_2) {
          piVar2 = (int *)piVar2[0x5b];
          if (piVar2 == (int *)0x0) {
            param_1[0x1b] = 0;
            return iVar1;
          }
        }
        if (piVar2[9] != 0) {
          _SfAudio_FillSilence_12(piVar2 + 1,piVar2[9],piVar2[10]);
        }
        piVar2[0xe] = piVar2[0xe] & 0xfffeffff;
      }
      param_1[0x1b] = 0;
      return iVar1;
    }
    if (*piVar2 == param_2) {
      piVar2[0xe] = piVar2[0xe] | 0x10000;
      goto LAB_0119ae6f;
    }
    piVar2 = (int *)piVar2[0x5b];
  } while( true );
}


