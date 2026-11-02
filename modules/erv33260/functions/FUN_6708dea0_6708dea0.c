/* Module: erv33260.dll
   Function: FUN_6708dea0
   Address: 6708dea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708dea0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 4;
  piVar3 = (int *)(param_1 + 4);
  do {
    iVar1 = (piVar3[1] + piVar3[-1]) * 0xd;
    iVar2 = (piVar3[-1] - piVar3[1]) * 0xd;
    iVar5 = *piVar3 * 7 + piVar3[2] * -0x11;
    iVar4 = *piVar3 * 0x11 + piVar3[2] * 7;
    piVar3[2] = iVar1 - iVar4;
    piVar3[-1] = iVar4 + iVar1;
    piVar3[1] = iVar2 - iVar5;
    *piVar3 = iVar5 + iVar2;
    local_8 = local_8 + -1;
    piVar3 = piVar3 + 4;
  } while (local_8 != 0);
  local_8 = 4;
  piVar3 = (int *)(param_1 + 0x10);
  do {
    iVar2 = (piVar3[-4] - piVar3[4]) * 0xd;
    iVar1 = (piVar3[-4] + piVar3[4]) * 0xd;
    iVar4 = *piVar3 * 7 + piVar3[8] * -0x11;
    iVar5 = piVar3[8] * 7 + *piVar3 * 0x11;
    piVar3[8] = (iVar1 - iVar5) * 0x30 >> 0xf;
    *piVar3 = (iVar4 + iVar2) * 0x30 >> 0xf;
    piVar3[-4] = (iVar5 + iVar1) * 0x30 >> 0xf;
    piVar3[4] = (iVar2 - iVar4) * 0x30 >> 0xf;
    local_8 = local_8 + -1;
    piVar3 = piVar3 + 1;
  } while (local_8 != 0);
  return;
}


