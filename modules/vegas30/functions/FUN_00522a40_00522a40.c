/* Module: vegas30.exe
   Function: FUN_00522a40
   Address: 00522a40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00522a40(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) {
      piVar2 = (int *)FUN_00522a00(0);
      if (piVar2 != (int *)0x0) {
        if (*piVar2 == 1) {
          iVar3 = 0x17;
          bVar6 = true;
          piVar5 = (int *)(param_1 + 0x24);
          piVar2 = (int *)(piVar2[2] + 0x18);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar6 = *piVar5 == *piVar2;
            piVar5 = piVar5 + 1;
            piVar2 = piVar2 + 1;
          } while (bVar6);
          if (!bVar6) {
            return 1;
          }
        }
        else if (1 < *piVar2) {
          uVar4 = 1;
        }
      }
    }
    else {
      if (param_2 == 1) {
        return ~uVar1 >> 2 & 1;
      }
      if (param_2 == 2) {
        return ~uVar1 >> 3 & 1;
      }
    }
  }
  return uVar4;
}


