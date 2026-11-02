/* Module: rmbe3260.dll
   Function: FUN_6601a450
   Address: 6601a450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a450(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_66064ee8 == iVar1) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2])) &&
     (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_66065958 == iVar1) && (DAT_6606595c == param_2[1])) &&
     ((DAT_66065960 == param_2[2] && (DAT_66065964 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_660657c8 == iVar1) && (DAT_660657cc == param_2[1])) &&
          ((DAT_660657d0 == param_2[2] && (DAT_660657d4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_660657b8 == iVar1) && (DAT_660657bc == param_2[1])) &&
           (DAT_660657c0 == param_2[2])) && (DAT_660657c4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if (((DAT_66065948 == iVar1) && (DAT_6606594c == param_2[1])) &&
          ((DAT_66065950 == param_2[2] && (DAT_66065954 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else if (((DAT_66065128 == iVar1) && (DAT_6606512c == param_2[1])) &&
          ((DAT_66065130 == param_2[2] && (DAT_66065134 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  else if ((((DAT_660661b8 == iVar1) && (DAT_660661bc == param_2[1])) &&
           (DAT_660661c0 == param_2[2])) && (DAT_660661c4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  else if (((DAT_660661c8 == iVar1) && (DAT_660661cc == param_2[1])) &&
          ((DAT_660661d0 == param_2[2] && (DAT_660661d4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 10);
      return 0;
    }
  }
  else if ((((DAT_660661d8 == iVar1) && (DAT_660661dc == param_2[1])) &&
           (DAT_660661e0 == param_2[2])) && (DAT_660661e4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xb);
      return 0;
    }
  }
  else if ((((DAT_660661e8 == iVar1) && (DAT_660661ec == param_2[1])) &&
           (DAT_660661f0 == param_2[2])) && (DAT_660661f4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xc);
      return 0;
    }
  }
  else if (((DAT_66066208 == iVar1) && (DAT_6606620c == param_2[1])) &&
          ((DAT_66066210 == param_2[2] && (DAT_66066214 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xd);
      return 0;
    }
  }
  else if (((DAT_66066218 == iVar1) && (DAT_6606621c == param_2[1])) &&
          ((DAT_66066220 == param_2[2] && (DAT_66066224 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xd);
      return 0;
    }
  }
  else if ((((DAT_66066228 == iVar1) && (DAT_6606622c == param_2[1])) &&
           (DAT_66066230 == param_2[2])) && (DAT_66066234 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0xf);
      return 0;
    }
  }
  else if (((DAT_66066298 == iVar1) && (DAT_6606629c == param_2[1])) &&
          ((DAT_660662a0 == param_2[2] && (DAT_660662a4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x15);
      return 0;
    }
  }
  else {
    if (((DAT_66065708 == iVar1) && (DAT_6606570c == param_2[1])) &&
       ((DAT_66065710 == param_2[2] && (DAT_66065714 == param_2[3])))) {
      iVar1 = (*(code *)**(undefined4 **)param_1[99])((undefined4 *)param_1[99],param_2,param_3);
      if (-1 < iVar1) {
        return 0;
      }
    }
    iVar1 = *param_2;
    if ((((DAT_66066268 == iVar1) && (DAT_6606626c == param_2[1])) && (DAT_66066270 == param_2[2]))
       && (DAT_66066274 == param_2[3])) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x10);
        return 0;
      }
    }
    else if (((DAT_66066238 == iVar1) && (DAT_6606623c == param_2[1])) &&
            ((DAT_66066240 == param_2[2] && (DAT_66066244 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x11);
        return 0;
      }
    }
    else if (((DAT_66066248 == iVar1) && (DAT_6606624c == param_2[1])) &&
            ((DAT_66066250 == param_2[2] && (DAT_66066254 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x12);
        return 0;
      }
    }
    else if ((((DAT_66065b88 == iVar1) && (DAT_66065b8c == param_2[1])) &&
             (DAT_66065b90 == param_2[2])) && (DAT_66065b94 == param_2[3])) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x13);
        return 0;
      }
    }
    else if (((DAT_66065c18 == iVar1) && (DAT_66065c1c == param_2[1])) &&
            ((DAT_66065c20 == param_2[2] && (DAT_66065c24 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x14);
        return 0;
      }
    }
    else if (((DAT_66065b98 == iVar1) && (DAT_66065b9c == param_2[1])) &&
            ((DAT_66065ba0 == param_2[2] && (DAT_66065ba4 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x16);
        return 0;
      }
    }
    else if ((((DAT_66065968 == iVar1) && (DAT_6606596c == param_2[1])) &&
             (DAT_66065970 == param_2[2])) && (DAT_66065974 == param_2[3])) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 4);
        return 0;
      }
    }
    else if (((DAT_66065ad8 == iVar1) && (DAT_66065adc == param_2[1])) &&
            ((DAT_66065ae0 == param_2[2] && (DAT_66065ae4 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x18);
        return 0;
      }
    }
    else if (((DAT_660660f8 == iVar1) && (DAT_660660fc == param_2[1])) &&
            ((DAT_66066100 == param_2[2] && (DAT_66066104 == param_2[3])))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x17);
        return 0;
      }
    }
    else {
      if ((((DAT_66065ae8 != iVar1) || (DAT_66065aec != param_2[1])) || (DAT_66065af0 != param_2[2])
          ) || (DAT_66065af4 != param_2[3])) {
        *param_3 = 0;
        return 0x80004002;
      }
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 0x19);
        return 0;
      }
    }
  }
  *param_3 = 0;
  return 0;
}


