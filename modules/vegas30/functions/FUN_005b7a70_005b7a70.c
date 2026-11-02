/* Module: vegas30.exe
   Function: FUN_005b7a70
   Address: 005b7a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b7a70(uint param_1,uint param_2,int *param_3)

{
  BOOL BVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1 & 0xffffff;
  if ((param_2 & 1) != 0) {
    BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x118),(LPCVOID)((int)&uStack_4 + 3),1,&param_2,
                      (LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      return 0x8004e009;
    }
    if (param_2 != 1) {
      return 0x8004e009;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + 1;
    }
  }
  return 0;
}


