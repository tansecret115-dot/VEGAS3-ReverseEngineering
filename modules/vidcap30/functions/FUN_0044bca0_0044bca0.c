/* Module: vidcap30.exe
   Function: FUN_0044bca0
   Address: 0044bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0044bca0(undefined4 param_1,int param_2,int *param_3,SIZE_T *param_4,undefined4 param_5)

{
  SIZE_T dwBytes;
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  undefined4 local_878;
  uchar local_870 [1068];
  undefined4 local_444;
  undefined4 local_440;
  uint local_43c;
  byte local_4;
  
  local_878 = 0;
  FUN_0044d210();
  FUN_0044cb00();
  iVar2 = FUN_0044d700();
  if (&stack0x00000000 == (undefined1 *)0x870) {
    iVar3 = 0;
  }
  else {
    iVar3 = lstrlenA((LPCSTR)local_870);
    iVar3 = iVar3 + 1;
  }
  dwBytes = iVar3 + 0x17 + iVar2;
  hMem = GlobalAlloc(0x40,dwBytes);
  puVar4 = GlobalLock(hMem);
  *param_3 = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    local_878 = 0x8007000e;
  }
  else {
    *puVar4 = 0;
    *(undefined4 *)(*param_3 + 0xc) = param_5;
    _mbscpy((uchar *)(*param_3 + 0x14),local_870);
    iVar2 = lstrlenA((LPCSTR)(*param_3 + 0x14));
    *(short *)(*param_3 + 0x10) = (short)iVar2 + 1;
    uVar1 = FUN_0044d710(param_5,(&DAT_005bc3dc)[param_2]);
    *(undefined2 *)(*param_3 + 0x12) = uVar1;
    if ((local_43c & 1) != 0) {
      iVar2 = FUN_0044c620();
      iVar3 = 0;
      *(uint *)*param_3 = *(uint *)*param_3 | 0x10000;
      if (0 < iVar2) {
        do {
          FUN_0044c5c0();
          FUN_0044cb00();
          if ((local_4 & 1) != 0) {
            *(uint *)*param_3 = *(uint *)*param_3 | 0x20000;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
    *(uint *)*param_3 = *(uint *)*param_3 | -(uint)((local_43c & 2) != 0) & 0x180000;
    *(uint *)*param_3 = *(uint *)*param_3 | (~local_43c & 4) << 0x10;
    *(undefined4 *)(*param_3 + 4) = local_444;
    *(undefined4 *)(*param_3 + 8) = local_440;
  }
  if (param_4 != (SIZE_T *)0x0) {
    *param_4 = dwBytes;
  }
  return local_878;
}


