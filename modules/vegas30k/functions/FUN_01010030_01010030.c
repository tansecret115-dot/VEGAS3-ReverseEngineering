/* Module: vegas30k.dll
   Function: FUN_01010030
   Address: 01010030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01010030(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_1[10] == 0) {
    hMem = GlobalAlloc(0x42,0x400);
    pvVar2 = GlobalLock(hMem);
    param_1[10] = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return 0x80004005;
    }
  }
  uVar1 = param_3;
  uVar5 = param_1[7];
  uVar7 = param_1[6];
  if (((uint)param_1[9] <= uVar5) && ((uVar5 != param_1[9] || ((uint)param_1[8] <= uVar7)))) {
    return 0x80004005;
  }
  iVar6 = (int)param_3 >> 0x1f;
  uVar3 = iVar6 + uVar5 + (uint)CARRY4(param_3,uVar7);
  if (((uint)param_1[5] < uVar3) ||
     ((((uint)param_1[5] <= uVar3 && ((uint)param_1[4] < param_3 + uVar7)) ||
      ((uVar5 <= (uint)param_1[3] && ((uVar5 < (uint)param_1[3] || (uVar7 < (uint)param_1[2]))))))))
  {
    SetFilePointer((HANDLE)*param_1,(int)param_1[6] >> 3,(PLONG)0x0,0);
    BVar4 = ReadFile((HANDLE)*param_1,(LPVOID)param_1[10],0x400,&param_3,(LPOVERLAPPED)0x0);
    uVar5 = param_3;
    if (BVar4 == 0) {
      return 0x80004005;
    }
    if (param_3 == 0) {
      return 0x80004005;
    }
    uVar8 = __allshl();
    *(undefined8 *)(param_1 + 2) = uVar8;
    lVar9 = __allmul(uVar5,0,8,0);
    *(longlong *)(param_1 + 4) = lVar9 + *(longlong *)(param_1 + 2);
  }
  uVar5 = (uint)(param_1[6] - param_1[2]) >> 3;
  uVar7 = (uint)*(byte *)(uVar5 + param_1[10]) << 0x18;
  *param_2 = uVar7;
  if (8 < (int)uVar1) {
    *param_2 = (uint)*(byte *)(uVar5 + 1 + param_1[10]) << 0x10 | uVar7;
  }
  if (0x10 < (int)uVar1) {
    *param_2 = *param_2 | (uint)*(byte *)(uVar5 + 2 + param_1[10]) << 8;
  }
  if (0x18 < (int)uVar1) {
    *param_2 = *param_2 | (uint)*(byte *)(uVar5 + 3 + param_1[10]);
  }
  *param_2 = (*param_2 << ((byte)param_1[6] & 7)) >> (0x20U - (char)uVar1 & 0x1f);
  uVar5 = param_1[6];
  param_1[6] = uVar5 + uVar1;
  param_1[7] = param_1[7] + iVar6 + (uint)CARRY4(uVar5,uVar1);
  return 0;
}


