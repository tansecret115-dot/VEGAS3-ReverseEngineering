/* Module: erv23260.dll
   Function: FUN_63803f10
   Address: 63803f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63803f10(void *this,int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  iVar2 = FUN_638025b0((void *)((int)this + -100),param_1,&local_c,&local_8);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (((*param_2 == 0) || ((*param_2 == 1 && (param_2[1] != 0)))) &&
     (iVar2 = param_2[2], iVar2 != 0)) {
    if (iVar2 == 3) {
      bVar1 = true;
    }
    else if (((param_2[3] < 0) || (10000 < param_2[3])) ||
            (((iVar2 != 2 && ((iVar2 != 1 || (param_2[4] == 0)))) &&
             ((iVar2 != 0 || (((param_2[4] == 0 || (param_2[5] == 0)) || (param_2[6] == 0)))))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1 = local_c;
      if (local_c <= local_8) {
        piVar3 = (int *)(local_c * 0x77c + 0xdc + (int)this);
        do {
          if ((((piVar3[-0x27] == 1) && (piVar3[-0x26] == 1)) &&
              ((*param_2 != 1 || (param_2[1] != 1)))) && (*piVar3 != 4)) {
            *(undefined1 *)(piVar3 + 0x1a1) = 1;
          }
          piVar4 = param_2;
          piVar5 = piVar3 + -0x27;
          for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          }
          if (*param_2 == 1) {
            piVar3[0x183] = param_2[1];
          }
          else {
            piVar3[0x183] = 0;
          }
          if (param_2[2] == 1) {
            piVar3[0xaa] = param_2[4];
          }
          param_1 = param_1 + 1;
          piVar3 = piVar3 + 0x1df;
        } while (param_1 <= local_8);
      }
      return 0;
    }
  }
  return 10;
}


