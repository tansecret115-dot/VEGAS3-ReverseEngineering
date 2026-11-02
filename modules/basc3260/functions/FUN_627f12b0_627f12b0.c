/* Module: basc3260.dll
   Function: FUN_627f12b0
   Address: 627f12b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f12b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_627f5060 == iVar1) && (DAT_627f5064 == param_2[1])) && (DAT_627f5068 == param_2[2])) &&
     (DAT_627f506c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_627f5080 == iVar1) && (DAT_627f5084 == param_2[1])) &&
     ((DAT_627f5088 == param_2[2] && (DAT_627f508c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_627f54a0 == iVar1) && (DAT_627f54a4 == param_2[1])) &&
          ((DAT_627f54a8 == param_2[2] && (DAT_627f54ac == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_627f5490 == iVar1) && (DAT_627f5494 == param_2[1])) &&
           (DAT_627f5498 == param_2[2])) && (DAT_627f549c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if (((DAT_627f5400 == iVar1) && (DAT_627f5404 == param_2[1])) &&
          ((DAT_627f5408 == param_2[2] && (DAT_627f540c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  else if (((DAT_627f5420 == iVar1) && (DAT_627f5424 == param_2[1])) &&
          ((DAT_627f5428 == param_2[2] && (DAT_627f542c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  else if ((((DAT_627f5450 == iVar1) && (DAT_627f5454 == param_2[1])) &&
           (DAT_627f5458 == param_2[2])) && (DAT_627f545c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 10);
      return 0;
    }
  }
  else if (((DAT_627f53f0 == iVar1) && (DAT_627f53f4 == param_2[1])) &&
          ((DAT_627f53f8 == param_2[2] && (DAT_627f53fc == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else if (((DAT_627f5750 == iVar1) && (DAT_627f5754 == param_2[1])) &&
          ((DAT_627f5758 == param_2[2] && (DAT_627f575c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xb);
      return 0;
    }
  }
  else if ((((DAT_627f5760 == iVar1) && (DAT_627f5764 == param_2[1])) &&
           (DAT_627f5768 == param_2[2])) && (DAT_627f576c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xc);
      return 0;
    }
  }
  else if (((DAT_627f5710 == iVar1) && (DAT_627f5714 == param_2[1])) &&
          ((DAT_627f5718 == param_2[2] && (DAT_627f571c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xd);
      return 0;
    }
  }
  else {
    if (((DAT_627f5720 != iVar1) || (DAT_627f5724 != param_2[1])) ||
       ((DAT_627f5728 != param_2[2] || (DAT_627f572c != param_2[3])))) {
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


