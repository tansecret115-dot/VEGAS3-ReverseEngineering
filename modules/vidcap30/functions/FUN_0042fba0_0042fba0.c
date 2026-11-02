/* Module: vidcap30.exe
   Function: FUN_0042fba0
   Address: 0042fba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fba0(uint param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  
  iVar4 = param_1;
  if ((0 < *(int *)(param_1 + 0x34)) && (0 < *(int *)(param_1 + 0x38))) {
    iVar1 = *(int *)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x74);
    iVar3 = *(int *)(param_1 + 0x40);
    piVar5 = (int *)(param_1 + 0xac);
    param_1 = 0;
    if (*piVar5 != 0) {
      piVar5 = (int *)(iVar4 + 0xc0);
      do {
        if (piVar5[-3] < piVar5[-1]) {
          if ((piVar5[-2] < *piVar5) && (*piVar5 - piVar5[-2] <= *(int *)(iVar4 + 0x38))) {
            if ((*(byte *)((int)piVar5 + 0xb) & 1) == 0) {
              uVar6 = false;
              if ((*(byte *)((int)piVar5 + 10) & 4) == 0) {
                uVar6 = 2;
              }
              else if ((((iVar1 == iVar3) && (*(int *)(iVar4 + 0x3c) == param_1 + 0x80)) &&
                       (uVar6 = *(int *)(iVar4 + 0x60) != 3, iVar2 == iVar1)) ||
                      ((*(byte *)((int)piVar5 + 10) & 2) != 0)) {
                uVar6 = 3;
              }
              (**(code **)(iVar4 + 0x9c))(iVar4,param_2,(LPRECT)(piVar5 + -3),uVar6);
            }
            else if ((*(byte *)(iVar4 + 0x20) & 0x10) != 0) {
              DrawEdge(param_2,(LPRECT)(piVar5 + -3),2,0xf);
            }
          }
        }
        param_1 = param_1 + 1;
        piVar5 = piVar5 + 8;
      } while (param_1 < *(uint *)(iVar4 + 0xac));
    }
  }
  return;
}


