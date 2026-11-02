/* Module: sftrans1.dll
   Function: FUN_00488a10
   Address: 00488a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00488a10(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0) {
    iVar6 = param_1 + 8;
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  piVar2 = *(int **)(param_1 + 0xa8);
  if (0 < *piVar2) {
    do {
      iVar1 = *(int *)(piVar2[2] + iVar5 * 4);
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == *(int *)(iVar6 + 0x18)) {
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 == 0) {
          iVar3 = param_1 + 8;
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x18);
LAB_00488a64:
        *(undefined4 *)(iVar1 + 0x14) = uVar4;
      }
      else if (iVar3 == *(int *)(iVar6 + 0x1c)) {
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 == 0) {
          iVar3 = param_1 + 8;
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x1c);
        goto LAB_00488a64;
      }
      piVar2 = *(int **)(param_1 + 0xa8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar2);
  }
  FUN_00488ba0();
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  return;
}


