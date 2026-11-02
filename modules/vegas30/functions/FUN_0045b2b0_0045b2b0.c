/* Module: vegas30.exe
   Function: FUN_0045b2b0
   Address: 0045b2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045b2b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0x20000;
  iVar5 = 5;
  if ((*(byte *)(param_1 + 0x5dc) & 0x80) != 0) {
    iVar5 = 0;
  }
  if ((*(int *)(param_1 + 0x5e0) <= param_2) &&
     (param_2 < *(int *)(param_1 + 0x5f0) + *(int *)(param_1 + 0x5e0))) {
    if (param_2 < *(int *)(param_1 + 0x618)) {
      return 0x20001;
    }
    if (*(int *)(param_1 + 0x62c) <= param_2) {
      return 0x20008;
    }
    if (*(int *)(param_1 + 0x628) <= param_2) {
      return 0x20007;
    }
    if (*(int *)(param_1 + 0x624) <= param_2) {
      return 0x20006;
    }
    if (*(int *)(param_1 + 0x620) <= param_2) {
      return 0x20005;
    }
    if (*(int *)(param_1 + 0x61c) <= param_2) {
      return 0x20004;
    }
    iVar1 = *(int *)(param_1 + 0x630);
    if (param_2 < iVar1 - iVar5) {
      return 0x20002;
    }
    iVar2 = *(int *)(param_1 + 0x638);
    if (iVar2 + iVar5 <= param_2) {
      return 0x20003;
    }
    iVar4 = ((iVar2 - iVar1) + -2) / 2;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
    uVar3 = 0x2000a;
    if (param_2 < iVar1 + iVar5) {
      return 0x20009;
    }
    if (iVar2 - iVar5 <= param_2) {
      uVar3 = 0x2000b;
    }
  }
  return uVar3;
}


