/* Module: vegas30.exe
   Function: FUN_0057e380
   Address: 0057e380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057e380(int *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *_Dst;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_4;
  
  local_4 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (((((param_1 == (int *)0x0) || (param_2 < 0xc)) || ((param_2 & 1) != 0)) ||
      ((*param_1 != 0x5453494c || (param_1[2] != 0x6c726468)))) ||
     (uVar2 = param_1[1], param_2 - 8 < uVar2)) {
    return -0x7ff8ffa9;
  }
  piVar1 = (int *)((int)param_1 + param_2);
  piVar5 = (int *)((uVar2 & 1) + uVar2 + 8 + (int)param_1);
  piVar6 = param_1 + 3;
  if (piVar6 < piVar5) {
    do {
      uVar2 = piVar6[1];
      piVar3 = (int *)((uVar2 & 1) + uVar2 + 8 + (int)piVar6);
      if (*piVar6 == 0x4b4e554a) {
        _Dst = piVar6;
        if ((8 < uVar2) || (piVar5 < piVar1)) {
LAB_0057e45c:
          if (_Dst < piVar3) {
            iVar7 = (int)piVar3 - (int)_Dst;
            if (0 < (int)piVar5 - (int)piVar3) {
              memmove(_Dst,piVar3,(int)piVar5 - (int)piVar3);
            }
            piVar3 = (int *)((int)piVar5 - iVar7);
            if (piVar5 < piVar1) {
              *piVar3 = *piVar5;
              iVar4 = piVar5[1] + iVar7;
            }
            else {
              *piVar3 = 0x4b4e554a;
              iVar4 = iVar7 + -8;
            }
            piVar3[1] = iVar4;
            param_1[1] = param_1[1] - iVar7;
            piVar5 = piVar3;
          }
        }
      }
      else if ((*piVar6 == 0x5453494c) && (piVar6[2] == 0x6c727473)) {
        local_4 = FUN_0057e500(piVar6,param_3);
        if (-1 < local_4) {
          _Dst = (int *)((piVar6[1] & 1U) + piVar6[1] + 8 + (int)piVar6);
          goto LAB_0057e45c;
        }
        break;
      }
      piVar6 = (int *)((int)piVar6 + (piVar6[1] & 1U) + piVar6[1] + 8);
    } while (piVar6 < piVar5);
  }
  if (piVar5 < piVar1) {
    if (param_4 != (int *)0x0) {
      *param_4 = piVar5[1];
    }
    return local_4;
  }
  return 1;
}


