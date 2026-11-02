/* Module: sfpaplug.dll
   Function: FUN_004071c0
   Address: 004071c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004071c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
  }
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(LPCVOID *)(param_1 + 0x54) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00407140(param_1);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x228);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x22c);
  *(undefined4 *)(param_1 + 0x38) = param_8;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x298) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x2a0) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  puVar5 = (undefined4 *)(param_1 + 0x100);
  for (iVar4 = 0x66; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return;
}


