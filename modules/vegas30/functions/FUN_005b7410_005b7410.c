/* Module: vegas30.exe
   Function: FUN_005b7410
   Address: 005b7410
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b7410(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG local_4;
  
  iVar1 = 0;
  uVar2 = 0;
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 4);
    while (iVar1 = FUN_005b5aa0(piVar3 + -1), -1 < iVar1) {
      param_3 = *piVar3 + 8;
      iVar1 = *piVar3 + -0x18;
      if (iVar1 != 0) {
        local_4 = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0x118),iVar1,&local_4,1);
      }
      iVar1 = FUN_005b7ad0(*piVar3,&param_3);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (param_2 < param_3) {
        return -0x7ffb1ff8;
      }
      param_2 = param_2 - param_3;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 8;
      if (param_4 <= uVar2) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


