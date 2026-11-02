/* Module: vegas30.exe
   Function: FUN_0040c3e0
   Address: 0040c3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c3e0(int param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = param_2;
  FUN_004ec4f0(param_2,1,&param_2,1);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      pcVar1 = *(char **)(piVar3[2] + iVar5 * 4);
      iVar2 = *(int *)(pcVar1 + 0x214);
      if (iVar2 == -0x7ffb1fb9) {
        SfShowFioInstallWizard(DAT_00647624,DAT_0064b510,pcVar1,3,1);
      }
      else if ((iVar2 == -0x7ffb1f7a) || (iVar2 == 0x4e016)) {
        iVar4 = FUN_005ee7d0(pcVar1,*(undefined4 *)(pcVar1 + 0x214));
        if ((iVar4 == 0) && (*(int *)(pcVar1 + 0x214) != -0x7ffb1f7a)) {
          return 1;
        }
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (((uint)param_2 & 0x1c3fe) != 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_3;
    *(uint *)(param_1 + 0xd4) = (uint)(((uint)param_2 & 0x1019c) == 0);
    return 1;
  }
  return 0;
}


