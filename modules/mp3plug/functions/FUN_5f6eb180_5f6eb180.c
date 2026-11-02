/* Module: mp3plug.dll
   Function: FUN_5f6eb180
   Address: 5f6eb180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f6eb180(int param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *in_stack_00000010;
  
  if (0 < in_EAX) {
    piVar3 = param_2;
    piVar5 = in_stack_00000010;
    do {
      if (*(int *)(param_1 + piVar3[2] * 4 + *piVar3 * 4) == 0) {
        piVar5[3] = 0;
      }
      piVar5 = piVar5 + 1;
      piVar3 = piVar3 + 8;
    } while ((int)piVar5 < (int)(in_stack_00000010 + in_EAX));
  }
  iVar2 = 0;
  in_stack_00000010[0x2a] = 0;
  in_stack_00000010[0x2b] = 0;
  in_stack_00000010[0x2c] = 0;
  in_stack_00000010[0x2d] = 0;
  in_stack_00000010[0x2e] = 0;
  in_stack_00000010[0x2f] = 0;
  in_stack_00000010[0x30] = 0;
  in_stack_00000010[0x31] = 0;
  in_stack_00000010[0x32] = 0;
  in_stack_00000010[0x33] = 0;
  in_stack_00000010[0x34] = 0;
  in_stack_00000010[0x35] = 0;
  in_stack_00000010[0x36] = 0;
  in_stack_00000010[0x37] = 0;
  in_stack_00000010[0x38] = 0;
  in_stack_00000010[0x39] = 0;
  in_stack_00000010[0x3a] = 0;
  in_stack_00000010[0x3b] = 0;
  in_stack_00000010[0x3c] = 0;
  in_stack_00000010[0x3d] = 0;
  in_stack_00000010[0x3e] = 0;
  in_stack_00000010[0x3f] = 0;
  in_stack_00000010[0x40] = 0;
  in_stack_00000010[0x41] = 0;
  in_stack_00000010[0x42] = 0;
  in_stack_00000010[0x43] = 0;
  in_stack_00000010[0x44] = 0;
  in_stack_00000010[0x45] = 0;
  in_stack_00000010[0x46] = 0;
  in_stack_00000010[0x47] = 0;
  in_stack_00000010[0x48] = 0;
  in_stack_00000010[0x49] = 0;
  in_stack_00000010[0x4a] = 0;
  in_stack_00000010[0x4b] = 0;
  in_stack_00000010[0x4c] = 0;
  in_stack_00000010[0x4d] = 0;
  in_stack_00000010[0x4e] = 0;
  in_stack_00000010[0x4f] = 0;
  in_stack_00000010[0x50] = 0;
  if (in_stack_00000010[0x8b] != 0) {
    iVar1 = in_stack_00000010[1];
    if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 3)) || ((iVar1 == 4 || (iVar1 == 6)))) {
      iVar1 = in_stack_00000010[0x8e];
      if (iVar1 < in_stack_00000010[0x8d] + iVar1) {
        do {
          in_stack_00000010[iVar1 + 3] = in_stack_00000010[iVar1 + 0x95];
          iVar1 = iVar1 + 1;
        } while (iVar1 < in_stack_00000010[0x8d] + in_stack_00000010[0x8e]);
      }
      in_stack_00000010[iVar1 + 0x2a] = 1;
      iVar1 = in_stack_00000010[0x8e];
      if (0 < iVar1) {
        piVar3 = param_2 + iVar1 * 8;
        do {
          iVar2 = param_1;
          if (*(int *)(param_1 + piVar3[-6] * 4 + piVar3[-8] * 4) != 0) break;
          iVar6 = iVar1 + -1;
          piVar3 = piVar3 + -8;
          in_stack_00000010[iVar1 + 0x29] = 2;
          iVar1 = iVar6;
        } while (0 < iVar6);
      }
    }
    else if (iVar1 == 2) {
      iVar1 = 0;
      do {
        iVar6 = in_stack_00000010[iVar1 + 0x92];
        iVar4 = iVar6;
        if (iVar6 < in_stack_00000010[iVar1 + 0x8f] * 3 + iVar6) {
          do {
            in_stack_00000010[iVar6 + 0x2a] = 1;
            in_stack_00000010[iVar6 + 3] = in_stack_00000010[iVar6 + 0x95];
            iVar6 = iVar6 + 3;
            iVar4 = in_stack_00000010[iVar1 + 0x92];
            iVar2 = in_stack_00000010[iVar1 + 0x8f] * 3 + iVar4;
          } while (iVar6 < iVar2);
        }
        if (iVar1 < iVar4) {
          piVar3 = param_2 + iVar4 * 8;
          do {
            iVar2 = param_1;
            if (*(int *)(param_1 + piVar3[-0x16] * 4 + piVar3[-0x18] * 4) != 0) break;
            iVar6 = iVar4 + -3;
            piVar3 = piVar3 + -0x18;
            in_stack_00000010[iVar4 + 0x27] = 2;
            iVar4 = iVar6;
          } while (iVar1 < iVar6);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
    }
    else if (iVar1 == 5) {
      iVar2 = 0;
      do {
        iVar1 = in_stack_00000010[iVar2 + 0x92];
        iVar6 = iVar1;
        if (iVar1 < in_stack_00000010[iVar2 + 0x8f] * 3 + iVar1) {
          do {
            in_stack_00000010[iVar1 + 0x2a] = 1;
            in_stack_00000010[iVar1 + 3] = in_stack_00000010[iVar1 + 0x95];
            iVar1 = iVar1 + 3;
            iVar6 = in_stack_00000010[iVar2 + 0x92];
          } while (iVar1 < in_stack_00000010[iVar2 + 0x8f] * 3 + iVar6);
        }
        if (iVar2 + in_stack_00000010[0xbc] < iVar6) {
          piVar3 = param_2 + iVar6 * 8;
          do {
            if (*(int *)(param_1 + piVar3[-0x16] * 4 + piVar3[-0x18] * 4) != 0) break;
            iVar1 = iVar6 + -3;
            piVar3 = piVar3 + -0x18;
            in_stack_00000010[iVar6 + 0x27] = 2;
            iVar6 = iVar1;
          } while (iVar2 + in_stack_00000010[0xbc] < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      iVar1 = in_stack_00000010[0x8e];
      iVar2 = iVar1;
      if (iVar1 < in_stack_00000010[0x8d] + iVar1) {
        do {
          in_stack_00000010[iVar1 + 0x2a] = 1;
          in_stack_00000010[iVar1 + 3] = in_stack_00000010[iVar1 + 0x95];
          iVar2 = in_stack_00000010[0x8e];
          iVar1 = iVar1 + 1;
        } while (iVar1 < in_stack_00000010[0x8d] + iVar2);
      }
      if (0 < iVar2) {
        piVar3 = param_2 + iVar2 * 8;
        iVar1 = iVar2;
        do {
          iVar2 = param_1;
          if (*(int *)(param_1 + piVar3[-6] * 4 + piVar3[-8] * 4) != 0) break;
          iVar6 = iVar1 + -1;
          piVar3 = piVar3 + -8;
          in_stack_00000010[iVar1 + 0x29] = 2;
          iVar1 = iVar6;
        } while (0 < iVar6);
      }
    }
  }
  if (*in_stack_00000010 == 0) {
    FUN_5f6ea570();
  }
  else {
    FUN_5f6ea920(iVar2);
  }
  return in_stack_00000010[0x8a];
}


