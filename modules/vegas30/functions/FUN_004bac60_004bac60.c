/* Module: vegas30.exe
   Function: FUN_004bac60
   Address: 004bac60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bac60(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                uint param_7,int param_8,LPCSTR param_9,undefined4 *param_10)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  int local_144;
  uint local_140 [4];
  int local_130;
  uint local_120;
  CHAR local_110 [259];
  undefined1 local_d;
  
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc38);
  }
  if (param_4 < 0) {
    param_4 = FUN_004baba0(param_1,param_2);
  }
  if (param_3 == 0) {
    param_7 = 0;
    param_8 = 0;
  }
  puVar3 = local_140;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_120 = local_120 ^ (local_120 ^ param_3) & 1;
  local_140[0] = param_5 + param_7;
  local_140[1] = param_6 + param_8 + (uint)CARRY4(param_5,param_7);
  if ((param_6 <= (int)local_140[1]) && ((param_6 < (int)local_140[1] || (param_5 < local_140[0]))))
  {
    local_140[0] = param_5;
    local_140[1] = param_6;
  }
  if ((param_8 < 1) && (param_8 < 0)) {
    bVar4 = param_7 != 0;
    param_7 = -param_7;
    param_8 = -(param_8 + (uint)bVar4);
  }
  local_130 = param_4;
  if (10 < param_4) {
    local_130 = 0;
  }
  local_140[2] = param_7;
  local_140[3] = param_8;
  if (param_9 != (LPCSTR)0x0) {
    lstrcpynA(local_110,param_9,0x104);
    local_d = 0;
  }
  iVar1 = lstrlenA(local_110);
  iVar1 = _SfList_AllocAndInsertItem_20(iVar2,local_140,iVar1 + 0x39,0xffffffff,&local_144);
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = *(undefined4 *)(*(int *)(iVar2 + 8) + local_144 * 4);
  }
  if (-1 < iVar1) {
    _SfList_Sort_12(iVar2,0,&LAB_004baab0);
    FUN_004ba9e0(param_1);
  }
  return iVar1;
}


