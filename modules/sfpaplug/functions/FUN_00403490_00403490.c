/* Module: sfpaplug.dll
   Function: FUN_00403490
   Address: 00403490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403490(int param_1,SIZE_T param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  pvVar1 = GlobalAlloc(0x42,param_2);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x40) = pvVar2;
  *(SIZE_T *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x60) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 100) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x68) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x6c) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x70) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,0x800);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x74) = pvVar2;
  pvVar1 = GlobalAlloc(0x42,param_2 * 2);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x44) = pvVar2;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}


