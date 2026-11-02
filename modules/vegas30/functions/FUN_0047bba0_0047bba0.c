/* Module: vegas30.exe
   Function: FUN_0047bba0
   Address: 0047bba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047bba0(int param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x20)) {
    uVar4 = FUN_004976f0(DAT_00647630,piVar1,*(uint *)(param_1 + 8) + *param_2,
                         *(int *)(param_1 + 0xc) + param_2[1] +
                         (uint)CARRY4(*(uint *)(param_1 + 8),*param_2));
    uVar2 = *(uint *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    *param_2 = (uint)uVar4 - uVar2;
    param_2[1] = ((int)((ulonglong)uVar4 >> 0x20) - iVar3) - (uint)((uint)uVar4 < uVar2);
  }
  return;
}


