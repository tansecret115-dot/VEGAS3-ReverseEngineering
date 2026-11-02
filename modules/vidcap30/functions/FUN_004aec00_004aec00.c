/* Module: vidcap30.exe
   Function: FUN_004aec00
   Address: 004aec00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aec00(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  SHORT SVar1;
  
  if ((param_6 == 0) && (param_6 = ((param_4 - param_3) + 5) / 10, param_6 == 0)) {
    param_6 = 1;
  }
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    param_6 = param_6 * 10;
  }
  if (param_7 == 0) {
    switch(param_1) {
    case 0:
      goto switchD_004aec5a_caseD_1;
    case 1:
      goto switchD_004aec5a_caseD_0;
    case 2:
      goto switchD_004aec5a_caseD_3;
    case 3:
      goto switchD_004aec5a_caseD_2;
    default:
      goto switchD_004aec5a_caseD_4;
    case 6:
      goto switchD_004aec5a_caseD_7;
    case 7:
switchD_004aeca3_caseD_7:
      param_2 = param_4;
    }
  }
  else {
    switch(param_1) {
    case 0:
switchD_004aec5a_caseD_0:
      param_2 = param_2 + param_5;
      break;
    case 1:
switchD_004aec5a_caseD_1:
      param_2 = param_2 - param_5;
      break;
    case 2:
switchD_004aec5a_caseD_2:
      param_2 = param_2 + param_6;
      break;
    case 3:
switchD_004aec5a_caseD_3:
      param_2 = param_2 - param_6;
      break;
    default:
switchD_004aec5a_caseD_4:
      break;
    case 6:
      SVar1 = GetKeyState(0x11);
      if (((SVar1 < 0) || (param_4 < 1)) || (-1 < param_3)) goto switchD_004aeca3_caseD_7;
      param_2 = 0;
      break;
    case 7:
switchD_004aec5a_caseD_7:
      param_2 = param_3;
      goto LAB_004aecac;
    }
  }
  if (param_2 < param_3) {
    return param_3;
  }
LAB_004aecac:
  if (param_4 < param_2) {
    param_2 = param_4;
  }
  return param_2;
}


