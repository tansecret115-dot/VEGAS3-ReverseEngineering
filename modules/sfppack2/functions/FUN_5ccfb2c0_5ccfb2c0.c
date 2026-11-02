/* Module: sfppack2.dll
   Function: FUN_5ccfb2c0
   Address: 5ccfb2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_5ccfb2c0(HWND param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  
  uVar7 = param_2[param_4 * 2];
  uVar5 = param_3 - 1;
  if (param_4 < uVar5) {
    local_c = uVar5 - param_4;
    piVar6 = param_2 + uVar5 * 2 + 1;
    do {
      uVar3 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
      lVar2 = (longlong)(int)(uVar7 - piVar6[-1]) * (longlong)param_5;
      if (lVar2 < 0) {
        lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar3),
                         (uint)lVar2 - uVar3);
        uVar3 = 0;
      }
      iVar8 = *piVar6 + (int)((longlong)(lVar2 + (ulonglong)uVar3) / (longlong)(int)uVar7);
      *piVar6 = iVar8;
      iVar1 = param_2[param_4 * 2 + 1];
      if ((iVar8 < param_2[param_4 * 2 + 1]) ||
         (iVar1 = param_2[param_3 * 2 + -1], param_2[param_3 * 2 + -1] < iVar8)) {
        iVar8 = iVar1;
      }
      *piVar6 = iVar8;
      piVar6 = piVar6 + -2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if ((3 < param_3) && (uVar3 = 1, uVar7 = param_3, piVar6 = param_2, 1 < uVar5)) {
    do {
      iVar8 = piVar6[2];
      if (((iVar8 < -0x344) || (param_3 = uVar7, -4 < iVar8)) && (param_3 = uVar5, uVar3 < uVar7)) {
        piVar4 = piVar6 + 3;
        iVar8 = uVar7 - uVar3;
        do {
          piVar4[-1] = piVar4[1];
          iVar1 = piVar4[2];
          *piVar4 = iVar1;
          if ((iVar1 != -0x348) && (iVar1 < -800)) {
            *piVar4 = -800;
          }
          piVar4 = piVar4 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar3 = uVar3 + 1;
      uVar5 = param_3 - 1;
      uVar7 = param_3;
      piVar6 = piVar6 + 2;
    } while (uVar3 < uVar5);
  }
  SendMessageA(param_1,0x604,param_3,(LPARAM)param_2);
  return param_3;
}


