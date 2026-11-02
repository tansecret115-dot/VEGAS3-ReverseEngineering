/* Module: vegas30k.dll
   Function: FUN_011728e0
   Address: 011728e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011728e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1);
  *(undefined4 **)((int)param_1 + 0x181) = puVar3;
  *puVar3 = &DAT_01172a60;
  puVar3[1] = &LAB_01172a70;
  *(undefined1 *)(puVar3 + 2) = 0;
  if ((char)param_1[0x3a] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  iVar6 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    piVar4 = (int *)(*(int *)((int)param_1 + 0x79) + 0xc);
    puVar5 = (undefined4 *)((int)puVar3 + 9);
    do {
      iVar1 = piVar4[-1];
      iVar2 = *(int *)((int)param_1 + 0x105);
      if ((iVar1 == iVar2) && (*piVar4 == *(int *)((int)param_1 + 0x109))) {
        if (*(int *)((int)param_1 + 0xe9) == 0) {
          *puVar5 = FUN_01172c90;
        }
        else {
          *puVar5 = &LAB_01173160;
          *(undefined1 *)(puVar3 + 2) = 1;
        }
      }
      else if (iVar1 * 2 == iVar2) {
        if (*piVar4 == *(int *)((int)param_1 + 0x109)) {
          *puVar5 = &LAB_01172ce0;
        }
        else {
          if ((iVar1 * 2 != iVar2) || (*piVar4 * 2 - *(int *)((int)param_1 + 0x109) != 0))
          goto LAB_011729dd;
          if (*(int *)((int)param_1 + 0xe9) == 0) {
            *puVar5 = &LAB_01172d90;
          }
          else {
            *puVar5 = &LAB_01172e70;
            *(undefined1 *)(puVar3 + 2) = 1;
          }
        }
      }
      else {
LAB_011729dd:
        if ((iVar2 % iVar1 == 0) && (*(int *)((int)param_1 + 0x109) % *piVar4 == 0)) {
          *puVar5 = &LAB_01172b00;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x25;
          (**(code **)*param_1)(param_1);
        }
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
      piVar4 = (int *)((int)piVar4 + 0x51);
    } while (iVar6 < *(int *)((int)param_1 + 0x71));
  }
  if (*(int *)((int)param_1 + 0xe9) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    (**(code **)(*param_1 + 4))(param_1,0);
  }
  return;
}


