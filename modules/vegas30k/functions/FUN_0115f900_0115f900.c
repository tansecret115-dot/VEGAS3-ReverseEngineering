/* Module: vegas30k.dll
   Function: FUN_0115f900
   Address: 0115f900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115f900(int *param_1,int param_2,int *param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((int)param_1 + param_2 * 4 + 0x7d) == 0) {
    uVar1 = FUN_0115e810(param_1);
    *(undefined4 *)((int)param_1 + param_2 * 4 + 0x7d) = uVar1;
  }
  iVar3 = 0;
  do {
    iVar2 = (param_4 * *param_3 + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    iVar3 = iVar3 + 2;
    param_3 = param_3 + 1;
    *(short *)(*(int *)((int)param_1 + param_2 * 4 + 0x7d) + -2 + iVar3) = (short)iVar2;
  } while (iVar3 < 0x80);
  *(undefined1 *)(*(int *)((int)param_1 + param_2 * 4 + 0x7d) + 0x80) = 0;
  return;
}


