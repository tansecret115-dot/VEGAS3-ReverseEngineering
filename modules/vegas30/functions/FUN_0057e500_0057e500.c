/* Module: vegas30.exe
   Function: FUN_0057e500
   Address: 0057e500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057e500(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *_Dst;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x5453494c)) || (param_1[2] != 0x6c727473)) ||
     (uVar2 = param_1[1], uVar2 < 8)) {
    return 0x80070057;
  }
  piVar5 = param_1 + 3;
  piVar1 = (int *)((uVar2 & 1) + uVar2 + 8 + (int)param_1);
  piVar4 = piVar1;
  if (piVar5 < piVar1) {
    do {
      uVar2 = piVar5[1];
      piVar3 = (int *)((uVar2 & 1) + uVar2 + 8 + (int)piVar5);
      if (*piVar5 == 0x4b4e554a) {
        _Dst = piVar5;
        if ((8 < uVar2) || (piVar4 < piVar1)) {
LAB_0057e5e3:
          if (_Dst < piVar3) {
            iVar6 = (int)piVar3 - (int)_Dst;
            if (0 < (int)piVar4 - (int)piVar3) {
              memmove(_Dst,piVar3,(int)piVar4 - (int)piVar3);
            }
            piVar3 = (int *)((int)piVar4 - iVar6);
            if (piVar4 < piVar1) {
              *piVar3 = *piVar4;
              piVar3[1] = piVar4[1] + iVar6;
              param_1[1] = param_1[1] - iVar6;
              piVar4 = piVar3;
            }
            else {
              *piVar3 = 0x4b4e554a;
              piVar3[1] = iVar6 + -8;
              param_1[1] = param_1[1] - iVar6;
              piVar4 = piVar3;
            }
          }
        }
      }
      else if (*piVar5 == 0x78646e69) {
        uVar2 = (piVar5[1] - 0x18U) / ((uint)*(ushort *)(piVar5 + 2) * 4);
        if (piVar5[3] + 1 + param_2 < (int)uVar2) {
          uVar2 = piVar5[1] + ((uVar2 - piVar5[3]) - param_2) * (uint)*(ushort *)(piVar5 + 2) * -4;
          piVar5[1] = uVar2;
          _Dst = (int *)((uVar2 & 1) + uVar2 + 8 + (int)piVar5);
          goto LAB_0057e5e3;
        }
      }
      piVar5 = (int *)((int)piVar5 + (piVar5[1] & 1U) + piVar5[1] + 8);
    } while (piVar5 < piVar4);
  }
  return 1;
}


