/* Module: vidcap30.exe
   Function: FUN_00420930
   Address: 00420930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00420930(int param_1,LPCSTR param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 unaff_EBX;
  int iVar2;
  int *local_21c;
  int *piStack_218;
  int *local_214;
  int local_210;
  undefined4 local_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  iVar2 = 0;
  local_214 = (int *)0x0;
  local_210 = 0;
  if ((param_2 == (LPCSTR)0x0) || (iVar1 = lstrlenA(param_2), iVar1 == 0)) {
    local_214 = param_3;
    if (param_3 == (int *)0x0) {
      return -0x7ff8ffa9;
    }
  }
  else {
    MultiByteToWideChar(0,1,param_2,-1,local_208,0x104);
    local_2 = 0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                      (*(int **)(param_1 + 0x350),local_208,&local_214);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_210 = 1;
  }
  if (local_214 != (int *)0x0) {
    local_21c = (int *)0x0;
    local_20c = 1;
    iVar2 = FUN_00420460(&param_5,2,param_4,0,0,local_214,&local_21c,&local_20c);
    if (-1 < iVar2) {
      piStack_218 = (int *)0x0;
      (**(code **)(*local_21c + 0x18))(local_21c,&piStack_218);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x24))
                        (*(int **)(param_1 + 0x350),unaff_EBX);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x24))
                          (*(int **)(param_1 + 0x350),local_21c);
      }
      if (param_7 == (undefined4 *)0x0) {
        if (param_5 == 1) {
          if (piStack_218 != (int *)0x0) {
            (**(code **)(*piStack_218 + 8))(piStack_218);
          }
          piStack_218 = (int *)0x0;
        }
        else {
          if (local_21c != (int *)0x0) {
            (**(code **)(*local_21c + 8))(local_21c);
          }
          local_21c = (int *)0x0;
        }
      }
      else if (param_5 == 1) {
        *param_7 = piStack_218;
      }
      else {
        *param_7 = local_21c;
      }
      if (param_6 == (undefined4 *)0x0) {
        if (param_5 == 1) {
          if (local_21c != (int *)0x0) {
            (**(code **)(*local_21c + 8))(local_21c);
          }
          local_21c = (int *)0x0;
        }
        else if (piStack_218 != (int *)0x0) {
          (**(code **)(*piStack_218 + 8))(piStack_218);
        }
      }
      else if (param_5 == 1) {
        *param_6 = local_21c;
      }
      else {
        *param_6 = piStack_218;
      }
    }
    if ((local_210 != 0) && (local_214 != (int *)0x0)) {
      (**(code **)(*local_214 + 8))(local_214);
    }
  }
  return iVar2;
}


