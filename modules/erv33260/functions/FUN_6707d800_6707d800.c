/* Module: erv33260.dll
   Function: FUN_6707d800
   Address: 6707d800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707d800(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x2a4) == 0) || (*(int *)(param_1 + 0x2a8) == 0)) {
    iVar1 = *(int *)(param_1 + 0x178);
    if ((iVar1 == 1) || (iVar1 == 2)) {
      uVar4 = (uint)(*(int *)(param_1 + 0x94) << 5) / 0x2711;
      *(uint *)(param_1 + 0x104) = 0x1f - uVar4;
      if (0x1f - uVar4 < 3) {
        *(undefined4 *)(param_1 + 0x104) = 3;
      }
      if ((iVar1 == 2) && (*(int *)(param_1 + 0xd8) == 2)) {
        uVar4 = (uint)(*(int *)(param_1 + 0xdc) << 5) / 0x2711;
      }
      else if (*(int *)(param_1 + 0x90) != 2) goto LAB_6707d960;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x94);
      }
      else {
        iVar3 = *(int *)(param_1 + 0xb0);
      }
      *(uint *)(param_1 + 0x104) = 0x1f - (uint)(iVar3 << 5) / 0x2711;
      iVar3 = *(int *)(param_1 + 8);
      if (((iVar3 == 0x15) || (iVar3 == 0x16)) || (iVar3 == 0x17)) {
        if (*(uint *)(param_1 + 0x104) < 3) {
          *(undefined4 *)(param_1 + 0x104) = 3;
        }
      }
      else if (*(uint *)(param_1 + 0x104) < 8) {
        *(undefined4 *)(param_1 + 0x104) = 8;
      }
      if (iVar1 == 2) {
        uVar4 = (uint)(*(int *)(param_1 + 0xb0) << 5) / 0x2711;
      }
      else {
        if (((iVar1 == 0) || (iVar1 == 1)) || ((iVar1 != 3 || (*(int *)(param_1 + 0x90) != 2))))
        goto LAB_6707d960;
        uVar4 = (uint)(*(int *)(param_1 + 0x94) << 5) / 0x2711;
      }
    }
    cVar2 = '\x1f' - (char)uVar4;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x104);
  }
  *(char *)(param_1 + 0x1c0) = cVar2;
LAB_6707d960:
  if (*(uint *)(param_1 + 0x104) < (uint)*(byte *)(param_1 + 0x1c0)) {
    *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_1 + 0x104);
  }
  return;
}


