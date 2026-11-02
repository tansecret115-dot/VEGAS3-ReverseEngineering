/* Module: rn5a3260.dll
   Function: FUN_628a12b0
   Address: 628a12b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a12b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_628a6060 == iVar1) && (DAT_628a6064 == param_2[1])) && (DAT_628a6068 == param_2[2])) &&
     (DAT_628a606c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_628a6080 == iVar1) && (DAT_628a6084 == param_2[1])) &&
     ((DAT_628a6088 == param_2[2] && (DAT_628a608c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_628a64a0 == iVar1) && (DAT_628a64a4 == param_2[1])) &&
          ((DAT_628a64a8 == param_2[2] && (DAT_628a64ac == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_628a6490 == iVar1) && (DAT_628a6494 == param_2[1])) &&
           (DAT_628a6498 == param_2[2])) && (DAT_628a649c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if (((DAT_628a6400 == iVar1) && (DAT_628a6404 == param_2[1])) &&
          ((DAT_628a6408 == param_2[2] && (DAT_628a640c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  else if (((DAT_628a6420 == iVar1) && (DAT_628a6424 == param_2[1])) &&
          ((DAT_628a6428 == param_2[2] && (DAT_628a642c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  else if ((((DAT_628a6450 == iVar1) && (DAT_628a6454 == param_2[1])) &&
           (DAT_628a6458 == param_2[2])) && (DAT_628a645c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 10);
      return 0;
    }
  }
  else if (((DAT_628a63f0 == iVar1) && (DAT_628a63f4 == param_2[1])) &&
          ((DAT_628a63f8 == param_2[2] && (DAT_628a63fc == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else if (((DAT_628a6750 == iVar1) && (DAT_628a6754 == param_2[1])) &&
          ((DAT_628a6758 == param_2[2] && (DAT_628a675c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xb);
      return 0;
    }
  }
  else if ((((DAT_628a6760 == iVar1) && (DAT_628a6764 == param_2[1])) &&
           (DAT_628a6768 == param_2[2])) && (DAT_628a676c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xc);
      return 0;
    }
  }
  else if (((DAT_628a6710 == iVar1) && (DAT_628a6714 == param_2[1])) &&
          ((DAT_628a6718 == param_2[2] && (DAT_628a671c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xd);
      return 0;
    }
  }
  else {
    if (((DAT_628a6720 != iVar1) || (DAT_628a6724 != param_2[1])) ||
       ((DAT_628a6728 != param_2[2] || (DAT_628a672c != param_2[3])))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xe);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


