/* Module: sfcd.cdd
   Function: FUN_004165f0
   Address: 004165f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004165f0(HSFCD__ *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _scsicommand local_64 [22];
  byte local_4e;
  ulong local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  iVar2 = FUN_00416520(param_1,local_64,iVar1 + 0x1e8,param_2,param_3);
  while( true ) {
    if ((iVar2 == 0) || (iVar3 = SfScsi_IsCheckCondition(local_c), iVar3 == 0)) {
      return iVar2;
    }
    if ((1 < (local_4e & 0xf)) && ((local_4e & 0xf) != 6)) break;
    iVar2 = FUN_00416520(param_1,local_64,iVar1 + 0x1e8,param_2,param_3);
  }
  return -0x7ffb1f38;
}


