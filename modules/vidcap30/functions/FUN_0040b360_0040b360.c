/* Module: vidcap30.exe
   Function: FUN_0040b360
   Address: 0040b360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b360(int param_1,undefined4 param_2,WPARAM param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0xc) & 0x80) != 0) {
    uVar1 = FUN_0040b2c0(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_3 == 0) {
    uVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),0x83,0,param_4);
    if (((*(uint *)(param_1 + 0xc) & 0x100000) != 0) && ((*(uint *)(param_1 + 0xc) & 4) == 0)) {
      iVar2 = GetSystemMetrics(4);
      if (9 < (iVar2 * 7) / 0xc) {
        iVar2 = GetSystemMetrics(4);
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + (iVar2 * 7) / 0xc;
        return uVar1;
      }
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 9;
    }
  }
  else {
    uVar1 = DefWindowProcA(*(HWND *)(param_1 + 8),0x83,param_3,param_4);
    if (((*(uint *)(param_1 + 0xc) & 0x100000) != 0) && ((*(uint *)(param_1 + 0xc) & 4) == 0)) {
      iVar2 = GetSystemMetrics(4);
      if ((iVar2 * 7) / 0xc < 10) {
        iVar2 = 9;
      }
      else {
        iVar2 = GetSystemMetrics(4);
        iVar2 = (iVar2 * 7) / 0xc;
      }
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + iVar2;
    }
    if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
      uVar1 = uVar1 | 0x100;
    }
    if ((*(uint *)(param_1 + 0xc) & 0x200) != 0) {
      return uVar1 | 0x200;
    }
  }
  return uVar1;
}


