/* Module: vegas30.exe
   Function: FUN_005404e0
   Address: 005404e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005404e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    return -0x7ff8ffa9;
  }
  iVar1 = FUN_005b8900(param_1,3);
  iVar2 = 0x150;
  if (1 < iVar1) {
    iVar2 = (iVar1 * 3 + 0x51) * 4;
  }
  iVar2 = _SfList_AllocItem_12(*(undefined4 *)(param_1 + 0x228),iVar2,&local_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  *param_2 = local_4;
  puVar4 = local_4;
  for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_4[0x50] = iVar1;
  return iVar2;
}


