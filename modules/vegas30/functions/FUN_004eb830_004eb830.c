/* Module: vegas30.exe
   Function: FUN_004eb830
   Address: 004eb830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb830(int *param_1,undefined4 param_2)

{
  uchar *_Dest;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_108;
  uchar local_104 [260];
  
  iVar3 = 0;
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    local_108 = 0;
    if (0 < iVar2) {
      do {
        _Dest = *(uchar **)(param_1[2] + iVar3 * 4);
        if (*(int *)(_Dest + 0x208) == 0x11) {
          iVar1 = FUN_0043dce0(param_2,_Dest,local_104,0x104);
          if (-1 < iVar1) {
            _mbscpy(_Dest,local_104);
          }
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 + -1;
          local_108 = local_108 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
      if (local_108 != 0) {
        FUN_004e7610();
      }
    }
    return iVar1;
  }
  return 0;
}


