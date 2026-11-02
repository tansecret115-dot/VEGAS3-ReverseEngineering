/* Module: vegas30.exe
   Function: FUN_00534f70
   Address: 00534f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00534f70(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_2 + 0x8d0) = 0;
  uVar5 = ftol();
  *(undefined8 *)(param_2 + 0x8f8) = uVar5;
  uVar4 = FUN_00535040(param_1,param_2);
  iVar1 = *(int *)(param_2 + 0x8bc);
  iVar3 = 0;
  while (iVar2 = iVar1, iVar2 != 0) {
    if (*(int *)(iVar2 + 0x1c) == 0) {
      iVar1 = *(int *)(iVar2 + 0x144);
      iVar3 = iVar2;
    }
    else {
      *(int *)(param_2 + 0x410) = *(int *)(param_2 + 0x410) + -1;
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x8bc) = *(undefined4 *)(iVar2 + 0x144);
      }
      else {
        *(undefined4 *)(iVar3 + 0x144) = *(undefined4 *)(iVar2 + 0x144);
      }
      iVar1 = *(int *)(iVar2 + 0x144);
      if (iVar2 != 0) {
        FUN_00532560(iVar2);
      }
    }
  }
  return uVar4;
}


