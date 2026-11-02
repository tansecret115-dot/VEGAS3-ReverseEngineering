/* Module: sftrkfx1.dll
   Function: FUN_5cbb51c0
   Address: 5cbb51c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb51c0(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  
  if (param_2 == (ushort *)0x0) {
    return 0x80070057;
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = (uint)*param_2;
  param_1[4] = *(undefined4 *)(param_2 + 2);
  param_1[5] = (uint)param_2[7];
  uVar1 = param_2[1];
  param_1[6] = (uint)uVar1;
  pvVar2 = GlobalAlloc(0x42,(uint)uVar1 * 0x1e8);
  pvVar3 = GlobalLock(pvVar2);
  param_1[7] = pvVar3;
  pvVar2 = GlobalAlloc(0x42,param_1[6] * 0x1e8);
  pvVar3 = GlobalLock(pvVar2);
  param_1[8] = pvVar3;
  if ((param_1[7] != 0) && (pvVar3 != (LPVOID)0x0)) {
    return 0;
  }
  FUN_5cbb5440((int)param_1);
  return 0x8007000e;
}


