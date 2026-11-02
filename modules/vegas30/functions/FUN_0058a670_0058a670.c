/* Module: vegas30.exe
   Function: FUN_0058a670
   Address: 0058a670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058a670(int param_1)

{
  uint uVar1;
  int iVar2;
  SIZE_T dwSize;
  LPVOID pvVar3;
  HGLOBAL hMem;
  
  iVar2 = __alldiv(DAT_006486a0,DAT_006486a4,10000,0);
  uVar1 = (uint)(iVar2 * *(int *)(param_1 + 0x118)) / 8000 + 0x3000;
  dwSize = uVar1 - uVar1 % 0x3000;
  *(SIZE_T *)(param_1 + 0x13c) = dwSize;
  pvVar3 = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,4);
  *(LPVOID *)(param_1 + 300) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pvVar3 = VirtualAlloc((LPVOID)0x0,*(SIZE_T *)(param_1 + 0x13c),0x1000,4);
  *(LPVOID *)(param_1 + 0x130) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  hMem = GlobalAlloc(0x42,0x10000);
  pvVar3 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x134) = pvVar3;
  return (-(uint)(pvVar3 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
}


